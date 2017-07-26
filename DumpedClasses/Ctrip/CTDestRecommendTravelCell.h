//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTDestBaseCell.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTDestBottomButton, NSMutableArray, NSString, UITableView, UIView;

@interface CTDestRecommendTravelCell : CTDestBaseCell <UITableViewDelegate, UITableViewDataSource>
{
    CTDestBottomButton *_bottomBt;
    CDUnknownBlockType _moreRecommendBlock;
    CDUnknownBlockType _cellBlock;
    UITableView *_tableView;
    NSMutableArray *_dataArray;
    UIView *_footerView;
}

+ (double)heightForTableView:(id)arg1;
+ (double)heightForCell:(int)arg1 withModel:(id)arg2;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType cellBlock; // @synthesize cellBlock=_cellBlock;
@property(copy, nonatomic) CDUnknownBlockType moreRecommendBlock; // @synthesize moreRecommendBlock=_moreRecommendBlock;
@property(retain, nonatomic) CTDestBottomButton *bottomBt; // @synthesize bottomBt=_bottomBt;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)refreshFooterView;
- (void)refreshCell:(int)arg1 withModel:(id)arg2;
- (void)bottomViewTapped;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
