#ifndef __LEVELSELECTLAYER_H__
#define __LEVELSELECTLAYER_H__

#include <gd.h>

namespace gd {
    class LevelSelectLayer : public CCLayer {
        public:
            static LevelSelectLayer* create(int lvl) {
                return reinterpret_cast<LevelSelectLayer*(__fastcall*)(int)>(
                    base + 0x185500
                )(lvl);
            }
    };
}
