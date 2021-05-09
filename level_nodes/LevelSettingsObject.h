#ifndef __LEVELSETTINGSOBJECT_H__
#define __LEVELSETTINGSOBJECT_H__

#include <gd.h>

namespace gd {
    class LevelSettingsObject : public cocos2d::CCNode {
    public:
        PAD(14);
        bool twoPlayerMode;
    };
}

#endif