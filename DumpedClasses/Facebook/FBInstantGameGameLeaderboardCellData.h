//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class FBInstantGameLeaderboardHeaderCellData, FBQuicksilverPlayerInfo, NSString;

@interface FBInstantGameGameLeaderboardCellData : NSObject <NSCopying>
{
    unsigned long long _subtype;
    FBInstantGameLeaderboardHeaderCellData *_headerCellData;
    FBQuicksilverPlayerInfo *_leaderboardCellData;
    NSString *_shimmeringLeaderboardHeaderCellData;
    NSString *_shimmeringLeaderboardCellData;
}

+ (id)shimmeringLeaderboardHeaderCellData:(id)arg1;
+ (id)shimmeringLeaderboardCellData:(id)arg1;
+ (id)leaderboardCellData:(id)arg1;
+ (id)headerCellData:(id)arg1;
- (void).cxx_destruct;
- (void)matchHeaderCellData:(CDUnknownBlockType)arg1 leaderboardCellData:(CDUnknownBlockType)arg2 shimmeringLeaderboardHeaderCellData:(CDUnknownBlockType)arg3 shimmeringLeaderboardCellData:(CDUnknownBlockType)arg4;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

