#ifndef __LEVELEDITORLAYER_H__
#define __LEVELEDITORLAYER_H__

#include <gd.h>

namespace gd {

class GJBaseGameLayer;
class EditorUI;

class LevelEditorLayer : public GJBaseGameLayer {
    protected:
        PAD(0x118)
        cocos2d::CCArray* m_pObjects;
        PAD(0X148)
        EditorUI* m_pEditorUI;

    public:
        EditorUI* getEditorUI() { return this->m_pEditorUI; }

        cocos2d::CCArray* getAllObjects() { return this->m_pObjects; }

        void removeObject(GameObject * obj, bool idk) {
            reinterpret_cast<void(__thiscall*)(
                LevelEditorLayer *,GameObject *,bool
            )>(
                base + 0x161cb0
            )(
                this, obj, idk
            );
        } 
    };

}

#endif
