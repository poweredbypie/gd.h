#ifndef __LEVELSETTINGSOBJECT_H__
#define __LEVELSETTINGSOBJECT_H__

#include <gd.h>

namespace gd {
    class GJEffectManager;
    class GJGameLevel;

    class LevelSettingsObject : public cocos2d::CCNode {
    public:
        GJEffectManager* m_effectManager;
        PAD(9);
        bool m_twoPlayerMode;
        PAD(26);
        GJGameLevel* m_level;
        std::string m_unknownStr1;
    };
}

#endif
