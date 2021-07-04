#ifndef __EDITORUI_H__
#define __EDITORUI_H__

#include <gd.h>

namespace gd {

class BoomScrollLayer : public cocos2d::CCLayer {
    // todo
};

class GameManager;

class EditButtonBar : public cocos2d::CCNode {
    protected:
        cocos2d::CCPoint m_obPosition;
        int m_nUnknown;
        bool m_bUnknown;
        cocos2d::CCArray* m_pButtonArray;
        BoomScrollLayer* m_pScrollLayer;
        cocos2d::CCArray* m_pPagesArray;

        virtual EditButtonBar* release(bool rel) {
            return reinterpret_cast<EditButtonBar*(__thiscall*)(
                EditButtonBar*, bool
            )>(
                base + 0x6e3c0
            )(this, rel);
        }

        bool init(cocos2d::CCArray* buttons, int idk, bool idkb, int rowCount, int columnCount, cocos2d::CCPoint pos) {
            auto ret = reinterpret_cast<bool(__thiscall*)(
                EditButtonBar*, cocos2d::CCArray*, int, bool, int, int, cocos2d::CCPoint
            )>(
                base + 0x6e550
            )(
                this, buttons, idk, idkb, rowCount, columnCount, pos
            );

            return ret;
        }

    public:
        static EditButtonBar* create(
            cocos2d::CCArray* buttons,
            cocos2d::CCPoint point,
            int idk,
            bool idk0,
            int rowCount,
            int columnCount
        ) {
            auto ret = reinterpret_cast<EditButtonBar*(__fastcall*)(
                cocos2d::CCArray*, int, bool, int, int, cocos2d::CCPoint
            )>(
                base + 0x6e450
            )(
                buttons, idk, idk0, rowCount, columnCount, point
            );

            __asm add esp, 0x14

            return ret;
        }

        void loadFromItems(cocos2d::CCArray* buttons, int rowCount, int columnCount, bool idk) {
            reinterpret_cast<void(__thiscall*)(
                EditButtonBar*, cocos2d::CCArray*, int, int, bool
            )>(
                base + 0x6e5e0
            )(
                this, buttons, rowCount, columnCount, idk
            );
        }

        cocos2d::CCArray* getItems() { return this->m_pButtonArray; }

        void removeAllItems() {
            this->m_pButtonArray->removeAllObjects();

            this->reloadItemsInNormalSize();
        }

        void reloadItems(int rowCount, int columnCount) {
            if (this->m_pButtonArray)
                this->loadFromItems(this->m_pButtonArray, rowCount, columnCount, this->m_bUnknown);
        }
        void reloadItemsInNormalSize() {
            this->reloadItems(
                GameManager::sharedState()->getIntGameVariable("0049"),
                GameManager::sharedState()->getIntGameVariable("0050")
            );
        }

        void insertButton(CCMenuItemSpriteExtra* btn, unsigned int index, bool reload = true) {
            if (this->m_pButtonArray)
                this->m_pButtonArray->insertObject(btn, index);
            if (reload)
                this->reloadItemsInNormalSize();
        }

        void addButton(CCMenuItemSpriteExtra* btn, bool reload = true) {
            if (this->m_pButtonArray)
                this->m_pButtonArray->addObject(btn);
            if (reload)
                this->reloadItemsInNormalSize();
        }
};

class CreateMenuItem : public CCMenuItemSpriteExtra {
    public:
        PAD(0x18)
        int m_nObjectID;
        int m_nBuildTabPage;
        int m_nBuildTab;
};

class EditorPauseLayer : public gd::CCBlockLayer {
    public:
        PAD(0x8)
        gd::CCMenuItemSpriteExtra* m_pButton0;
        gd::CCMenuItemSpriteExtra* m_pButton1;
        gd::LevelEditorLayer* m_pEditorLayer;

        void onResume(cocos2d::CCObject* pSender) {
            reinterpret_cast<void(__thiscall*)(EditorPauseLayer*, cocos2d::CCObject*)>(
                base + 0x74fe0
            )(this, pSender);
        }
};

class GJScaleControl;
class GJRotationControl;
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
        EditButtonBar* m_pButtonBar;
        PAD(0x4)
        cocos2d::CCArray* m_pUnknownArray;
        PAD(0x2c)
        cocos2d::CCLabelBMFont* m_pObjectInfoLabel;
        GJRotationControl* m_pRotationControl;
        PAD(0xc)
        GJScaleControl* m_pScaleControl;
        cocos2d::CCDictionary* m_pUnknownDict;
        EditButtonBar* m_pCreateButtonBar;
        EditButtonBar* m_pEditButtonBar;
        Slider* m_pPositionSlider;
        PAD(0x20)
        cocos2d::CCArray* m_pUnknownArray2;
        PAD(0x8)
        cocos2d::CCArray* m_pSelectedObjects;
        cocos2d::CCMenu* m_pDeleteMenu;
        cocos2d::CCArray* m_pUnknownArray4;
        CCMenuItemSpriteExtra* m_pDeleteModeButton;
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
        CCMenuItemSpriteExtra* m_pCopyBtn;
        CCMenuItemSpriteExtra* m_pPasteBtn;
        CCMenuItemSpriteExtra* m_pButton24;
        CCMenuItemSpriteExtra* m_pButton25;
        CCMenuItemSpriteExtra* m_pButton26;
        CCMenuItemToggler* m_pUnknownToggler;
        cocos2d::CCArray* m_pCreateButtonBars;
        cocos2d::CCMenu* m_pTabsMenu;
        cocos2d::CCArray* m_pTabsArray;
        cocos2d::CCSprite* m_pIdkSprite0;
        cocos2d::CCSprite* m_pIdkSprite1;
        CCMenuItemSpriteExtra* m_pButton27;
        CCMenuItemSpriteExtra* m_pButton28;
        CCMenuItemSpriteExtra* m_pDeleteFilterNone;
        CCMenuItemSpriteExtra* m_pDeleteFilterStatic;
        CCMenuItemSpriteExtra* m_pDeleteFilterDetails;
        CCMenuItemSpriteExtra* m_pDeleteFilterCustom;
        cocos2d::CCLabelBMFont* m_pCurrentLayerLabel;
        CCMenuItemSpriteExtra* m_pButton33;
        CCMenuItemSpriteExtra* m_pButton34;
        CCMenuItemSpriteExtra* m_pButton35;
        PAD(0x8)
        int m_nSelectedCreateObjectID;
        cocos2d::CCArray* m_pCreateButtonArray;
        cocos2d::CCArray* m_pCustomObjectButtonArray;
        cocos2d::CCArray* m_pUnknownArray9;
        int m_nSelectedMode;
        LevelEditorLayer* m_pEditorLayer;
        PAD(0x30)
        GameObject* m_pSelectedObject;
        PAD(0x30)
        int m_nSelectedTab;

        static constexpr const int Mode_Create = 2;
        static constexpr const int Mode_Delete = 1;
        static constexpr const int Mode_Edit = 3;
    
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

        cocos2d::CCPoint getTouchPoint(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) {
            cocos2d::CCPoint res;

            reinterpret_cast<cocos2d::CCPoint*(__thiscall*)(
                EditorUI*, cocos2d::CCPoint*, cocos2d::CCTouch*, cocos2d::CCEvent*
            )>(
                base + 0x90620
            )(this, &res, touch, event);

            return res;
        }

        void onSelectBuildTab(cocos2d::CCObject* pSender) {
            reinterpret_cast<void(__thiscall*)(EditorUI*, cocos2d::CCObject*)>(
                base + 0x887f0
            )(this, pSender);
        }

        void onCreateButton(cocos2d::CCObject* pSender) {
            reinterpret_cast<void(__thiscall*)(EditorUI*, cocos2d::CCObject*)>(
                base + 0x854f0
            )(this, pSender);
        }

        void enableButton(CreateMenuItem* btn) {
            reinterpret_cast<void(__stdcall*)(CreateMenuItem*)>(
                base + 0x78990
            )(btn);
        }

        void disableButton(CreateMenuItem* btn) {
            reinterpret_cast<void(__stdcall*)(CreateMenuItem*)>(
                base + 0x78af0
            )(btn);
        }

        CreateMenuItem* getCreateBtn(int id, int bg) {
            auto ret = reinterpret_cast<CreateMenuItem*(__thiscall*)(
                EditorUI*, int, int
            )>(
                base + 0x85120
            )(
                this, id, bg
            );

            return ret;
        }

        cocos2d::CCPoint getGroupCenter(cocos2d::CCArray* objs, bool idk) {
            cocos2d::CCPoint res;

            reinterpret_cast<cocos2d::CCPoint*(__thiscall*)(
                EditorUI*, cocos2d::CCPoint*, cocos2d::CCArray*, bool
            )>(
                base + 0x8fc30
            )(
                this, &res, objs, idk
            );

            return res;
        }

        void updateButtons() {
            reinterpret_cast<void(__fastcall*)(
                EditorUI*
            )>( base + 0x78280 )(this);
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

        void scaleObjects(cocos2d::CCArray* objects, float scale, cocos2d::CCPoint center) {
            __asm movss xmm2, scale;
            reinterpret_cast<void(__thiscall*)(EditorUI*, cocos2d::CCArray*, cocos2d::CCPoint)>(base + 0x8f150)(this, objects, center);
        }
    
        void updateGridNodeSize() {
            reinterpret_cast<void(__fastcall*)(EditorUI*)>(
                base + 0x78f60
            )(this);
        }

        void updateObjectInfoLabel() {
            reinterpret_cast<void(__fastcall*)(EditorUI*)>(
                base + 0x793b0
            )(this);
        }
    };

}

#endif
