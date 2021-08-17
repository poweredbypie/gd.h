#pragma once
#ifndef GJGAMELEVEL_H
#define GJGAMELEVEL_H

#include <gd.h>

namespace gd {

    enum GJLevelType {
        kGJLevelTypeLocal = 1,
        kGJLevelTypeEditor = 2,
        kGJLevelTypeSaved = 3
    };

    class GJGameLevel : public cocos2d::CCNode {
    public:
        cocos2d::CCDictionary *lastBuildSave;   // 0xec

        int levelID_rand; // 0xf0
        int levelID_seed; // 0xf4 
        int levelID;      // 0xf8

        std::string levelName;  // 0xfc
        std::string levelDesc;  // 0x114
        std::string levelString; // 0x12c
        std::string userName;   // 0x144
        std::string recordString;   // 0x15c

        std::string uploadDate; // 0x174
        std::string updateDate; // 0x18c

        int userID_rand;    // 0x1a4
        int userID_seed;    // 0x1a8
        int userID;         // 0x1ac

        int accountID_rand; // 0x1b0
        int accountID_seed; // 0x1b4
        int accountID;      // 0x1b8

        int difficulty; // 0x1bc
        int audioTrack; // 0x1c0
        int songID;     // 0x1c4

        int levelRev;   // 0x1c8

        bool unlisted;  // 0x1c9

        int objectCount_rand;
        int objectCount_seed;
        int objectCount;
        int averageDifficulty;
        int ratings;
        int ratingsSum;

        int downloads;

        bool isEditable;
        bool gauntletLevel;
        bool gauntletLevel2;

        int workingTime;
        int workingTime2;

        bool lowDetailMode;
        bool lowDetailModeToggled;

        int isVerified_rand;
        int isVerified_seed;
        bool isVerified;
        bool isUploaded;
        bool hasBeenModified;

        int levelVersion;
        int gameVersion;

        int attempts_rand;
        int attempts_seed;
        int attempts;

        int jumps_rand;
        int jumps_seed;
        int jumps;

        int clicks_rand;
        int clicks_seed;
        int clicks;

        int attemptTime_rand;
        int attemptTime_seed;
        int attemptTime;

        int chk;

        bool isChkValid;
        bool isCompletionLegitimate;

        int normalPercent; // yes, it is out of order
        int normalPercent_seed;
        int normalPercent_rand;

        int orbCompletion_rand;
        int orbCompletion_seed;
        int orbCompletion;

        int newNormalPercent2_rand;
        int newNormalPercent2_seed;
        int newNormalPercent2;

        int practicePercent;

        int likes;
        int dislikes;
        int levelLength;
        int featured;

        bool isEpic;
        bool levelFavorited;
        int levelFolder;

        int dailyID_rand;
        int dailyID_seed;
        int dailyID;

        int demon_rand;
        int demon_seed;
        int demon;
        int demonDifficulty;
        int stars_rand;
        int stars_seed;
        int stars;

        bool autoLevel;
        int coins;
        int coinsVerified_rand;
        int coinsVerified_seed;
        int coinsVerified;

        int password_rand;
        int password_seed;

        int originalLevel_rand;
        int originalLevel_seed;
        int originalLevel;

        bool twoPlayerMode;

        int failedPasswordAttempts;

        int firstCoinVerified_rand;
        int firstCoinVerified_seed;
        int firstCoinVerified;

        int secondCoinVerified_rand;
        int secondCoinVerified_seed;
        int secondCoinVerified;

        int thirdCoinVerified_rand;
        int thirdCoinVerified_seed;
        int thirdCoinVerified;

        int starsRequested;

        bool showedSongWarning;
        int starRatings;
        int starRatingsSum;
        int maxStarRatings;
        int minStarRatings;
        int demonVotes;
        int rateStars;
        int rateFeature;

        std::string rateUser;

        bool dontSave;
        bool levelNotDownloaded;

        int requiredCoins;
        bool isUnlocked;

        cocos2d::CCPoint lastCameraPos;

        float lastEditorZoom;
        int lastBuildTab;
        int lastBuildPage;
        int lastBuildGroupID;

        GJLevelType levelType;

        int M_ID;
        std::string tempName;
        std::string capacityString;

        bool highObjectsEnabled;
        std::string personalBests;

        // this function is inlined on pc builds
        static GJGameLevel *create() {
            return reinterpret_cast<GJGameLevel*(__stdcall*)()>(
                base + 0xbd2b0
            )();
        }

        std::string getAudioFileName() {
            std::string ret;

            reinterpret_cast<void(__thiscall*)(
                GJGameLevel*, std::string*
            )>(
                base + 0xbdc70
            )(
                this, &ret
            );

            return ret;
        }

        void setLevelData(const char* data) {
            auto len = strlen(data);
            auto addedLvlStr = reinterpret_cast<uintptr_t>(this) + 0x12c;

            *reinterpret_cast<size_t*>(addedLvlStr + 16) = len;   // length
            *reinterpret_cast<size_t*>(addedLvlStr + 20) = max(len, 15); // capacity

            if (len <= 15)
                memcpy(reinterpret_cast<char*>(addedLvlStr), data, len + 1);
            else {
                void* newb = malloc(len + 1);
                memcpy(newb, data, len + 1);
                *reinterpret_cast<void**>(addedLvlStr) = newb;
            }
        }

        void setLevelData(std::string const& data) {
            this->setLevelData(data.c_str());
        }
};

}

#endif
