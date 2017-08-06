//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LocalScrollPageViewController.h"

#import "RefreshControlDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class KGDefaultNetErrorView, KGRefreshController, KGTableView, KGThemeView, NSArray, NSString;

@interface KQFansBaseRankViewController : LocalScrollPageViewController <RefreshControlDelegate, UITableViewDelegate, UITableViewDataSource>
{
    NSString *_groupId;
    long long _days;
    NSArray *_fansArr;
    KGTableView *_rankTableView;
    KGDefaultNetErrorView *_errorView;
    KGThemeView *_noGiftView;
    KGRefreshController *_refreshControl;
}

@property(retain, nonatomic) KGRefreshController *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) KGThemeView *noGiftView; // @synthesize noGiftView=_noGiftView;
@property(retain, nonatomic) KGDefaultNetErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) KGTableView *rankTableView; // @synthesize rankTableView=_rankTableView;
@property(retain, nonatomic) NSArray *fansArr; // @synthesize fansArr=_fansArr;
@property(nonatomic) long long days; // @synthesize days=_days;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)finishRefreshingTopDirection;
- (void)refreshControl:(id)arg1 didEngageRefreshDirection:(int)arg2;
- (void)hideNoGiftView;
- (void)showNoGiftView;
- (void)hideErrorView;
- (void)showErrorView;
- (void)hideTableView;
- (void)showTableView;
- (void)errorViewBtnClicked:(id)arg1;
- (void)requestDataWithFirst:(_Bool)arg1;
- (void)setUpRefreshControl;
- (void)viewDidLoad;
- (id)initWithGroupId:(id)arg1 days:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
