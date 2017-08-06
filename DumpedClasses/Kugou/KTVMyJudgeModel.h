//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFViewModelObject.h"

@class KTVJudgeInfo, KTVJudgeNetHelper, KTVMyJudgeObject, NSMutableArray, NSObject<OS_dispatch_group>;

@interface KTVMyJudgeModel : KFViewModelObject
{
    _Bool isGetting;
    _Bool isDetailGetting;
    KTVJudgeNetHelper *judgeNetHelper;
    _Bool judgeSummarySuccess;
    _Bool judgeInfoSuccess;
    long long _playerId;
    KTVJudgeInfo *_judgeInfo;
    KTVMyJudgeObject *_judgeObject;
    NSMutableArray *_judgeDetailArr;
    CDUnknownBlockType _getDetailListBlock;
    NSObject<OS_dispatch_group> *_group;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(copy, nonatomic) CDUnknownBlockType getDetailListBlock; // @synthesize getDetailListBlock=_getDetailListBlock;
@property(retain, nonatomic) NSMutableArray *judgeDetailArr; // @synthesize judgeDetailArr=_judgeDetailArr;
@property(retain, nonatomic) KTVMyJudgeObject *judgeObject; // @synthesize judgeObject=_judgeObject;
@property(retain, nonatomic) KTVJudgeInfo *judgeInfo; // @synthesize judgeInfo=_judgeInfo;
@property(nonatomic) long long playerId; // @synthesize playerId=_playerId;
- (void).cxx_destruct;
- (_Bool)checkDetail:(long long)arg1;
- (void)checkUpdateSuccess;
- (void)update;
- (void)dealloc;
- (id)init;

@end
