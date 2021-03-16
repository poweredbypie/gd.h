#ifndef __TABLEVIEWCELL_H__
#define __TABLEVIEWCELL_H__

#include <gd.h>

namespace gd {

#pragma runtime_checks("s", off)
class TableViewCell : public cocos2d::CCLayer {
    public:
        int updateVisibility();

        inline virtual void v1(TableViewCell*, bool) {};
        inline virtual void v2(TableViewCell*, bool) {};

        TableViewCell(const char* _name, float _width, float _height) {
            __asm {
                movss xmm2, [_width]
                movss xmm3, [_height]
            }

            reinterpret_cast<void(__thiscall*)(
                TableViewCell*, const char*
            )>(
                base + 0x32e70
            )(
                this, _name
            );

            __asm add esp, 0x4
        }
};
#pragma runtime_checks("s", restore)

}

#endif
