import sys
import re
from pathlib import Path
import subprocess

with open('../include/gd.h', 'r') as file:
    files = re.findall(r'#include "(.+?\/([^/]+?)\.h)"', file.read())

classes = {}
generated_code = '\tstd::cout << std::hex;\n'

for item in files:
    path, target_class = item
    path = Path('..') / path
    if not path.exists(): continue
    with open(path, 'r') as file:
        for match in re.finditer(r'^\s*[a-zA-Z0-9:_\-]+\s*\*?\s*(?:([0-9a-zA-Z_]+);\s*\/\/\s*(0x[0-9a-fA-F]+)|(unk([0-9a-fA-F]+));)', file.read(), re.MULTILINE):
            name, offset, *rest = match.groups()
            if name is None:
                name, offset = rest
            classes[target_class] = classes.get(target_class, {})
            classes[target_class][name] = int(offset, 16)
    if classes.get(target_class):
        generated_code += f'\t{{\n\tauto test = new gd::{target_class};\n'
        for name in classes[target_class].keys():
            generated_code += f'\tstd::cout << "{target_class} {name} 0x" << offset_of(test, {name}) << std::endl;\n'
        generated_code += '\t}\n'

with open('template.cpp', 'r') as file:
    source = file.read()

with open('generated.cpp', 'w') as file:
    file.write(source.replace('// {INJECT CODE}', generated_code))

proc = subprocess.run(['cmake','--build','build','--config','Release','--target','ALL_BUILD','-j','10'], stdout=subprocess.PIPE)
if proc.returncode:
    print('Build failed')
    print(proc.stdout.decode())
    exit(proc.returncode)

proc = subprocess.run([str(Path('./build/release/offset-test.exe').absolute())], stdout=subprocess.PIPE)
output = proc.stdout.decode()

ESCAPE = '\x1b'
RED = ESCAPE + '[0;31m'
GREEN = ESCAPE + '[0;32m'
BLUE = ESCAPE + '[0;34m'
RESET = ESCAPE + '[0m'
has_failed = False
for line in output.splitlines():
    class_name, name, offset = line.split(' ')
    expected_offset = classes[class_name][name]
    offset = int(offset, 16)
    if offset == expected_offset:
        print(f'{BLUE}[0x{offset:X}]{RESET} {GREEN}{class_name}::{name} matches{RESET}')
    else:
        print(f'{BLUE}[0x{offset:X}]{RESET} {RED}{class_name}::{name} doesnt match{RESET} (expected {BLUE}0x{expected_offset:X}{RESET})')
        has_failed = True

if has_failed:
    exit(1)