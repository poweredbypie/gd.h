#ifndef DELEGATES_H
#define DELEGATES_h

#include <gd.h>

namespace gd {
    class GJGameLevel;
    class NumberInputLayer;
    class SetIDPopup;
    class CCTextInputNode;
    class GJDropDownLayer;
    class SongInfoObject;
    class GJSpecialColorSelect;

    enum GJSongError {
        kGJSongErrorUnknown = 0,
        // dunno, didnt bother to RE
    };

    class TextInputDelegate {
        virtual void textChanged(CCTextInputNode*) {}
        virtual void textInputOpened(CCTextInputNode*) {}
        virtual void textInputClosed(CCTextInputNode*) {}
        virtual void textInputShouldOffset(CCTextInputNode*, float) {}
        virtual void textInputReturn(CCTextInputNode*) {}
        virtual bool allowTextInput(CCTextInputNode*) { return true; }
    };

    class ColorSelectDelegate {
        virtual void colorSelectClosed(cocos2d::CCNode*);
    };

    class GJSpecialColorSelectDelegate {
        virtual void colorSelectClosed(GJSpecialColorSelect*, int);
    };

    class GJRotationControlDelegate {
        virtual void angleChangeBegin(void);
        virtual void angleChangeEnded(void);
        virtual void angleChanged(float);
    };

    class GJScaleControlDelegate {
        virtual void scaleChangeBegin(void);
        virtual void scaleChangeEnded(void);
        virtual void scaleChanged(float);
    };

    class MusicDownloadDelegate {
        virtual void downloadSongFailed(int, GJSongError);
        virtual void downloadSongFinished(SongInfoObject*);
        virtual void loadSongInfoFailed(int, GJSongError);
        virtual void loadSongInfoFinished(SongInfoObject*);
        virtual void songStateChanged(void);
    };

    enum UpdateResponse {
        kUpdateResponseUnknown,
        kUpdateResponseUpToDate,
        kUpdateResponseGameVerOutOfDate,
        kUpdateResponseUpdateSuccess,
    };

    enum LikeItemType {
        kLikeItemTypeUnknown,
    };

    class LevelDownloadDelegate {
        virtual void levelDownloadFinished(GJGameLevel*);
        virtual void levelDownloadFailed(int);
    };

    class LevelDeleteDelegate {
        virtual void levelDeleteFinished(int);
        virtual void levelDeleteFailed(int);
    };

    class LevelUpdateDelegate {
        virtual void levelUpdateFinished(GJGameLevel*, UpdateResponse);
        virtual void levelUpdateFailed(int);
    };

    class UploadActionDelegate {
        virtual void uploadActionFinished(int, int) {};
        virtual void uploadActionFailed(int, int) {};
    };

    class UploadPopupDelegate {
        virtual void onClosePopup(void) {};
    };
    
    class LikeItemDelegate {
        virtual void likedItem(LikeItemType, int, bool);
    };

    class RateLevelDelegate {
        virtual void rateLevelClosed(void);
    };

    class NumberInputDelegate {
        virtual void numberInputClosed(NumberInputLayer*);
    };

    class SetIDPopupDelegate {
        virtual void setIDPopupClosed(SetIDPopup*, int);
    };

    class GJDropDownLayerDelegate {
        virtual void dropDownLayerWillClose(GJDropDownLayer*);
    };

    class GooglePlayDelegate {
        virtual void googlePlaySignedIn() {}
    };
}

#endif
