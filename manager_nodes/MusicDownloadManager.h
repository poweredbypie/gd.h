#ifndef MUSICDOWNLOADMANAGER_H
#define MUSICDOWNLOADMANAGER_H

#include <gd.h>

namespace gd {
    class MusicDownloadManager : public cocos2d::CCNode {
    public:
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
