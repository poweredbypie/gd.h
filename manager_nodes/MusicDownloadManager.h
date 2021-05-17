#ifndef __MUSICDOWNLOADMANAGER_H__
#define __MUSICDOWNLOADMANAGER_H__

#include <gd.h>

namespace gd {
    class MusicDownloadManager : public cocos2d::CCNode {
    public:
        PAD(4);
        cocos2d::CCDictionary* m_unknownDict;
        cocos2d::CCArray* m_unknownArr;
        cocos2d::CCDictionary* m_songsDict;

        static auto sharedState() {
            // im too lazy to find the actual function, so have this instead
            return *reinterpret_cast<MusicDownloadManager**>(base + 0x3222E8);
        }
        static std::string pathForSong(int _id) {
            std::string res;

            reinterpret_cast<void(__stdcall*)(
                std::string*, int
            )>(
                base + 0x1960e0
            )(
                &res, _id
            );

            return res;
        }
    };
}

#endif
