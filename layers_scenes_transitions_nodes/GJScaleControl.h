#ifndef __GJSCALECONTROL_H__
#define __GJSCALECONTROL_H__

#include <gd.h>

namespace gd {
    class Slider;

    class GJScaleControl : public cocos2d::CCLayer {
        public:
            gd::Slider* m_pSlider;
            unsigned int m_nIsDefaultValue;
            float m_fValue;
            PAD(0x4)
            cocos2d::CCLabelBMFont* m_pLabel;

            void updateLabel(float value) {
                __asm movss xmm0, value

                reinterpret_cast<void(__fastcall*)(GJScaleControl*)>(
                    base + 0x94990
                )(this);
            }
    };

}

#endif
