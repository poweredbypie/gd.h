#ifndef __GAMEOBJECT_H__
#define __GAMEOBJECT_H__

#include <gd.h>

namespace gd {

	class CCSpritePlus;

	// jesus fucking christ (painfully written by @hjfod)
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

	class GJSpriteColor;
	class ColorActionSprite;
	class GJEffectManager;

	class GJSpriteColor;
	class ColorActionSprite;
	class GJEffectManager;

	#pragma runtime_checks("s", off)
	class GameObject : public CCSpritePlus {
	public:
		PAD(44);
		bool m_unk21C;
		bool m_unk21D;
		bool m_unk21E;
		PAD(13);
		cocos2d::CCPoint m_startPosOffset; //0x22C
		PAD(4);
		bool m_unk238;
		bool m_isFlippedX; //0x239
		bool m_isFlippedY; //0x23A
		PAD(1);
		cocos2d::CCPoint m_boxOffset; //0x23C
		bool m_isOriented; //0x244 idek what this is
		PAD(3);
		cocos2d::CCPoint m_unk248; // related to box offset
		PAD(4);
		bool m_unk254;
		PAD(11);
		cocos2d::CCAction* m_action; //0x260
		PAD(4);
		cocos2d::CCSize m_objectSize; //0x268
		bool m_unk270;
		bool m_unk271;
		bool m_unk272;
		PAD(1);
		cocos2d::CCParticleSystemQuad* m_particleSystem;
		std::string m_effectPlistName; //0x278
		PAD(32);
		bool m_unk2B0; // has custom scale or moved idfk
		PAD(7);
		cocos2d::CCRect m_objectRect2; //0x2B8
		bool m_isObjectRectDirty; //0x2C8
		bool m_isOrientedRectDirty; //0x2C9
		bool m_hasBeenActivated; //0x2CA
		bool m_hasBeenActivatedP2; //0x2CB
		PAD(24);
		cocos2d::CCSprite* m_unkSprite; //0x2E4
		PAD(8);
		bool m_isRotatedSide; //0x2F0 for 90 and 270 degrees rotations
		PAD(3);
		float m_unk2F4;
		float m_unk2F8;
		int m_uniqueID; //0x2FC
		GameObjectType m_objectType; //0x300
		int m_section; //0x304
		PAD(4);
		cocos2d::CCPoint m_startPosition; //0x30C
		std::string m_textureName; //0x314
		bool m_unk32C;
		bool m_unk32D;
		PAD(14);
		float m_unk33C;
		float m_unk340;
		PAD(16);
		bool m_isGlowDisabled; //0x354
		PAD(7);
		float m_scale; //0x35C
		int m_objectID; //0x360
		PAD(4);
		bool m_unk368;
		bool m_unk369;
		bool m_unk36A;
		bool m_isDontEnter; //0x36B
		bool m_isDontFade; //0x36C
		PAD(31);
		bool m_unk38C;
		bool m_unk38D;
		bool m_unk38E;
		PAD(1);
		float m_unk390;
		PAD(20);
		GJSpriteColor* m_baseColor; //0x3A8
		GJSpriteColor* m_detailColor; //0x3AC
		PAD(8);
		int m_zLayer; //0x3B8
		int m_zOrder; //0x3BC
		std::string m_unk3C0;
		bool m_unk3D8;
		bool m_unk3D9;
		bool m_isSelected; //0x3DA
		PAD(1);
		int m_globalClickCounter; //0x3DC i have no idea what this is for
		PAD(12);
		float m_multiScaleMultiplier;
		bool m_isGroupParent; //0x3F0
		PAD(3);
		short* m_groups; //0x3F4
		short m_groupCount; //0x3F8
		PAD(18);
		int m_editorLayer; //0x40C
		int m_editorLayer2; //0x410
		PAD(16);
		cocos2d::CCPoint m_firstPosition; //0x424 first position from when its placed in the editor
		PAD(28);
		bool m_isHighDetail; //0x448
		PAD(3);
		ColorActionSprite* m_colorActionSprite1; //0x44C
		ColorActionSprite* m_colorActionSprite2; //0x450
		GJEffectManager* m_effectManager; //0x454
		PAD(16);

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
			this->m_isSelected = false;

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

		void addToGroup(int id) {
			reinterpret_cast<void(__thiscall*)(
				GameObject*, int
			)>(
				base + 0xeb8d0
			)(
				this, id
			);
		}

		void updateCustomScale(float scale) {
			__asm movss xmm1, scale;
			reinterpret_cast<void(__thiscall*)(GameObject*)>(base + 0xe5340)(this);
		}
		// this is actually a virtual but i cant be bothered to get it in the right place
		void setRScale(float scale) {
			reinterpret_cast<void(__thiscall*)(GameObject*, float)>(base + 0xe5280)(this, scale);
		}
	};
	#pragma runtime_checks("s", restore)
}

#endif