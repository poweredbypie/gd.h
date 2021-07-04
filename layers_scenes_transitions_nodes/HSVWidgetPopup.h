#ifndef __HSVWIDGETPOPUP_H__
#define __HSVWIDGETPOPUP_H__

#include <gd.h>

namespace gd {
    class ConfigureHSVWidget : public cocos2d::CCNode {
        public:
            cocos2d::CCLabelBMFont* m_pHueLabel;
            cocos2d::CCLabelBMFont* m_pSaturationLabel;
            cocos2d::CCLabelBMFont* m_pBrightnessLabel;

            gd::Slider* m_pHueSlider;
            gd::Slider* m_pSaturationSlider;
            gd::Slider* m_pBrightnessSlider;

            float m_fHueValue;
            float m_fSaturationValue;
            float m_fBrightnessValue;

            bool m_bAbsoluteSaturation;
            bool m_bAbsoluteBrightness;
    };

    class HSVWidgetPopup : public gd::FLAlertLayer {
        public:
            ConfigureHSVWidget* m_pConfigureWidget;
            HSVWidgetPopupDelegate* m_pDelegate;
    };
}

#endif
