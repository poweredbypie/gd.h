#ifndef __EDITORUI_H__
#define __EDITORUI_H__

#include <gd.h>

namespace gd {

class EditorUI : public cocos2d::CCLayer {
    public:
        cocos2d::CCArray* pasteObjects(std::string const& _str) {
            return reinterpret_cast<cocos2d::CCArray*(__thiscall*)(
                EditorUI*, std::string
            )>(
                base + 0x88240
            )(
                this, _str
            );
        }
};

}
