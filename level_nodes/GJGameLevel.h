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
        cocos2d::CCDictionary* m_pLastBuildSave;   // 0xec
        int m_nLevelID_rand; // 0xf0
        int m_nLevelID_seed; // 0xf4 
        int m_nLevelID;      // 0xf8
        std::string m_sLevelName;       // 0xfc
        std::string m_sLevelDesc;       // 0x114
        std::string m_sLevelString;     // 0x12c
        std::string m_sCreatorName;     // 0x144
        std::string m_sRecordString;    // 0x15c
        std::string m_sUploadDate; // 0x174
        std::string m_sUpdateDate; // 0x18c
        int m_nUserID_rand;     // 0x1a4
        int m_nUserID_seed;     // 0x1a8
        int m_nUserID;          // 0x1ac
        int m_nAccountID_rand;  // 0x1b0
        int m_nAccountID_seed;  // 0x1b4
        int m_nAccountID;       // 0x1b8
        int m_nDifficulty;      // 0x1bc
        int m_nAudioTrack;      // 0x1c0
        int m_nSongID;          // 0x1c4
        int m_nLevelRev;        // 0x1c8
        bool m_bUnlisted;       // 0x1cc
        int m_nObjectCount_rand;// 0x1d0
        int m_nObjectCount_seed;// 0x1d4
        int m_nObjectCount;     // 0x1d8
        int m_nAverageDifficulty;// 0x1dc
        int m_nRatings;         // 0x1e0
        int m_nRatingsSum;      // 0x1e4
        int m_nDownloads;       // 0x1e8
        bool m_bIsEditable;     // 0x1ec
        bool m_bGauntletLevel;  // 0x1ed
        bool m_bGauntletLevel2; // 0x1ee
        int m_nWorkingTime;     // 0x1f0
        int m_nWorkingTime2;    // 0x1f4
        bool m_bLowDetailMode;  // 0x1f8
        bool m_bLowDetailModeToggled;   // 0x1f9
        int m_nIsVerified_rand; // 0x1fc
        int m_nIsVerified_seed; // 0x200
        bool m_bIsVerified;     // 0x201
        bool m_bIsUploaded;     // 0x202
        bool m_bHasBeenModified;// 0x203
        int m_nLevelVersion;
        int m_nGameVersion;
        int m_nAttempts_rand;
        int m_nAttempts_seed;
        int m_nAttempts;
        int m_nJumps_rand;
        int m_nJumps_seed;
        int m_nJumps;
        int m_nClicks_rand;
        int m_nClicks_seed;
        int m_nClicks;
        int m_nAttemptTime_rand;
        int m_nAttemptTime_seed;
        int m_nAttemptTime;
        int m_nChk;
        bool m_bIsChkValid;
        bool m_bIsCompletionLegitimate;
        int m_nNormalPercent; // yes, it is out of order
        int m_nNormalPercent_seed;
        int m_nNormalPercent_rand;
        int m_nOrbCompletion_rand;
        int m_nOrbCompletion_seed;
        int m_nOrbCompletion;
        int m_nNewNormalPercent2_rand;
        int m_nNewNormalPercent2_seed;
        int m_nNewNormalPercent2;
        int m_nPracticePercent;
        int m_nLikes;
        int m_nDislikes;
        int m_nLevelLength;
        int m_nFeatured;
        bool m_bIsEpic;
        bool m_bLevelFavorited;
        int m_nLevelFolder;
        int m_nDailyID_rand;
        int m_nDailyID_seed;
        int m_nDailyID;
        int m_nDemon_rand;
        int m_nDemon_seed;
        int m_nDemon;
        int m_nDemonDifficulty;
        int m_nStars_rand;
        int m_nStars_seed;
        int m_nStars;
        bool m_bAutoLevel;
        int m_nCoins;
        int m_nCoinsVerified_rand;
        int m_nCoinsVerified_seed;
        int m_nCoinsVerified;
        int m_nPassword_rand;
        int m_nPassword_seed;
        int m_nOriginalLevel_rand;
        int m_nOriginalLevel_seed;
        int m_nOriginalLevel;
        bool m_bTwoPlayerMode;
        int m_nFailedPasswordAttempts;
        int m_nFirstCoinVerified_rand;
        int m_nFirstCoinVerified_seed;
        int m_nFirstCoinVerified;
        int m_nSecondCoinVerified_rand;
        int m_nSecondCoinVerified_seed;
        int m_nSecondCoinVerified;
        int m_nThirdCoinVerified_rand;
        int m_nThirdCoinVerified_seed;
        int m_nThirdCoinVerified;
        int m_nStarsRequested;
        bool m_bShowedSongWarning;
        int m_nStarRatings;
        int m_nStarRatingsSum;
        int m_nMaxStarRatings;
        int m_nMinStarRatings;
        int m_nDemonVotes;
        int m_nRateStars;
        int m_nRateFeature;
        std::string m_sRateUser;
        bool m_bDontSave;
        bool m_bLevelNotDownloaded;
        int m_nRequiredCoins;
        bool m_bIsUnlocked;
        cocos2d::CCPoint m_obLastCameraPos;
        float m_fLastEditorZoom;
        int m_nLastBuildTab;
        int m_nLastBuildPage;
        int m_nLastBuildGroupID;
        GJLevelType m_eLevelType;
        int m_nM_ID;
        std::string m_sTempName;
        std::string m_sCapacityString;
        bool m_bHighObjectsEnabled;
        std::string m_sPersonalBests;

        void dataLoaded(DS_Dictionary* dict) {
            return reinterpret_cast<void(__thiscall*)(
                GJGameLevel*, DS_Dictionary*
            )>( base + 0xbded0 )(this, dict);
        }

        // this function is inlined on pc builds
        static GJGameLevel* create() {
            return reinterpret_cast<GJGameLevel*(__stdcall*)()>(
                base + 0xbd2b0
            )();
        }

        static GJGameLevel* createWithCoder(DS_Dictionary* dict) {
            auto ret = GJGameLevel::create();
            ret->dataLoaded(dict);
            return ret;
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
