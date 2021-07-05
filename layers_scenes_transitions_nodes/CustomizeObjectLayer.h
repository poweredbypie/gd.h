#ifndef __CUSTOMIZEOBJECTLAYER_H__
#define __CUSTOMIZEOBJECTLAYER_H__

#include <gd.h>

namespace gd {
    class CustomizeObjectLayer :
        public FLAlertLayer,
        public TextInputDelegate,
        public HSVWidgetPopupDelegate,
        public ColorSelectDelegate,
        public ColorSetupDelegate
    {
        public:
            void onNextColorChannel(cocos2d::CCObject* pSender) {
                reinterpret_cast<void(__thiscall*)(CustomizeObjectLayer*, cocos2d::CCObject*)>(
                    base + 0x56c80
                )(this, pSender);
            }
    };
}

#endif
