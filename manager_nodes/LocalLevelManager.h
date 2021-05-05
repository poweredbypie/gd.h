#ifndef __LOCALLEVELMANAGER_H__
#define __LOCALLEVELMANAGER_H__

#include <gd.h>

namespace gd {

class LocalLevelManager : public cocos2d::CCNode {
    public:
        PAD(0x1C);
        cocos2d::CCDictionary* unkDict1; // {"1": CCString} (the ccstring is really big)
        cocos2d::CCDictionary* unkDict2; // {"1": CCString} (the ccstring is really big)
        cocos2d::CCArray* levelsArray;

        inline static GameLevelManager* sharedState() {
            return reinterpret_cast<GameLevelManager*(__stdcall*)()>( gd::base + 0x9f860 )();
        }

        inline static gd::GJGameLevel* createNewLevel() {
            return reinterpret_cast<gd::GJGameLevel*(__stdcall*)()>( gd::base + 0xa0db0 )();
        }
};

}

#endif
