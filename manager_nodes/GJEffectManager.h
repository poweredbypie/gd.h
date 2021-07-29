#ifndef __GJEFFECTMANAGER_H__
#define __GJEFFECTMANAGER_H__

#include <gd.h>

namespace gd {
    class GJEffectManager : public cocos2d::CCNode {
    public:
        PAD(4);
        cocos2d::CCDictionary* m_colorActionDict; // 0xF0
    };
}

#endif