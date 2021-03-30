#ifndef __TEXTAREA_H__
#define __TEXTAREA_H__

#include <gd.h>

namespace gd {
	#pragma runtime_checks("s", off)

    class TextArea : public cocos2d::CCSprite {
        protected:

        public:
            static TextArea* __fastcall create(
                const char* _font,
                cocos2d::CCSprite* _backspr,
                std::string _text,
                float _width,
                float _height,
                float _scale
            ) {
                __asm {
                    movss xmm1, _scale
                    movss xmm2, _width
                    movss xmm3, _height
                }
                
                auto pRet = reinterpret_cast<TextArea*(__fastcall*)(
                    const char*, cocos2d::CCSprite*, std::string
                )>(
                    base + 0x33270
                )(
                    _font, _backspr, _text
                );

                __asm add esp, 0x18

                return pRet;
            }
    };

	#pragma runtime_checks("s", restore)
}

#endif
