//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSString;

@interface NewInviteJoinGroupDataEngine : NSObject <IEngineDispatchDelegate>
{
}

+ (id)sharedInstance;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (int)RequestInviteJoinGroup:(unsigned long long)arg1 invitedArray:(id)arg2 msg:(id)arg3 sourceID:(unsigned int)arg4 subSourceID:(unsigned int)arg5;
- (int)RequestInviteJoinGroup:(unsigned long long)arg1 invitedArray:(id)arg2 msg:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
