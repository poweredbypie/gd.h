#ifndef __EDITORUI_H__
#define __EDITORUI_H__

#include <gd.h>

namespace gd {

class EditButtonBar : public cocos2d::CCLayer {};

class EditorUI : public cocos2d::CCLayer {
    protected:
        EditButtonBar* m_pEditButtonBar;
    
    public:
        cocos2d::CCArray* pasteObjects(std::string const& _str) {
            auto ret = reinterpret_cast<cocos2d::CCArray*(__thiscall*)(
                EditorUI*, std::string
            )>(
                base + 0x88240
            )(
                this, _str
            );

            return ret;
        }

        void deselectAll() {
            reinterpret_cast<void(__fastcall*)(EditorUI*)>(
                base + 0x86af0
            )(this);
        }

        void selectObjects(cocos2d::CCArray* objs, bool idk) {
            reinterpret_cast<void(__thiscall*)(
                EditorUI*, cocos2d::CCArray*, bool
            )>(
                base + 0x864a0
            )(
                this, objs, idk
            );
        }

        cocos2d::CCArray* getSelectedObjects() {
            return reinterpret_cast<cocos2d::CCArray*(__thiscall*)(EditorUI*)>(
                base + 0x86900
            )(this);
        }
};

}

#endif
