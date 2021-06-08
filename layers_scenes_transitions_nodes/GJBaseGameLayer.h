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
	};
}

#endif
