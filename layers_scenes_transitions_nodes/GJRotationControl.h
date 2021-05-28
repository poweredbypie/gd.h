#ifndef __GJROTATIONCONTROL_H__
#define __GJROTATIONCONTROL_H__

#include <gd.h>

namespace gd {

    class GJRotationControl : public cocos2d::CCLayer {
        public:
            PAD(0x8)
            cocos2d::CCPoint m_obSliderPosition;
            PAD(0x8)
            float m_fAngle;
            int m_nTouchID;

            void setAngle(float angle) {
                this->m_obSliderPosition = cocos2d::CCPoint { cosf(angle) * 60.0f, sinf(angle) * 60.0f };
                this->m_fAngle = angle;
            }
    };
    
}

#endif
