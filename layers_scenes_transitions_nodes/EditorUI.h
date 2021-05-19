#ifndef __EDITORUI_H__
#define __EDITORUI_H__

#include <gd.h>

namespace gd {

class EditorUI : public cocos2d::CCLayer {
    protected:
        PAD(0x118)
        cocos2d::CCArray* m_pObjects;
        PAD(0X148)
        EditorUI* m_pEditorUI;
        
    public:
        cocos2d::CCArray* pasteObjects(std::string const& _str) {
            auto ret = reinterpret_cast<cocos2d::CCArray*(__thiscall*)(
                EditorUI*, std::string
            )>(
                base + 0x88240
            )(
                this, _str
            );

            __asm add esp, 0x18

            return ret;
        }

        cocos2d::CCArray* getSelectedObjects() {
            return reinterpret_cast<cocos2d::CCArray*(__thiscall*)(EditorUI*)>(
                base + 0x86900
            )(this);
        }

        cocos2d::CCArray* getAllObjects() { return this->m_pObjects; }

        void removeObject(GameObject * obj, bool idk) {
            reinterpret_cast<void(__thiscall*)(
                LevelEditorLayer*, GameObject*, bool
            )>(
                base + 0x161cb0
            )(
                this, obj, idk
            );
        } 
};

}

#endif
