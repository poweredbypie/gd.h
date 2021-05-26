#ifndef __GJSEARCHOBJECT_H__
#define __GJSEARCHOBJECT_H__

#include <gd.h>

namespace gd {

enum SearchType {
    kSearchTypeMyLevels        = 0x62,
    kSearchTypeSavedLevels     = 0x63,
    kSearchTypeFeatured        = 0x6,
    kSearchTypeHallOfFame      = 0x10,
    kSearchTypeMapPacks        = 0x9,
    kSearchTypeSearch          = 0x0,
    kSearchTypeMostDownloaded  = 0x1,
    kSearchTypeMostLiked       = 0x2,
    kSearchTypeTrending        = 0x3,
    kSearchTypeRecent          = 0x4,
    kSearchTypeMagic           = 0x7,
    kSearchTypeAwarded         = 0xB,
    kSearchTypeFollowed        = 0xC,
    kSearchTypeFriends         = 0xD,
    kSearchTypeFindUsers       = 0xE,
    kSearchTypeUsersLevels     = 0x5
};

class GJSearchObject : public cocos2d::CCNode {
    protected:
        SearchType m_nScreenID;
        PAD(96)
        int m_nCurrentFolder;

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
