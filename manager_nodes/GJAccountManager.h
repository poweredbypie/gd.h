#ifndef __GJACCOUNTMANAGER_H__
#define __GJACCOUNTMANAGER_H__

#include <gd.h>

namespace gd {
    class GJAccountManager : public cocos2d::CCNode {
        protected:
            cocos2d::CCDictionary *m_pDLObject;
            std::string m_sPassword;
            std::string m_sUsername;
            int m_nPlayerAccountID;
            int m_nPlayerAccountIDSeed;
            int m_nPlayerAccountIDRand;
            GJAccountRegisterDelegate *m_pRegisterAccountDelegate;
            GJAccountLoginDelegate *m_pLoginAccountDelegate;
            GJAccountDelegate *m_pAccountDelegate;
            GJAccountBackupDelegate *m_pBackupAccountDelegate;
            GJAccountSyncDelegate *m_pSyncAccountDelegate;
            GJAccountSettingsDelegate *m_pAccountSettingsDelegate;

        public:
            static GJAccountManager* sharedState() {
                return reinterpret_cast<GJAccountManager*(__stdcall*)()>(
                    base + 0x107d50
                )();
            }

            const char* getPassword() {
                return this->m_sPassword.c_str();
            }
            const char* getUsername() {
                return this->m_sUsername.c_str();
            }
    };
}

#endif
