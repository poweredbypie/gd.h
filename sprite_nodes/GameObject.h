#ifndef __GAMEOBJECT_H__
#define __GAMEOBJECT_H__

#include <gd.h>

namespace gd {

	class CCSpritePlus;

	#pragma runtime_checks("s", off)
	class GameObject : public CCSpritePlus {
	protected:
		PAD(0x278);

	public:
		//CCNode vtable
		virtual void setScaleX(float scale) {
			return reinterpret_cast<void(__thiscall*)(GameObject*, float)>(
				base + 0xE5050
				)(this, scale);
		}
		virtual void setScaleY(float scale) {
			return reinterpret_cast<void(__thiscall*)(GameObject*, float)>(
				base + 0xE50E0
				)(this, scale);
		}
		virtual void setScale(float scale) {
			return reinterpret_cast<void(__thiscall*)(GameObject*, float)>(
				base + 0xE5170
				)(this, scale);
		}
		virtual void setPosition(const cocos2d::CCPoint& pos) {
			return reinterpret_cast<void(__thiscall*)(GameObject*, const cocos2d::CCPoint&)>(
				base + 0xE4DE0
				)(this, pos);
		}
		virtual void setVisible(bool visible) {
			return reinterpret_cast<void(__thiscall*)(GameObject*, bool)>(
				base + 0xE57C0
				)(this, visible);
		}
		virtual void setRotation(float rotation) {
			return reinterpret_cast<void(__thiscall*)(GameObject*, float)>(
				base + 0xE4ED0
				)(this, rotation);
		}
		virtual bool initWithTexture(cocos2d::CCTexture2D* texture) {
			return reinterpret_cast<bool(__thiscall*)(GameObject*, cocos2d::CCTexture2D*)>(
				base + 0xCFA80
				)(this, texture);
		}
		virtual void setChildColor(const cocos2d::ccColor3B& color) {
			return reinterpret_cast<void(__thiscall*)(GameObject*, const cocos2d::ccColor3B&)>(
				base + 0xEE900
				)(this, color);
		}

		//CCRGBAProtocol vtable
		virtual void setOpacity(GLubyte opacity) {
			return reinterpret_cast<void(__thiscall*)(GameObject*, GLubyte)>(
				base + 0xE53C0
				)(this, opacity);
		}

		static GameObject* createWithFrame(const char* frame) {
			return reinterpret_cast<GameObject* (__fastcall*)(const char*)>(
				base + 0xCF8F0
				)(frame);
		}
		static GameObject* objectFromString(std::string str, bool unknown) {
			auto pRet = reinterpret_cast<GameObject* (__fastcall*)(std::string, bool)>(
				base + 0xEBE50
				)(str, unknown);
			__asm add esp, 0x18
			return pRet;
		}
	};
	#pragma runtime_checks("s", restore)
}

#endif