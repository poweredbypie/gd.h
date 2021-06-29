#ifndef __COLORACTION_H__
#define __COLORACTION_H__

#include <gd.h>

namespace gd {
    class ColorActionSprite;
    
    class ColorAction : public cocos2d::CCNode {
    public:
        PAD(12);
        cocos2d::ccColor3B m_color;
        PAD(5);
        float m_unk100;
        bool m_blending; //0x0104
        PAD(3);
        int m_playerColor; //0x0108
        int m_unk10C;
        float m_opacity; //0x0110
        float m_unk114;
        PAD(28);
        ColorActionSprite* m_colorSprite; //0x0134
        PAD(12);
    };
}

#endif