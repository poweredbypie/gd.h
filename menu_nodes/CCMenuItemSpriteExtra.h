#ifndef __CCMENUITEMSPRITEEXTRA_H__
#define __CCMENUITEMSPRITEEXTRA_H__

#include <gd.h>

namespace gd {
	#pragma runtime_checks("s", off)
	class CCMenuItemSpriteExtra : public cocos2d::CCMenuItemSprite {
	protected:
		float m_fUnknown;
		float m_fUnknown2;
		PAD(0x6c)

		bool init(cocos2d::CCNode* spr) {
			return reinterpret_cast<bool(__thiscall*)(
				CCMenuItemSpriteExtra*, cocos2d::CCNode*
			)>(
				base + 0x18fa0
			)(
				this, spr
			);
		}

		virtual CCMenuItemSpriteExtra* release(bool rel) {
			return reinterpret_cast<CCMenuItemSpriteExtra*(__thiscall*)(
				CCMenuItemSpriteExtra*, bool
			)>(
				base + 0x18eb0
			)(
				this, rel
			);
		}

		virtual void activate() {
			reinterpret_cast<void(__fastcall*)(
				CCMenuItemSpriteExtra*
			)>(base + 0x191c0)(this);
		}

		virtual void selected() {
			reinterpret_cast<void(__fastcall*)(
				CCMenuItemSpriteExtra*
			)>(base + 0x19270)(this);
		}

		virtual void unselected() {
			reinterpret_cast<void(__fastcall*)(
				CCMenuItemSpriteExtra*
			)>(base + 0x19430)(this);
		}

	public:
		static CCMenuItemSpriteExtra* create(cocos2d::CCNode* sprite,
			cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback) {
			auto pRet = reinterpret_cast<CCMenuItemSpriteExtra* (__thiscall*)(cocos2d::CCNode*,
				cocos2d::CCObject*, cocos2d::SEL_MenuHandler)>(
					base + 0x18EE0
					)(sprite, target, callback);
			//fix stack before returning
			__asm add esp, 0x8
			return pRet;
		}
		void setSizeMult(float mult) {
			__asm movss xmm1, mult
			return reinterpret_cast<void(__thiscall*)(CCMenuItemSpriteExtra*)>(
				base + 0x19080
				)(this);
		}
	};
	#pragma runtime_checks("s", restore)
}

#endif