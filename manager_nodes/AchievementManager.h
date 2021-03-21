#ifndef __ACHIEVEMENTMANAGER_H__
#define __ACHIEVEMENTMANAGER_H__

#include <gd.h>

namespace gd {

class AchievementBar;

class AchievementManager : public cocos2d::CCNode {
    // 0xEC is ccnode size

    public:
        // get shared state
        static AchievementManager* sharedState() {
            return reinterpret_cast<AchievementManager*(__stdcall*)(void)>(
                base + 0x7b10
            )();
        }
};

class AchievementNotifier : public cocos2d::CCNode {
    // 0xEC is ccnode size
    PAD(0x4)
    // achievements in queue
    cocos2d::CCArray* m_aScheduled;
    // currently shown achievement (i think)
    cocos2d::CCNode* m_obShownNode;
    PAD(0x4)

    public:
        static AchievementNotifier* sharedState() {
            return reinterpret_cast<AchievementNotifier*(__stdcall*)(void)>(
                base + 0xFC90
            )();
        }

        // show achievements in queue
        void __fastcall showNextAchievement() {
            return reinterpret_cast<void(__fastcall*)(AchievementNotifier*)>(
                base + 0xFD60
            )(this);
        }

        // add achievements to queue
        void notifyAchievement(AchievementBar* _ach) {
            this->m_aScheduled->addObject(_ach);
        }
};

}

#endif
