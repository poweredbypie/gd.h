#ifndef __LEVELEDITORLAYER_H__
#define __LEVELEDITORLAYER_H__

#include <gd.h>

namespace gd {

class GJBaseGameLayer;
class EditorUI;

class LevelEditorLayer : public GJBaseGameLayer {
    protected:
        PAD(0xb8)
        EditorUI* m_pEditorUI;

    public:
        EditorUI* getEditorUI() { return this->m_pEditorUI; }
};

}

#endif
