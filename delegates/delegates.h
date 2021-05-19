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

    class TextInputDelegate {
        virtual void textChanged(CCTextInputNode*) {}
        virtual void textInputOpened(CCTextInputNode*) {}
        virtual void textInputClosed(CCTextInputNode*) {}
        virtual void textInputShouldOffset(CCTextInputNode*, float) {}
        virtual void textInputReturn(CCTextInputNode*) {}
        virtual bool allowTextInput(CCTextInputNode*) {return true;}
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

    enum GJSongError;

    class MusicDownloadDelegate {
        virtual void loadSongInfoFinished(SongInfoObject*) {}
        virtual void loadSongInfoFailed(int, GJSongError) {}
        virtual void downloadSongFinished(SongInfoObject*) {}
        virtual void downloadSongFailed(int, GJSongError) {}
        virtual void songStateChanged() {}
    };
}

#endif
