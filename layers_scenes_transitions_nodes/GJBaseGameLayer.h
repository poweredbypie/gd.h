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
<<<<<<< HEAD
		protected:
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
=======
	public:
		PAD(0x4)
		OBB2D* m_boundingBox;
		GJEffectManager* m_effectManager;
		cocos2d::CCLayer* m_gameLayer;
		cocos2d::CCSpriteBatchNode* m_spriteBatch1;
		cocos2d::CCSpriteBatchNode* m_spriteBatch2;
		cocos2d::CCSpriteBatchNode* m_spriteBatch3;
		cocos2d::CCSpriteBatchNode* m_spriteBatch4;
		cocos2d::CCSpriteBatchNode* m_spriteBatch5;
		CCNodeContainer* m_nodeContainer1;
		cocos2d::CCSpriteBatchNode* m_spriteBatch6;
		cocos2d::CCSpriteBatchNode* m_spriteBatch7;
		cocos2d::CCSpriteBatchNode* m_spriteBatch8;
		cocos2d::CCSpriteBatchNode* m_spriteBatch9;
		cocos2d::CCSpriteBatchNode* m_spriteBatch10;
		cocos2d::CCSpriteBatchNode* m_spriteBatch11;
		cocos2d::CCSpriteBatchNode* m_spriteBatch12;
		CCNodeContainer* m_nodeContainer2;
		cocos2d::CCSpriteBatchNode* m_spriteBatch13;
		cocos2d::CCSpriteBatchNode* m_spriteBatch14;
		cocos2d::CCSpriteBatchNode* m_spriteBatch15;
		cocos2d::CCSpriteBatchNode* m_spriteBatch16;
		cocos2d::CCSpriteBatchNode* m_spriteBatch17;
		cocos2d::CCSpriteBatchNode* m_spriteBatch18;
		cocos2d::CCSpriteBatchNode* m_spriteBatch19;
		CCNodeContainer* m_nodeContainer3;
		cocos2d::CCSpriteBatchNode* m_spriteBatch20;
		cocos2d::CCSpriteBatchNode* m_spriteBatch21;
		cocos2d::CCSpriteBatchNode* m_spriteBatch22;
		cocos2d::CCSpriteBatchNode* m_spriteBatch23;
		cocos2d::CCSpriteBatchNode* m_spriteBatch24;
		cocos2d::CCSpriteBatchNode* m_spriteBatch25;
		cocos2d::CCSpriteBatchNode* m_spriteBatch26;
		cocos2d::CCSpriteBatchNode* m_spriteBatch27;
		cocos2d::CCSpriteBatchNode* m_spriteBatch28;
		cocos2d::CCSpriteBatchNode* m_spriteBatch29;
		cocos2d::CCSpriteBatchNode* m_spriteBatch30;
		CCNodeContainer* m_nodeContainer4;
		cocos2d::CCSpriteBatchNode* m_spriteBatch31;
		cocos2d::CCSpriteBatchNode* m_spriteBatch32;
		cocos2d::CCSpriteBatchNode* m_spriteBatch33;
		cocos2d::CCSpriteBatchNode* m_spriteBatch34;
		cocos2d::CCSpriteBatchNode* m_spriteBatch35;
		cocos2d::CCSpriteBatchNode* m_spriteBatch36;
		cocos2d::CCSpriteBatchNode* m_spriteBatch37;
		CCNodeContainer* m_nodeContainer5;
		cocos2d::CCSpriteBatchNode* m_spriteBatch38;
		cocos2d::CCSpriteBatchNode* m_spriteBatch39;
		cocos2d::CCSpriteBatchNode* m_spriteBatch40;
		cocos2d::CCSpriteBatchNode* m_spriteBatch41;
		cocos2d::CCSpriteBatchNode* m_spriteBatch42;
		cocos2d::CCSpriteBatchNode* m_spriteBatch43;
		cocos2d::CCSpriteBatchNode* m_spriteBatch44;
		CCNodeContainer* m_nodeContainer6;
		cocos2d::CCSpriteBatchNode* m_spriteBatch45;
		cocos2d::CCSpriteBatchNode* m_spriteBatch46;
		cocos2d::CCSpriteBatchNode* m_spriteBatch47;
		cocos2d::CCSpriteBatchNode* m_spriteBatch48;
		cocos2d::CCSpriteBatchNode* m_spriteBatch49;
		cocos2d::CCSpriteBatchNode* m_spriteBatch50;
		cocos2d::CCSpriteBatchNode* m_spriteBatch51;
		CCNodeContainer* m_nodeContainer7;
		cocos2d::CCSpriteBatchNode* m_spriteBatch52;
		cocos2d::CCSpriteBatchNode* m_spriteBatch53;
		cocos2d::CCSpriteBatchNode* m_spriteBatch54;
		cocos2d::CCSpriteBatchNode* m_spriteBatch55;
		PlayerObject* m_player1;
		PlayerObject* m_player2;
		LevelSettingsObject* m_levelSettings;
		cocos2d::CCDictionary* m_dict1;
		cocos2d::CCArray* m_objects;
		cocos2d::CCArray* m_array1;
		cocos2d::CCArray* m_array2;
		cocos2d::CCArray* m_array3;
		cocos2d::CCArray* m_array4;
		cocos2d::CCArray* m_array5;
		cocos2d::CCNode* m_unknownNode;
		PAD(0x1c)
		cocos2d::CCDictionary* m_dict2;
		cocos2d::CCDictionary* m_dict3;
		cocos2d::CCDictionary* m_dict4;
		PAD(0x28)
		cocos2d::CCArray* m_array6;
		cocos2d::CCArray* m_array7;
		cocos2d::CCDictionary* m_dict5;
		cocos2d::CCDictionary* m_dict6;
		PAD(28)
>>>>>>> 8008deeeba5a62da9e307c4ced3819849035104f
	};
}

#endif
