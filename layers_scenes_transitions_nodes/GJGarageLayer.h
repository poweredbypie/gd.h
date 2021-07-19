#ifndef __GJGARAGELAYER_H__
#define __GJGARAGELAYER_H__

#include <gd.h>

namespace gd {
    class GJGarageLayer : public cocos2d::CCLayer,
        TextInputDelegate,
        FLAlertLayerProtocol,
        GameRateDelegate,
        ListButtonBarDelegate,
        DialogDelegate
    {
        public:
            PAD(0x28)
            cocos2d::CCArray* m_pPagesArray;
            PAD(0x8)
            CCMenuItemToggler* m_pTabToggleCube;
            CCMenuItemToggler* m_pTabToggleShip;
            CCMenuItemToggler* m_pTabToggleBall;
            CCMenuItemToggler* m_pTabToggleUfo;
            CCMenuItemToggler* m_pTabToggleWave;
            CCMenuItemToggler* m_pTabToggleRobot;
            CCMenuItemToggler* m_pTabToggleSpider;
            CCMenuItemToggler* m_pTabToggleSpecial;
            CCMenuItemToggler* m_pTabToggleDeathEffect;
            PAD(4)
            bool m_bUpdateSelector;

            void onSelectTab(cocos2d::CCObject* pSender) {
                reinterpret_cast<void(__thiscall*)(
                    GJGarageLayer*, cocos2d::CCObject*
                )>( base + 0x127c30 )(this, pSender);
            }

            void onBallIcon(cocos2d::CCObject* pSender) {
                reinterpret_cast<void(__thiscall*)(
                    GJGarageLayer*, cocos2d::CCObject*
                )>( base + 0x1282a0 )(this, pSender);
            }
    };  
}

#endif
