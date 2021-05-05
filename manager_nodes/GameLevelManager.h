#ifndef __GAMELEVELMANAGER_H__
#define __GAMELEVELMANAGER_H__

#include <gd.h>

namespace gd {

class GJGameLevel;

class GameLevelManager : public cocos2d::CCNode {
    public:
        cocos2d::CCDictionary* unkDict1;
        cocos2d::CCDictionary* unkDict2;
        cocos2d::CCDictionary* savedLevelsDict;
        PAD(8);
        cocos2d::CCDictionary* unkDict4;
        cocos2d::CCDictionary* unkDict5;
        cocos2d::CCDictionary* unkDict6;
        cocos2d::CCDictionary* unkDict7;
        cocos2d::CCDictionary* unkDict8;
        cocos2d::CCDictionary* unkDict9;
        cocos2d::CCDictionary* unkDict10;
        cocos2d::CCDictionary* unkDict11;
        cocos2d::CCDictionary* unkDict12;
        PAD(32);
        cocos2d::CCDictionary* unkDict13;
        PAD(12);
        cocos2d::CCDictionary* unkDict14;
        cocos2d::CCDictionary* unkDict15;
        cocos2d::CCDictionary* unkDict16;
        cocos2d::CCDictionary* unkDict17;
        cocos2d::CCDictionary* unkDict18;
        cocos2d::CCDictionary* unkDict19;
        cocos2d::CCDictionary* unkDict20;
        cocos2d::CCDictionary* unkDict21;
        cocos2d::CCDictionary* unkDict22;
        cocos2d::CCDictionary* unkDict23;
        cocos2d::CCDictionary* unkDict24;
        cocos2d::CCDictionary* unkDict25;
        cocos2d::CCDictionary* unkDict26;
        cocos2d::CCDictionary* unkDict27;
        cocos2d::CCDictionary* unkDict28;
        PAD(168);
        CCString* unkStr;
        
        inline static GameLevelManager* sharedState() {
            return reinterpret_cast<GameLevelManager*(__stdcall*)()>( gd::base + 0x9f860 )();
        }

        inline static gd::GJGameLevel* createNewLevel() {
            return reinterpret_cast<gd::GJGameLevel*(__stdcall*)()>( gd::base + 0xa0db0 )();
        }
};

}

#endif
