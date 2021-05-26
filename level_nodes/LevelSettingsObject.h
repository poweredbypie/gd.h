#ifndef __LEVELSETTINGSOBJECT_H__
#define __LEVELSETTINGSOBJECT_H__

#include <gd.h>

namespace gd {
<<<<<<< HEAD
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
=======
    class LevelSettingsObject : public cocos2d::CCNode {
        // tood
    };
}

#endif
>>>>>>> 194fd801988f76fb9d7d8f213b33658561775070
