#ifndef __CUSTOMLISTVIEW_H__
#define __CUSTOMLISTIVEW_H__

#include <gd.h>

#pragma runtime_checks("s", off)

namespace gd {

    class TableViewDataSource {
        virtual void tvds_vftable0() = 0;
        virtual bool tvds_vftable1();
        virtual void tvds_vftable2();
        virtual void tvds_vftable3() = 0;
    };

    class TableViewDelegate {
        virtual void tvd_vftable0();
        virtual void tvd_vftable1();
        virtual void tvd_vftable2();
        virtual void tvd_vftable3();
        virtual void tvd_vftable4() = 0;
        virtual void tvd_vftable5() = 0;
    };

    class BoomListView : public TableViewDelegate, public TableViewDataSource, public cocos2d::CCLayer {
        protected:
            PAD(0xC)
            float m_fListWidth;
        
        public:
            virtual void tvds_vftable0();
            virtual void tvds_vftable3();
            
            virtual void tvd_vftable4();
            virtual void tvd_vftable5();

            float getListWidth() {
                return this->m_fListWidth;
            }

            bool init(cocos2d::CCArray* _arr, float _w, float _h, intptr_t _idk, int _n) {

                // width and height are stored in xmm registers
                __asm {
                    movss xmm2, [_h]
                    movss xmm3, [_w]
                }

                auto ret = reinterpret_cast<bool(__thiscall*)(
                    cocos2d::CCNode*, cocos2d::CCArray*, intptr_t, int
                )>(
                    base + 0x10C20
                )(
                    this, _arr, _idk, _n
                );

                // clean stack
                __asm add esp, 0xA

                return ret;
            }
    };

    class CustomListView : public BoomListView {
        
        public:
            virtual void destructor() {
                return reinterpret_cast<void(__thiscall*)(
                    CustomListView*, bool
                )>(
                    base + 0x57ec0
                )(
                    this, true
                );
            }

            virtual void setupList() {
                reinterpret_cast<void(__fastcall*)(
                    cocos2d::CCNode*
                )>(
                    base + 0x58870
                )(this);
            };

            virtual cocos2d::CCNode* getListCell(std::string str) {
                return reinterpret_cast<cocos2d::CCNode*(__thiscall*)(
                    cocos2d::CCNode*, std::string
                )>(
                    base + 0x58050
                )(this, str);
            };

            virtual void loadCell(cocos2d::CCNode* cell, int ix) {
                reinterpret_cast<void(__thiscall*)(
                    cocos2d::CCNode*, cocos2d::CCNode*, int
                )>(
                    base + 0x585C0
                )(this, cell, ix);
            };

            virtual void another_desctructor_wtf() {
                return reinterpret_cast<void(__thiscall*)(
                    CustomListView*, bool
                )>(
                    base + 0x658e8
                )(
                    this, true
                );
            }

            static CustomListView* create(cocos2d::CCArray* _arr, float _w, float _h, int _n) {
                
                // size of the listview is passed in xmm1 & xmm2
                
                __asm {
                    movss xmm1, [_h]
                    movss xmm2, [_w]
                }

                auto ret = reinterpret_cast<CustomListView*(__thiscall*)(cocos2d::CCArray*, size_t)>(
                    base + 0x57f90
                )(_arr, _n);

                // fix stack
                __asm add esp, 0x4

                return ret;
            }

            static CustomListView* create_(cocos2d::CCArray* _arr, float _w, float _h, int _n) {
                __asm {
                    movss xmm1, [_h]
                    movss xmm2, [_w]
                }

                auto clv = new CustomListView();

                if (clv && clv->init(_arr, _w, _h, 0x0, _n)) {
                    clv->autorelease();
                    return clv;
                }

                CC_SAFE_DELETE(clv);
                return nullptr;
            }

            CustomListView() {
                reinterpret_cast<void(__thiscall*)(CustomListView*)>(
                    base + 0x57e60
                )(this);

            }

            void constructor() {
                reinterpret_cast<void(__thiscall*)(CustomListView*)>(
                    base + 0x57e60
                )(this);
            }

            ~CustomListView() {
                reinterpret_cast<void(__thiscall*)(CustomListView*, bool)>(
                    base + 0x57ec0
                )(this, true);
            }
    };
    #pragma runtime_checks("s", restore)

}

#endif

