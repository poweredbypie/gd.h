#ifndef __LEVELEDITORLAYER_H__
#define __LEVELEDITORLAYER_H__

#include <gd.h>

namespace gd {

class GJBaseGameLayer;
class EditorUI;
class GameObject;

class LevelEditorLayer : public GJBaseGameLayer {
    protected:
        PAD(0x2c)
        int m_nCurrentLayer;
        PAD(0x84)
        EditorUI* m_pEditorUI;

    public:
        EditorUI* getEditorUI() { return this->m_pEditorUI; }

        void removeObject(GameObject * obj, bool idk) {
            reinterpret_cast<void(__thiscall*)(
                LevelEditorLayer *,GameObject *,bool
            )>(
                base + 0x161cb0
            )(
                this, obj, idk
            );
        }

        int getNextFreeGroupID(cocos2d::CCArray* objs) {
            return reinterpret_cast<int(__thiscall*)(
                LevelEditorLayer*, cocos2d::CCArray*
            )>(
                base + 0x164ae0
            )(
                this, objs
            );
        }

        GameObject* addObjectFromString(std::string const& str) {
            auto ret = reinterpret_cast<GameObject*(__thiscall*)(
                LevelEditorLayer*, std::string
            )>(
                base + 0x160c80
            )(
                this, str
            );

            // no stack fix required... apparently

            return ret;
        }
    
        int getCurrentLayer() { return m_nCurrentLayer; }
    };

}

#endif
