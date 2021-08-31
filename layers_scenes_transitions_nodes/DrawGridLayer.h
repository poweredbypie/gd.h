#ifndef __DRAWGRIDLAYER_H__
#define __DRAWGRIDLAYER_H__

#include <gd.h>

namespace gd {

    class DrawGridLayer : public cocos2d::CCLayer {
        public:
            cocos2d::CCArray* m_pGuidelines;    // 0x11c

            void draw() override {
                reinterpret_cast<void(__thiscall*)(DrawGridLayer*)>(
                    base + 0x16ce90
                )(this);
            }
    };

}

#endif
