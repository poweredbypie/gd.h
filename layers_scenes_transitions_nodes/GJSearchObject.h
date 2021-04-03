#ifndef __GJSEARCHOBJECT_H__
#define __GJSEARCHOBJECT_H__

#include <gd.h>

namespace gd {

enum SearchType {
    MyLevels        = 0x62,
    SavedLevels     = 0x63,
    Featured        = 0x6,
    HallOfFame      = 0x10,
    MapPacks        = 0x9,
    Search          = 0x0,
    MostDownloaded  = 0x1,
    MostLiked       = 0x2,
    Trending        = 0x3,
    Recent          = 0x4,
    Magic           = 0x7,
    Awarded         = 0xB,
    Followed        = 0xC,
    Friends         = 0xD,
    FindUsers       = 0xE,
    UsersLevels     = 0x5
};

class GJSearchObject : public cocos2d::CCNode {
    protected:
        SearchType m_nScreenID;

        // havent checked if there are more members

    public:
        static GJSearchObject* create(SearchType nID) {
            return reinterpret_cast<GJSearchObject*(__fastcall*)(
                SearchType
            )>(
                gd::base + 0xc2b90
            )( nID );
        }

        SearchType getType() {
            return this->m_nScreenID;
        }
};

}

#endif
