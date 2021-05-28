#ifndef __SETGROUPIDLAYER_H__
#define __SETGROUPIDLAYER_H__

#include <gd.h>

namespace gd {
    class SetGroupIDLayer : public gd::FLAlertLayer, public gd::TextInputDelegate {
        public:
            gd::GameObject* m_pObj;
            PAD(0x4)
            cocos2d::CCArray* m_pArray0;
            cocos2d::CCArray* m_pArray1;
            cocos2d::CCLabelBMFont* m_pEditorLayerText;
            cocos2d::CCLabelBMFont* m_pEditorLayer2Text;
            cocos2d::CCLabelBMFont* m_pZOrderText;
            gd::CCTextInputNode* m_pGroupIDInput;
            int m_nGroupID;
            int m_nEditorLayer;
            int m_nEditorLayer2;
            int m_nZOrder;

            void updateEditorLayerID() {
                reinterpret_cast<void(__fastcall*)(SetGroupIDLayer*)>(
                    gd::base + 0x22e0b0
                )( this );
            }

            void updateEditorLayerID2() {
                reinterpret_cast<void(__fastcall*)(SetGroupIDLayer*)>(
                    gd::base + 0x22e110
                )( this );
            }

            void updateZOrder() {
                reinterpret_cast<void(__fastcall*)(SetGroupIDLayer*)>(
                    gd::base + 0x22e3d0
                )( this );
            }
    };
}

#endif
