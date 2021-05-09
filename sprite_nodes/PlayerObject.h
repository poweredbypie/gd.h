#ifndef __PLAYEROBJECT_H__
#define __PLAYEROBJECT_H__

#include <gd.h>

namespace gd {

	class GameObject;
	class AnimatedSpriteDelegate;
	class GJRobotSprite;
	class GJSpiderSprite;
	using HardStreak = cocos2d::CCDrawNode;

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
		PAD(32);
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
		bool isActuallyHolding; //0x0611
		bool canBufferOrb; //0x0612
		bool isHolding; //0x0613
		bool canBufferOrb2; //0x0614
		PAD(19);
		double yAccel; //0x0628
		PAD(8);
		bool isShip; //0x0638
		bool isUFO; //0x0639
		bool isBall; //0x063A
		bool isWave; //0x063B
		bool isRobot; //0x063C
		bool isSpider; //0x063D
		bool isUpsideDown; //0x063E
		PAD(1);
		bool isOnGroundOrCanClickToDoAnythingIDK; //0x0640
		bool isDashing; //0x0641
		PAD(6);
		float playerSpeed; //0x0648
		cocos2d::CCPoint lastPosIDK; //0x064C
		cocos2d::CCPoint lastPortalPos; //0x0654
		cocos2d::CCLayer* unk_065C;
		bool isOnGround; //0x0660
		bool isAcceleratingUpOnJumpIDK; //0x0661
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
	};
}

#endif