#ifndef __PLAYEROBJECT_H__
#define __PLAYEROBJECT_H__

#include <gd.h>

namespace gd {

	class GameObject;
	class AnimatedSpriteDelegate;
	class GJRobotSprite;
	class GJSpiderSprite;
	class HardStreak;

	class PlayerObject : public GameObject, public AnimatedSpriteDelegate {
	public:
		PAD(24);
		cocos2d::CCNode* unk_0484;
		cocos2d::CCDictionary* unk_0488;
		cocos2d::CCDictionary* unk_048C;
		PAD(36);
		cocos2d::CCSprite* unk_04B4;
		PAD(32);
		cocos2d::CCArray* unk_04D8;
		PAD(12);
		cocos2d::CCSprite* unk_04E8;
		cocos2d::CCSprite* unk_04EC;
		cocos2d::CCSprite* unk_04F0;
		cocos2d::CCSprite* unk_04F4;
		cocos2d::CCSprite* unk_04F8;
		cocos2d::CCSprite* unk_04FC;
		cocos2d::CCSprite* unk_0500;
		cocos2d::CCSprite* unk_0504;
		cocos2d::CCSprite* unk_0508;
		cocos2d::CCSprite* unk_050C;
		cocos2d::CCMotionStreak* regularTrail; //0x0510
		HardStreak* waveStreak; //0x0514
		double m_xAccel; //0x518
		double m_jumpAccel; //0x520 unsure about the name
		double m_gravity; //0x528
		PAD(8);
		bool unk_0538;
		bool unk_0539;
		bool unk_053A;
		bool unk_053B;
		bool unk_053C;
		bool unk_053D;
		bool isHoldingShipIDK; //0x053E
		bool unk_053F;
		PAD(104);
		GJRobotSprite* robotSprite;
		GJSpiderSprite* spiderSprite;
		PAD(4);
		cocos2d::CCParticleSystemQuad* unk_05B4;
		cocos2d::CCParticleSystemQuad* unk_05B8;
		cocos2d::CCParticleSystemQuad* unk_05BC;
		cocos2d::CCParticleSystemQuad* unk_05C0;
		cocos2d::CCParticleSystemQuad* unk_05C4;
		cocos2d::CCParticleSystemQuad* unk_05C8;
		cocos2d::CCParticleSystemQuad* unk_05CC;
		PAD(4);
		cocos2d::CCParticleSystemQuad* unk_05D4;
		cocos2d::CCParticleSystemQuad* unk_05D8;
		PAD(52);
		bool unk_0610;
		bool m_isHolding; //0x0611
		bool m_hasJustHeld; //0x0612
		bool m_isHolding2; //0x0613
		bool canBufferOrb2; //0x0614
		PAD(15);
		bool m_canRobotJump; //0x624
		double m_yAccel; //0x0628
		PAD(8);
		bool m_isShip; //0x0638
		bool m_isUFO; //0x0639
		bool m_isBall; //0x063A
		bool m_isWave; //0x063B
		bool m_isRobot; //0x063C
		bool m_isSpider; //0x063D
		bool m_isUpsideDown; //0x063E
		PAD(1);
		bool m_isOnGround; //0x0640
		bool m_isDashing; //0x0641
		PAD(2);
		float m_vehicleSize; //0x644
		float m_playerSpeed; //0x0648
		cocos2d::CCPoint lastPosIDK; //0x064C
		cocos2d::CCPoint lastPortalPos; //0x0654
		cocos2d::CCLayer* unk_065C;
		bool m_isSliding; //0x0660 // this might be isSliding
		bool m_isRising; //0x0661
		PAD(2);
		cocos2d::CCPoint lastGroundedPos; //0x0664
		cocos2d::CCArray* unk_066C;
		GameObject* lastTouchedPortalMaybe; //0x0670
		PAD(8);
		cocos2d::CCPoint position; //0x067C
		PAD(4);
		double unk_0688;
		PAD(12);
		float yVelMaybeCantChangeItThough; //0x069C
		PAD(4);
		float last200YPositions[200]; //0x06A4
		PAD(28);

		virtual void setVisible(bool visible) {
			return reinterpret_cast<void(__thiscall*)(PlayerObject*, bool)>(
				base + 0x1FA860
				)(this, visible);
		}
		void pushButton(int button) {
			reinterpret_cast<void(__thiscall*)(PlayerObject*, int)>(base + 0x1F4E40)(this, button);
		}
		void releaseButton(int button) {
			reinterpret_cast<void(__thiscall*)(PlayerObject*, int)>(base + 0x1F4F70)(this, button);
		}
		bool playerIsFalling() {
			return reinterpret_cast<bool(__thiscall*)(PlayerObject*)>(base + 0x1f5d60)(this);
		}
		void runRotateAction() {
			reinterpret_cast<void(__thiscall*)(PlayerObject*)>(base + 0x1e9bf0)(this);
		}
		void playBurstEffect() {
			reinterpret_cast<void(__thiscall*)(PlayerObject*)>(base + 0x1f6790)(this);
		}
		void spiderTestJump(bool param1) {
			reinterpret_cast<void(__thiscall*)(PlayerObject*, bool)>(base + 0x1ed360)(this, param1);
		}
		void incrementJumps() {
			reinterpret_cast<void(__thiscall*)(PlayerObject*)>(base + 0x1e9a20)(this);
		}
		void flipGravity(bool param1, bool param2) {
			reinterpret_cast<void(__thiscall*)(PlayerObject*, bool, bool)>(base + 0x1f59d0)(this, param1, param2);
		}
	};
}

#endif