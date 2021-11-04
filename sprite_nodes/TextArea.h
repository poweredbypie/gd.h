#ifndef __TEXTAREA_H__
#define __TEXTAREA_H__

#include <gd.h>

namespace gd {
    class gd_string {
        union {
            char* pData;
            char vData[15];
        };
        size_t length;
        size_t address;

        public:
            gd_string& operator=(char* data) {
                reinterpret_cast<gd_string*(__thiscall*)(gd_string*, char*)>(
                    base + 0xf680
                )(this, data);
                return *this;
            }

            gd_string& operator=(std::string const& str) {
                reinterpret_cast<gd_string*(__thiscall*)(gd_string*, char*)>(
                    base + 0xf680
                )(this, const_cast<char*>(str.data()));
                return *this;
            }

            gd_string() {}

            gd_string(std::string const& str) {
                *this = str;
            }

            gd_string(char* data) {
                *this = data;
            }
    };

	#pragma runtime_checks("s", off)
	class GDH_DLL TextArea : public cocos2d::CCSprite {
	protected:
		PAD(0x58);

	public:
		static TextArea* create(const char* font, bool disableColor,
			std::string caption, float scale, float width, float height,
			cocos2d::CCPoint const& anchorPos) {
            gd_string please_dont_ruin_xmm = caption;
			__asm {
				movss xmm1, scale
				movss xmm2, width
				movss xmm3, height
			}
			auto pRet = reinterpret_cast<TextArea* (__vectorcall*)(const char*,
				float, float, float,
				bool, std::string, cocos2d::CCPoint)>(
					base + 0x33270
					)(font, disableColor, caption, anchorPos);
			__asm add esp, 0x20
			return pRet;
		}

		void colorAllCharactersTo(cocos2d::ccColor3B color) {
			reinterpret_cast<void(__thiscall*)(
				TextArea*, cocos2d::ccColor3B
			)>(base + 0x33830)(this, color);
		}

		void setString(std::string const& str) {
			reinterpret_cast<void(__thiscall*)(
				TextArea*, std::string
			)>(base + 0x33480)(this, str);
		}
	};
	#pragma runtime_checks("s", restore)
}

#endif