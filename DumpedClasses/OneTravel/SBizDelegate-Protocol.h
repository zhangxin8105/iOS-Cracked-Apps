//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL, ONENotifactionMsg;

@protocol SBizDelegate <NSObject>
+ (NSString *)businessId;

@optional
- (NSDictionary *)business:(id <SBizDelegate>)arg1 handleNetworkHost:(NSString *)arg2 path:(NSString *)arg3 info:(NSDictionary *)arg4;
- (_Bool)product:(id <SBizDelegate>)arg1 didReceiveRemoteNotifactionMsg:(ONENotifactionMsg *)arg2;
- (void)business:(id <SBizDelegate>)arg1 openURL:(NSURL *)arg2 info:(ONENotifactionMsg *)arg3;
- (_Bool)business:(id <SBizDelegate>)arg1 canOpenURL:(NSURL *)arg2 info:(ONENotifactionMsg *)arg3;
- (_Bool)shouldProductLineShow:(id <SBizDelegate>)arg1;
- (id <SBizDataSource>)bizDataSourceForBiz:(id <SBizDelegate>)arg1;
- (void)business:(id <SBizDelegate>)arg1 initWithId:(NSString *)arg2;
@end
