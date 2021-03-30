#ifndef __GAMEOBJECT_H__
#define __GAMEOBJECT_H__

#include <gd.h>

namespace gd {

    class GameObject : public cocos2d::CCSprite {
        protected:
            PAD(0x84)
            float x;
            float y;
            PAD(0x352)
            bool selected;

        public:
            void setPosition(cocos2d::CCPoint _pos) {
                return reinterpret_cast<void(__thiscall*)(
                    GameObject*, cocos2d::CCPoint
                )>(
                    base + 0xe4de0
                )(
                    this, _pos
                );
            }

            void setOpacity(GLubyte _o) {
                return reinterpret_cast<void(__thiscall*)(
                    GameObject*, GLubyte
                )>(
                    base + 0xe53c0
                )(
                    this, _o
                );
            }

            void setRotation(float _rot) {
                return reinterpret_cast<void(__thiscall*)(
                    GameObject*, float
                )>(
                    base + 0xe4ed0
                )(
                    this, _rot
                );
            }

            void setScale(float _scale) {
                return reinterpret_cast<void(__thiscall*)(
                    GameObject*, float
                )>(
                    base + 0xe5170
                )(
                    this, _scale
                );
            }

            void setScaleX(float _scale) {
                return reinterpret_cast<void(__thiscall*)(
                    GameObject*, float
                )>(
                    base + 0xe5050
                )(
                    this, _scale
                );
            }

            void setScaleY(float _scale) {
                return reinterpret_cast<void(__thiscall*)(
                    GameObject*, float
                )>(
                    base + 0xe50e0
                )(
                    this, _scale
                );
            }

            void setVisible(bool _visible) {
                return reinterpret_cast<void(__thiscall*)(
                    GameObject*, bool
                )>(
                    base + 0xe57c0
                )(
                    this, _visible
                );
            }

            GameObject* duplicate() {
                return reinterpret_cast<GameObject*(__fastcall*)(
                    GameObject*
                )>(
                    base + 0xe4c40
                )(
                    this
                );
            }

            void deselect() {
                this->selected = false;
                
                return reinterpret_cast<void(__fastcall*)(
                    GameObject*
                )>(
                    base + 0xeee50
                )(
                    this
                );
            }

            cocos2d::CCRect* getObjectRect(cocos2d::CCRect* _rect) {
                return reinterpret_cast<cocos2d::CCRect*(__thiscall*)(
                    GameObject*, cocos2d::CCRect*, float, float
                )>(
                    base + 0xe4a70
                )(
                    this, _rect, 1.0f, 1.0f
                );
            }

            static GameObject* create(size_t _type) {
                return reinterpret_cast<GameObject*(__fastcall*)(
                    size_t
                )>(
                    base + 0xcf9d0
                )(
                    _type
                );
            }

            static GameObject* createWithFrame(const char* frame) {
                return reinterpret_cast<GameObject* (__fastcall*)(const char*)>(
                    base + 0xCF8F0
                    )(frame);
            }

            void __thiscall select(bool _sel) {
                this->selected = _sel;
            }
    };

}

#endif
