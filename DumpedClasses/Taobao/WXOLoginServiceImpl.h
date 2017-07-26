//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IYWLoginService.h"
#import "WXLoginDelegate_WXClient.h"
#import "YWServiceImplProtocol.h"

@class NSDate, NSDictionary, NSError, NSString, WXBlockContainer, YWIMCore, YWPerson;

@interface WXOLoginServiceImpl : NSObject <WXLoginDelegate_WXClient, YWServiceImplProtocol, IYWLoginService>
{
    _Bool _needCloseAutoBindAlias;
    _Bool _isMannualLogin;
    NSDictionary *_defaultLoginClientData;
    YWIMCore *_imCore;
    NSError *_lastConnectionError;
    WXBlockContainer *_blockContainerConnectionStatusChanged;
    CDUnknownBlockType _connectionStatusChangedBlock;
    unsigned long long _connectionStatus;
    CDUnknownBlockType _fetchLoginInfoBlock;
    CDUnknownBlockType _fetchLoginInfoBlockV2;
    NSString *_loginUserId;
    NSString *_loginPassword;
    NSString *_loginUserDisplayName;
    unsigned long long _loginType;
    NSDictionary *_loginExtraInfo;
    CDUnknownBlockType _loginCompletionBlock;
    YWPerson *_preLoginPerson;
    NSDate *_lastTokenInvalidDate;
    NSString *_enterBackgroundBlockId;
    YWPerson *_loginedUser;
}

+ (void)setLivingImCore:(id)arg1 forUserId:(id)arg2;
+ (id)livingImCoreForUserId:(id)arg1;
+ (id)livingHistoryImCoreMap;
@property(retain, nonatomic) YWPerson *loginedUser; // @synthesize loginedUser=_loginedUser;
@property(copy, nonatomic) NSString *enterBackgroundBlockId; // @synthesize enterBackgroundBlockId=_enterBackgroundBlockId;
@property(copy, nonatomic) NSDate *lastTokenInvalidDate; // @synthesize lastTokenInvalidDate=_lastTokenInvalidDate;
@property(copy, nonatomic) YWPerson *preLoginPerson; // @synthesize preLoginPerson=_preLoginPerson;
@property(nonatomic) _Bool isMannualLogin; // @synthesize isMannualLogin=_isMannualLogin;
@property(copy, nonatomic) CDUnknownBlockType loginCompletionBlock; // @synthesize loginCompletionBlock=_loginCompletionBlock;
@property(copy, nonatomic) NSDictionary *loginExtraInfo; // @synthesize loginExtraInfo=_loginExtraInfo;
@property(nonatomic) unsigned long long loginType; // @synthesize loginType=_loginType;
@property(copy, nonatomic) NSString *loginUserDisplayName; // @synthesize loginUserDisplayName=_loginUserDisplayName;
@property(copy, nonatomic) NSString *loginPassword; // @synthesize loginPassword=_loginPassword;
@property(copy, nonatomic) NSString *loginUserId; // @synthesize loginUserId=_loginUserId;
@property(copy, nonatomic) CDUnknownBlockType fetchLoginInfoBlockV2; // @synthesize fetchLoginInfoBlockV2=_fetchLoginInfoBlockV2;
@property(copy, nonatomic) CDUnknownBlockType fetchLoginInfoBlock; // @synthesize fetchLoginInfoBlock=_fetchLoginInfoBlock;
@property(nonatomic) unsigned long long connectionStatus; // @synthesize connectionStatus=_connectionStatus;
@property(copy, nonatomic) CDUnknownBlockType connectionStatusChangedBlock; // @synthesize connectionStatusChangedBlock=_connectionStatusChangedBlock;
@property(retain, nonatomic) WXBlockContainer *blockContainerConnectionStatusChanged; // @synthesize blockContainerConnectionStatusChanged=_blockContainerConnectionStatusChanged;
@property(copy, nonatomic) NSError *lastConnectionError; // @synthesize lastConnectionError=_lastConnectionError;
@property(nonatomic) __weak YWIMCore *imCore; // @synthesize imCore=_imCore;
@property(nonatomic) _Bool needCloseAutoBindAlias; // @synthesize needCloseAutoBindAlias=_needCloseAutoBindAlias;
@property(copy, nonatomic) NSDictionary *defaultLoginClientData; // @synthesize defaultLoginClientData=_defaultLoginClientData;
- (void).cxx_destruct;
- (void)uploadDeviceToken:(id)arg1 appId:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_hp_onNotificationWillEnterForeground:(id)arg1;
- (void)_hp_onNotificationDidEnterBackground:(id)arg1;
- (void)loginBiz:(id)arg1 didNeedForceUpdateToVersion:(id)arg2 withErrorMsg:(id)arg3;
- (void)loginBiz:(id)arg1 didAutoLoginFailedWithErrorMsg:(id)arg2 errCode:(long long)arg3;
- (void)loginBiz:(id)arg1 didLoginWithWrongCheckCode:(id)arg2;
- (void)loginBiz:(id)arg1 didLoginNeedCheckCode:(id)arg2;
- (void)loginBizDidLoginTimeout:(id)arg1;
- (void)loginBiz:(id)arg1 didLoginFailedWithErrorMsg:(id)arg2 errCode:(long long)arg3;
- (void)loginBizDidLoginSuccess:(id)arg1;
- (_Bool)isWXTokenAvailableForUserId:(id)arg1;
- (void)mannualDisconnect;
- (void)asyncLogoutWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)asyncLoginWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)resetPreLogin;
- (_Bool)preLoginWithPerson:(id)arg1;
- (void)removeConnectionStatusChangedBlockForKey:(id)arg1;
- (void)addConnectionStatusChangedBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2 ofPriority:(unsigned long long)arg3;
- (id)currentLoginedUser;
@property(readonly, nonatomic) NSString *currentLoginedUserId;
- (id)getServerTime;
- (_Bool)hasLoginThread;
@property(readonly, nonatomic) _Bool isCurrentLogined;
@property(copy, nonatomic) NSString *currentLoginedUserDisplayName;
- (_Bool)_beyondPasswordInvalidTryDomain;
- (void)_connectionStatusChangedTo:(unsigned long long)arg1 error:(id)arg2;
- (void)_clearLoginInfo;
- (void)_loginCompletionWithCode:(long long)arg1 description:(id)arg2 needClearLoginInfo:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_autoDisconnectWithReason:(id)arg1;
- (void)_autoLoginWithReason:(id)arg1;
- (CDUnknownBlockType)_autoLoginCompletionBlock;
- (void)_loginWithCompletionBlock:(CDUnknownBlockType)arg1 andIsAutoLogin:(_Bool)arg2;
- (void)_addNotifications;
- (void)onWXMessengerLoginSuccessJustForRelogin:(id)arg1;
- (void)onNotificationLogining:(id)arg1;
- (void)onNotificationWillEnterForeground:(id)arg1;
- (void)onNotificationDidEnterBackground:(id)arg1;
- (void)onNotificationWillTerminate:(id)arg1;
- (void)onNotificationReachabilityChanged:(id)arg1;
- (void)onNotificationForceDisconnected:(id)arg1;
- (void)dealloc;
- (id)initWithModularRef:(id)arg1;
@property(readonly, nonatomic) NSString *urlOfUnBindClientId;
@property(readonly, nonatomic) NSString *urlOfBindClientId;
- (id)urlPrefixOfClientId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool needClosePush; // @dynamic needClosePush;
@property(readonly) Class superclass;

@end
