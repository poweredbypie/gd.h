#ifndef __ACHIEVEMENTBAR_H__
#define __ACHIEVEMENTBAR_H__

#include <gd.h>

namespace gd {

class AchievementManager;

class AchievementBar : public cocos2d::CCNodeRGBA {


    public:
        static AchievementBar* create(
            // achievement name
            const char* _title,
            
            // achievement description (doesn't show up in-game)
            const char* _desc,

            // if _type==0, this is in the format of icon_0, icon_1, icon_2 etc.
            const char* _icon,

            // achievement type (0 for normal, 1 for quest)
            int _type
        ) {
            auto pRet = reinterpret_cast<AchievementBar*(__fastcall*)(
                const char*, const char*, const char*, int
            )>(
                base + 0x3b120
            )(
                _title, _desc, _icon, _type
            );

            __asm add esp, 0x8

            return pRet;
        }
};

}

#endif
