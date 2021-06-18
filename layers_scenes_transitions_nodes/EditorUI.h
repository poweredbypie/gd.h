#ifndef __EDITORUI_H__
#define __EDITORUI_H__

#include <gd.h>

namespace gd {

class EditButtonBar : public cocos2d::CCNode {};
class GJRotationControl : public cocos2d::CCLayer {};
class GJScaleControl : public cocos2d::CCLayer {};

class CCMenuItemSpriteExtra;
class CCMenuItemToggler;
class Slider;
class GameObject;

class EditorUI : public cocos2d::CCLayer,
    public gd::FLAlertLayerProtocol,
    public gd::ColorSelectDelegate,
    public gd::GJRotationControlDelegate,
    public gd::GJScaleControlDelegate,
    public gd::MusicDownloadDelegate {

    public:
        EditButtonBar* m_pEditButtonBar;
        PAD(0x4)
        cocos2d::CCArray* m_pUnknownArray;
        PAD(0x28)
        cocos2d::CCLabelBMFont* m_pUnknownLabel;
        GJRotationControl* m_pRotationControl;
        PAD(0x10)
        GJScaleControl* m_pScaleControl;
        cocos2d::CCDictionary* m_pUnknownDict;
        EditButtonBar* m_pEditButtonBar2;
        EditButtonBar* m_pEditButtonBar3;
        Slider* m_pPositionSlider;
        PAD(0x20)
        cocos2d::CCArray* m_pUnknownArray2;
        PAD(0x8)
        cocos2d::CCArray* m_pUnknownArray3;
        cocos2d::CCMenu* m_pUnknownMenu;
        cocos2d::CCArray* m_pUnknownArray4;
        CCMenuItemSpriteExtra* m_pButton0;
        CCMenuItemSpriteExtra* m_pButton1;
        CCMenuItemSpriteExtra* m_pButton2;
        CCMenuItemSpriteExtra* m_pButton3;
        CCMenuItemSpriteExtra* m_pButton4;
        CCMenuItemSpriteExtra* m_pButton5;
        CCMenuItemSpriteExtra* m_pButton6;
        CCMenuItemSpriteExtra* m_pButton7;
        CCMenuItemSpriteExtra* m_pButton8;
        CCMenuItemSpriteExtra* m_pButton9;
        CCMenuItemSpriteExtra* m_pButton10;
        CCMenuItemSpriteExtra* m_pButton11;
        CCMenuItemSpriteExtra* m_pButton12;
        CCMenuItemSpriteExtra* m_pButton13;
        CCMenuItemSpriteExtra* m_pButton14;
        CCMenuItemSpriteExtra* m_pButton15;
        CCMenuItemSpriteExtra* m_pButton16;
        CCMenuItemSpriteExtra* m_pButton17;
        CCMenuItemSpriteExtra* m_pButton18;
        CCMenuItemSpriteExtra* m_pButton19;
        CCMenuItemSpriteExtra* m_pButton20;
        CCMenuItemSpriteExtra* m_pButton21;
        CCMenuItemSpriteExtra* m_pButton22;
        CCMenuItemSpriteExtra* m_pButton23;
        CCMenuItemSpriteExtra* m_pButton24;
        CCMenuItemSpriteExtra* m_pButton25;
        CCMenuItemSpriteExtra* m_pButton26;
        CCMenuItemToggler* m_pUnknownToggler;
        cocos2d::CCArray* m_pUnknownArray5;
        cocos2d::CCMenu* m_pUnknownMenu2;
        cocos2d::CCArray* m_pUnknownArray6;
        cocos2d::CCSprite* m_pIdkSprite0;
        cocos2d::CCSprite* m_pIdkSprite1;
        CCMenuItemSpriteExtra* m_pButton27;
        CCMenuItemSpriteExtra* m_pButton28;
        CCMenuItemSpriteExtra* m_pButton29;
        CCMenuItemSpriteExtra* m_pButton30;
        CCMenuItemSpriteExtra* m_pButton31;
        CCMenuItemSpriteExtra* m_pButton32;
        cocos2d::CCLabelBMFont* m_pCurrentLayerLabel;
        CCMenuItemSpriteExtra* m_pButton33;
        CCMenuItemSpriteExtra* m_pButton34;
        CCMenuItemSpriteExtra* m_pButton35;
        PAD(0xc)
        cocos2d::CCArray* m_pUnknownArray7;
        cocos2d::CCArray* m_pUnknownArray8;
        cocos2d::CCArray* m_pUnknownArray9;
        PAD(0x4)
        LevelEditorLayer* m_pEditorLayer;
    
    public:
        cocos2d::CCArray* pasteObjects(std::string const& _str) {
            auto ret = reinterpret_cast<cocos2d::CCArray*(__thiscall*)(
                EditorUI*, std::string
            )>(
                base + 0x88240
            )(
                this, _str
            );

            return ret;
        }

        void deselectAll() {
            reinterpret_cast<void(__fastcall*)(EditorUI*)>(
                base + 0x86af0
            )(this);
        }

        void selectObjects(cocos2d::CCArray* objs, bool idk) {
            reinterpret_cast<void(__thiscall*)(
                EditorUI*, cocos2d::CCArray*, bool
            )>(
                base + 0x864a0
            )(
                this, objs, idk
            );
        }

        cocos2d::CCArray* getSelectedObjects() {
            return reinterpret_cast<cocos2d::CCArray*(__thiscall*)(EditorUI*)>(
                base + 0x86900
            )(this);
        }

        void moveObject(GameObject* obj, cocos2d::CCPoint position) {
            reinterpret_cast<void(__thiscall*)(EditorUI*, GameObject*, cocos2d::CCPoint)>(base + 0x8ddb0)(this, obj, position);
        }

        // i cant get these to not crash

        // void zoomIn() {
        //     reinterpret_cast<void(__thiscall*)(EditorUI*)>(base + 0x877c0)(this);
        // }

        // void zoomOut() {
        //     reinterpret_cast<void(__thiscall*)(EditorUI*)>(base + 0x87830)(this);
        // }

        void updateZoom(float amt) {
            __asm movss xmm1, amt
            reinterpret_cast<void(__thiscall*)(EditorUI*)>(base + 0x878a0)(this);
        }

        cocos2d::CCPoint getGroupCenter(cocos2d::CCArray* objects, bool idk) {
            cocos2d::CCPoint result;
            reinterpret_cast<void*(__thiscall*)(EditorUI*, cocos2d::CCPoint*, cocos2d::CCArray*, bool)>(base + 0x8fc30)(this, &result, objects, idk);
            return result;
        }

        void scaleObjects(cocos2d::CCArray* objects, float scale, cocos2d::CCPoint center) {
            __asm movss xmm2, scale;
            reinterpret_cast<void(__thiscall*)(EditorUI*, cocos2d::CCArray*, cocos2d::CCPoint)>(base + 0x8f150)(this, objects, center);
        }
    };

}

#endif
