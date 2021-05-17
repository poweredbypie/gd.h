#ifndef __GAMEOBJECT_H__
#define __GAMEOBJECT_H__

#include <gd.h>

namespace gd {

	class CCSpritePlus;

	// jesus fucking christ
	enum GameObjectType {
		kGameObjectTypeSolid = 0,
		kGameObjectTypeHazard = 2,
		kGameObjectTypeInverseGravityPortal = 3,
		kGameObjectTypeNormalGravityPortal = 4,
		kGameObjectTypeShipPortal = 5,
		kGameObjectTypeCubePortal = 6,
		kGameObjectTypeDecoration = 7,
		kGameObjectTypeYellowJumpPad = 8,
		kGameObjectTypePinkJumpPad = 9,
		kGameObjectTypeGravityPad = 10,
		kGameObjectTypeYellowJumpRing = 11,
		kGameObjectTypePinkJumpRing = 12,
		kGameObjectTypeGravityRing = 13,
		kGameObjectTypeInverseMirrorPortal = 14,
		kGameObjectTypeNormalMirrorPortal = 15,
		kGameObjectTypeBallPortal = 16,
		kGameObjectTypeRegularSizePortal = 17,
		kGameObjectTypeMiniSizePortal = 18,
		kGameObjectTypeUfoPortal = 19,
		kGameObjectTypeModifier = 20,
		kGameObjectTypeSecretCoin = 22,
		kGameObjectTypeDualPortal = 23,
		kGameObjectTypeSoloPortal = 24,
		kGameObjectTypeSlope = 25,
		kGameObjectTypeWavePortal = 26,
		kGameObjectTypeRobotPortal = 27,
		kGameObjectTypeTeleportPortal = 28,
		kGameObjectTypeCollectible = 30,
		kGameObjectTypeUserCoin = 31,
		kGameObjectTypeDropRing = 32,
		kGameObjectTypeSpiderPortal = 33,
		kGameObjectTypeRedJumpPad = 34,
		kGameObjectTypeRedJumpRing = 35,
		kGameObjectTypeCustomRing = 36,
		kGameObjectTypeDashRing = 37,
		kGameObjectTypeGravityDashRing = 38,
		kGameObjectTypeCollisionObject = 39,
		kGameObjectTypeSpecial = 40,
	};

	enum GJCustomColorMode {};

	class GJSpriteColor;
	class ColorActionSprite;
	class GJEffectManager;

	#pragma runtime_checks("s", off)
	class GameObject : public CCSpritePlus {
	protected:
		PAD(44);
		bool unk_21C;
		bool unk_21D;
		bool unk_21E;
		PAD(13);
		cocos2d::CCPoint realPositionOffset; //0x022C
		PAD(4);
		bool unk_238;
		bool isFlippedX; //0x0239
		bool isFlippedY; //0x023A
		PAD(9);
		bool isOriented; //0x0244 // what
		PAD(35);
		float objectRectWidth; //0x0268
		float objectRectHeight; //0x026C
		bool unk_270;
		bool unk_271;
		bool unk_272;
		PAD(1);
		cocos2d::CCParticleSystemQuad* unk_274;
		std::string effectPlistName; //0x0278
		PAD(32);
		bool unk_2B0;
		PAD(23);
		bool unk_2C8;
		bool unk_2C9;
		bool hasBeenActivated; //0x02CA
		PAD(25);
		cocos2d::CCSprite* unk_2E4;
		PAD(8);
		bool isRotatedSide; //0x02F0 // what
		PAD(3);
		float unk_2F4;
		float unk_2F8;
		unsigned int uniqueID; //0x02FC
		GameObjectType objectType; //0x0300
		int section; //0x0304
		PAD(4);
		cocos2d::CCPoint realPosition; //0x030C
		std::string textureName; //0x0314
		bool unk_32C;
		bool unk_32D;
		PAD(14);
		float unk_33C;
		float unk_340;
		PAD(16);
		bool hasGlowDisabled; //0x0354
		PAD(7);
		float scale; //0x035C
		int objectID; //0x0360
		PAD(4);
		bool unk_368;
		bool unk_369;
		bool unk_36A;
		bool dontEnter; //0x036B
		bool dontFade; //0x036C
		PAD(35);
		float unk_390;
		PAD(20);
		GJSpriteColor* baseColor; //0x03A8
		GJSpriteColor* detailColor; //0x03AC
		PAD(8);
		int zLayer; //0x03B8
		int zOrder; //0x03BC
		PAD(24);
		bool unk_3D8;
		bool unk_3D9;
		bool m_bIsSelected; //0x03DA
		PAD(1);
		int globalClickCounter; //0x03DC // this is rly weird
		PAD(12);
		float unk_3EC;
		bool groupParent; //0x03F0
		PAD(3);
		short** groups; //0x03F4
		short groupCount; //0x03F8
		PAD(18);
		int editorLayer; //0x040C
		int editorLayer2; //0x0410
		PAD(16);
		cocos2d::CCPoint startPos; //0x0424 // maybe
		PAD(28);
		bool highDetail; //0x0448
		PAD(3);
		ColorActionSprite* unk_44C;
		ColorActionSprite* unk_450;
		GJEffectManager* unk_454;
		PAD(16);

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

		void deselectObject() {
			this->m_bIsSelected = false;

			return reinterpret_cast<void(__fastcall*)(GameObject*)>(
				base + 0xeee50
			)(this);
		}

		std::string getSaveString() {
			std::string ret;

			reinterpret_cast<void(__thiscall*)(GameObject*, std::string*)>(
				base + 0xed0c0
			)(
				this, &ret
			);

			return ret;
		}
	};
	#pragma runtime_checks("s", restore)
}

#endif