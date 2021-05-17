#ifndef DELEGATES_H
#define DELEGATES_h

#include <gd.h>

namespace gd {
    class GJGameLevel;
    class NumberInputLayer;
    class SetIDPopup;

    class TextInputDelegate {
        virtual void textChanged(void) {};
        virtual void textInputOpened(void) {};
        virtual void textInputClosed(void) {};
        virtual void textInputShouldOffset(float) {};
        virtual void textInputReturn(void) {};
        virtual bool allowTextInput(void) {return true;};
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
}

#endif
