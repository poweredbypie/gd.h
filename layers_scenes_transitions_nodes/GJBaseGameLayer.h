#ifndef __GJBASEGAMELAYER_H__
#define __GJBASEGAMELAYER_H__

#include <gd.h>

namespace gd {
	class OBB2D;
	class GJEffectManager;
	class CCNodeContainer;
	class LevelSettingsObject;
	class PlayerObject;

	class GJBaseGameLayer : public cocos2d::CCLayer {
		public:
			PAD(0x4)
			OBB2D* m_pOBB2D;
			GJEffectManager* m_pEffectManager;
			cocos2d::CCLayer* m_pObjectLayer;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch0;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch1;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch2;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch3;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch4;
			CCNodeContainer* m_pNodeContainer0;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch5;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch6;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch7;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch8;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch9;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch10;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch11;
			CCNodeContainer* m_pNodeContainer1;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch12;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch13;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch14;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch15;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch16;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch17;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch18;
			CCNodeContainer* m_pNodeContainer2;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch19;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch20;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch21;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch22;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch23;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch24;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch25;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch26;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch27;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch28;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch29;
			CCNodeContainer* m_pNodeContainer3;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch30;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch31;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch32;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch33;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch34;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch35;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch36;
			CCNodeContainer* m_pNodeContainer4;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch37;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch38;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch39;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch40;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch41;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch42;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch43;
			CCNodeContainer* m_pNodeContainer5;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch44;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch45;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch46;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch47;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch48;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch49;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch50;
			CCNodeContainer* m_pNodeContainer6;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch51;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch52;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch53;
			cocos2d::CCSpriteBatchNode* m_pSpriteBatch54;
			PlayerObject* m_pPlayer1;
			PlayerObject* m_pPlayer2;
			LevelSettingsObject* m_pLevelSettings;
			cocos2d::CCDictionary* m_pDict0;
			cocos2d::CCArray* m_pObjects;
			cocos2d::CCArray* m_pArray1;
			cocos2d::CCArray* m_pArray2;
			cocos2d::CCArray* m_pArray3;
			cocos2d::CCArray* m_pArray4;
			cocos2d::CCArray* m_pArray5;
			cocos2d::CCNode* m_pSomeNode;
			PAD(0x1c)
			cocos2d::CCDictionary* m_pDict1;
			cocos2d::CCDictionary* m_pDict2;
			cocos2d::CCDictionary* m_pDict3;
			PAD(0x28)
			cocos2d::CCArray* m_pArray6;
			cocos2d::CCArray* m_pArray7;
			cocos2d::CCDictionary* m_pDict4;
			cocos2d::CCDictionary* m_pDict5;
			PAD(0x1c)
		
		public:
			cocos2d::CCLayer* getObjectLayer() { return m_pObjectLayer; }

        	cocos2d::CCArray* getAllObjects() { return this->m_pObjects; }
	};
}

#endif
