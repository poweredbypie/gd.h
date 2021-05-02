#ifndef __GAMEOBJECT_H__
#define __GAMEOBJECT_H__

#include <gd.h>

namespace gd {

	class CCSpritePlus;

	enum GameObjectType {
		// dunno
	};

	enum GJCustomColorMode {};

	#pragma runtime_checks("s", off)
	class GameObject : public CCSpritePlus {
	protected:
		// from zmx
		// huge thank you!!!

		bool m_bFlipX;
		bool m_bFlipY;

		cocos2d::CCPoint m_obUnknown_0x1C4;
		cocos2d::CCObject* m_pOrientedBox;
		bool m_bIsOriented;

		cocos2d::CCObject* m_pObjectGlow;
		bool m_bIsSpeedPortal;
		bool m_bIsRingObject;

		cocos2d::CCAction* m_pAction;
		bool m_bIsRotatingObject;
		bool m_bPoweredOn;
		bool m_bHideObject;

		float m_fUnknown_0x1E4;
		float m_fUnknown_0x1E8;

		bool m_bIsActive;
		bool m_bUnknown_0x1ED;
		bool m_bIsDestroyed;

		cocos2d::CCParticleSystemQuad* m_pIbjectParticleSystem;
		std::string m_sVisibilityString;
		bool m_bIsVisible;

		cocos2d::CCPoint m_obUnknown_0x1FC;
		cocos2d::CCRect m_obUnknown_0x204;

		float m_fFadeInPosOffset;
		cocos2d::CCRect m_obUnknown_0x21C;

		bool m_bObjectRectDirty;
		bool m_bIsStartPos;
		bool m_bHasBeenActivatedByPlayer;
		bool m_bHasBeenActivated;
		bool m_bCanChangeCustomColor;
		bool m_bHasCustomChildren;
		bool m_bHasColorSprite;

		cocos2d::CCObject* m_pColorSprite;
		bool m_bIgnoreScreenCheck;

		float m_fRadius;
		bool m_bIsRotated;

		float m_fScaleModX;
		float m_fScaleModY;

		int m_nID;

		GameObjectType m_tGameObjectType;
		int m_nSectionIdx;
		bool m_bShouldSpawn;
		bool m_bTouchTriggered;

		cocos2d::CCPoint m_obRealPosition;
		std::string m_sRealTextureName;

		bool m_bIsDisabled;
		bool m_bUseAudioScale;
		bool m_bIsSleeping;

		float m_fStartRotation;
		float m_fStartScaleX;
		float m_fStartScaleY;
		bool m_bStartFlipX;
		bool m_bStartFlipY;
		bool m_bShouldHide;

		float m_fSpawnXPos;
		bool m_bIsInvisible;

		float m_fEnterAngle;
		int m_fEnterEffect;

		cocos2d::ccColor3B m_cTintColor;
		float m_fTintDuration;
		bool m_bTintGround;

		int m_nObjectKey;
		bool m_bDontTransform;
		bool m_bDontFade;
		bool m_bDontFadeTinted;
		bool m_bIsTintObject;
		bool m_bStateVar;

		int m_nObjectZ;
		cocos2d::CCNode* m_pParentObject;

		bool m_bCustomAudioScale;
		float m_fMinAudioScale;
		float m_fMaxAudioScale;

		int m_nUniqueID;
		bool m_bInvisibleMode;

		bool m_bGlowUseBGColor;
		bool m_bUseSpecialLight;
		bool m_bGlowUseReverseColor;
		bool m_bIsColorObject;

		float m_fOpacityMod;
		float m_fGlowOpacityMod;

		bool m_bDontShow;
		bool m_bUpSlope;

		int m_nSlopeType;
		float m_fSlopeAngle;

		bool m_bIsDangerousObject;
		GJCustomColorMode m_tCustomColorMode;
		GJCustomColorMode m_tColorMode;

		bool m_bForceBottomLayer;
		bool m_bEditorSelected;
		bool m_bCopyPlayerColor1;
		bool m_bCopyPlayerColor2;
		bool m_bCustomColorBlend;
		bool m_bWasSelected;
		bool m_bIsSelected;

		int m_bEditorSelectIdx;
		cocos2d::CCPoint m_obStoredPosition;
		int m_ngroupID;

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
		void getSaveString(std::string* sString) {
			reinterpret_cast<void(__thiscall*)(GameObject*, std::string*)>(
				base + 0xed0c0
			)(
				this, sString
			);
		}
		// custom function to use return value instead of pointer
		std::string getString() {
			std::string str;
			
			this->getSaveString(&str);

			return str;
		}
	};
	#pragma runtime_checks("s", restore)
}

#endif