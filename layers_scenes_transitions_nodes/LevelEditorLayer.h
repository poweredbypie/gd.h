#ifndef __LEVELEDITORLAYER_H__
#define __LEVELEDITORLAYER_H__

#include <gd.h>

namespace gd {

    class GJBaseGameLayer;
    class EditorUI;
    class GameObject;
    class GJGroundLayer;

    class LevelEditorLayer : public GJBaseGameLayer {
    public:
        PAD(0x44)
        GameObject* m_pCopyStateObject;
        PAD(0x40)
        int m_nCurrentLayer;
        PAD(0x28)
        EditorUI* m_pEditorUI;
        PAD(0x40)
        GJGroundLayer* m_pGroundLayer;

    public:
        static LevelEditorLayer* get() { return gd::GameManager::sharedState()->getEditorLayer(); }
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
            return reinterpret_cast<GameObject*(__thiscall*)(LevelEditorLayer*, std::string)>(base + 0x160c80)(this, str);
        }

        // yes it's misspelled in GD aswell
        void pasteAtributeState(GameObject* obj, cocos2d::CCArray* objs) {
            reinterpret_cast<void(__thiscall*)(LevelEditorLayer*, GameObject*, cocos2d::CCArray*)>(
                base + 0x16b740
            )(this, obj, objs);
        }
        
        int getCurrentLayer() { return m_nCurrentLayer; }
        void setCurrentLayer(int n) { m_nCurrentLayer = n; }
    };

}

#endif
