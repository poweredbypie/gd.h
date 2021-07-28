#ifndef __EFFECTGAMEOBJECT_H__
#define __EFFECTGAMEOBJECT_H__

#include <gd.h>

namespace gd {
    class EffectGameObject : public GameObject {
        public:
            PAD(12)
            int m_nTargetGroupID; // 0x0474
            int m_nCenterGroupID; // 0x0478
            PAD(0x98)
            int m_nTargetCount; // 0x0514
            PAD(20)
            int m_nTargetItemID; //0x052c
    };
}

#endif
