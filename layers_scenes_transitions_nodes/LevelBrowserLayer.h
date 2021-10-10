#ifndef __LEVELBROWSERLAYER_H__
#define __LEVELBROWSERLAYER_H__

#include <gd.h>

namespace gd {
    class GJSearchObject;

    class LevelBrowserLayer : public cocos2d::CCLayer {
        public:
            static LevelBrowserLayer* create(gd::GJSearchObject* pSearch) {
                return reinterpret_cast<LevelBrowserLayer*(__fastcall*)(
                    gd::GJSearchObject*
                )>(
                    gd::base + 0x159fa0
                )(
                    pSearch
                );
            }

            static void scene(gd::GJSearchObject* pSearch) {
                auto pScene = cocos2d::CCScene::create();

                pScene->addChild(gd::LevelBrowserLayer::create(pSearch));

                cocos2d::CCDirector::sharedDirector()->replaceScene(
                    cocos2d::CCTransitionFade::create(.5f, pScene)
                );
            }
    };
}

#endif
