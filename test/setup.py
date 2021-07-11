import sys
import re
from pathlib import Path
import subprocess

target_class = sys.argv[1]
with open('../include/gd.h', 'r') as file:
    match = re.search(fr'#include "(.+?{target_class}.h)"', file.read())
    if not match:
        print('wtf')
        exit()

members = [] # (name, expected offset)
generated_code = f'\tstd::cout << std::hex;\n\tauto test = new gd::{target_class};\n'

with open(Path('..') / match.group(1), 'r') as file:
    for match in re.finditer(r'^\s*[a-zA-Z0-9:_\-]+\s*\*?\s*([0-9a-zA-Z_]+);\s*\/\/\s*(0x[0-9a-fA-F]+)', file.read(), re.MULTILINE):
        name, offset = match.groups()
        members.append((name, int(offset, 16)))
        generated_code += f'\tstd::cout << "{name} 0x" << offset_of(test, {name}) << std::endl;\n'

with open('template.cpp', 'r') as file:
    source = file.read()

with open('generated.cpp', 'w') as file:
    file.write(source.replace('// {INJECT CODE}', generated_code))

subprocess.run(['cmake','--build','build','--config','Release','--target','ALL_BUILD','-j','10'], stdout=subprocess.PIPE)

proc = subprocess.run([str(Path('./build/release/offset-test.exe').absolute())], stdout=subprocess.PIPE)
output = proc.stdout.decode()
for line, (name, expected_offset) in zip(output.splitlines(), members):
    name_, offset = line.split(' ')
    assert name == name_
    offset = int(offset, 16)
    if offset == expected_offset:
        print(f'[blue][[0x{offset:X}]][/blue] [green]{name} matches[/green]')
    else:
        print(f'[blue][[0x{offset:X}]][/blue] [red]{name} doesnt match[/red] (expected [blue]0x{expected_offset:X}[/blue])')