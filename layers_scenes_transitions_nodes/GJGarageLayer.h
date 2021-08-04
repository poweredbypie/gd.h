#ifndef __GJGARAGELAYER_H__
#define __GJGARAGELAYER_H__

#include <gd.h>

namespace gd {
    class CCTextInputNode;
    
    class GJGarageLayer : public cocos2d::CCLayer,
        TextInputDelegate,
        FLAlertLayerProtocol,
        GameRateDelegate,
        ListButtonBarDelegate,
        DialogDelegate
    {
        public:
            CCTextInputNode* m_pNameInput;  // 0x130
            SimplePlayer* m_pPlayerPreview; // 0x134
            PAD(8)
            cocso2d::CCSprite* m_pUnkSprite0x140; // 0x140
            cocso2d::CCSprite* m_pUnkSprite0x144; // 0x144
            CCMenuItemSpriteExtra* m_pUnkButton0x148; // 0x148
            CCMenuItemSpriteExtra* m_pUnkButton0x14c; // 0x14c
            PAD(8)
            cocos2d::CCArray* m_pPagesArray;    // 0x158
            PAD(0x8)
            CCMenuItemToggler* m_pTabToggleCube;    // 0x164
            CCMenuItemToggler* m_pTabToggleShip;    // 0x168
            CCMenuItemToggler* m_pTabToggleBall;    // 0x16c
            CCMenuItemToggler* m_pTabToggleUfo;     // 0x170
            CCMenuItemToggler* m_pTabToggleWave;    // 0x174
            CCMenuItemToggler* m_pTabToggleRobot;   // 0x178
            CCMenuItemToggler* m_pTabToggleSpider;  // 0x17c
            CCMenuItemToggler* m_pTabToggleSpecial; // 0x180
            CCMenuItemToggler* m_pTabToggleDeathEffect; // 0x184
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
