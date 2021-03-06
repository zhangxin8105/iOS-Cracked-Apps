//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface MQQUnifiedAccountFaceManager : NSObject
{
    NSMutableDictionary *_unifiedAccountFaceTimeDict;
    NSMutableDictionary *_unifiedAccountFaceDict;
    NSMutableArray *_downloadingArray;
}

+ (id)defaultUnifiedAccountFace;
+ (id)shareUnifiedAccountFaceManager;
@property(retain, nonatomic) NSMutableArray *downloadingArray; // @synthesize downloadingArray=_downloadingArray;
@property(retain, nonatomic) NSMutableDictionary *unifiedAccountFaceDict; // @synthesize unifiedAccountFaceDict=_unifiedAccountFaceDict;
@property(retain, nonatomic) NSMutableDictionary *unifiedAccountFaceTimeDict; // @synthesize unifiedAccountFaceTimeDict=_unifiedAccountFaceTimeDict;
- (id)unifiedAccountFaceForAccountId:(long long)arg1;
- (void)downloadFaceForAccountId:(long long)arg1 url:(id)arg2 isForced:(_Bool)arg3;
- (_Bool)updateFace:(id)arg1 account:(id)arg2;
- (_Bool)saveFaceInfo;
- (_Bool)isFaceExpireForAccountId:(long long)arg1;
- (void)addIntoDownloadingQueue:(id)arg1;
- (void)removeFromDownloadingQueue:(id)arg1;
- (_Bool)isInDownloadingQueue:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

