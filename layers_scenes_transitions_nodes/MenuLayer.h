#ifndef __MENULAYER_H__
#define __MENULAYER_H__

#include <gd.h>

namespace gd {

	class FLAlertLayerProtocol;

	class MenuLayer : public cocos2d::CCLayer, public gd::FLAlertLayerProtocol {
	public:
		static MenuLayer* node() {
			return reinterpret_cast<MenuLayer* (__stdcall*)()>(
				base + 0x190550
				)();
		}
		static cocos2d::CCScene* scene(bool options) {
			return reinterpret_cast<cocos2d::CCScene* (__fastcall*)(bool)>(
				base + 0x190720
				)(options);
		}
	};
}

#endif