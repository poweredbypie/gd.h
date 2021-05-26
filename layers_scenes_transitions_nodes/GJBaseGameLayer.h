#ifndef __GJBASEGAMELAYER_H__
#define __GJBASEGAMELAYER_H__

#include <gd.h>

namespace gd {
	class PlayerObject;
	class LevelSettingsObject;
	
	class GJBaseGameLayer : public cocos2d::CCLayer {
	public:
		PAD(264);
		PlayerObject* m_player1; //0x0224
		PlayerObject* m_player2; //0x0228
		LevelSettingsObject* m_levelSettings; //0x022C
		PAD(128);
		bool m_unk2B0;
		PAD(27);
	};
}

#endif