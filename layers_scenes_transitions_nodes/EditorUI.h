#ifndef __EDITORUI_H__
#define __EDITORUI_H__

#include <gd.h>

namespace gd {

    class GameObject;

    class EditorUI : public cocos2d::CCLayer {
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

        void moveObject(GameObject* obj, cocos2d::CCPoint position) {
            reinterpret_cast<void(__thiscall*)(EditorUI*, GameObject*, cocos2d::CCPoint)>(base + 0x8ddb0)(this, obj, position);
        }
    };

}

#endif
