//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class KTVEmptyView, NSString, UITableView;

@interface KTVChorusKrcSettingView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    unsigned long long _chorusType;
    UITableView *_chorusKrcView;
    id <KTVChorusKrcSettingViewDataSource> _dataSource;
    id <KTVChorusKrcSettingViewDelegate> _delegate;
    UIView *_topTipView;
    KTVEmptyView *_emptyView;
}

@property(retain, nonatomic) KTVEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UIView *topTipView; // @synthesize topTipView=_topTipView;
@property(nonatomic) __weak id <KTVChorusKrcSettingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <KTVChorusKrcSettingViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *chorusKrcView; // @synthesize chorusKrcView=_chorusKrcView;
@property(nonatomic) unsigned long long chorusType; // @synthesize chorusType=_chorusType;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reload;
- (void)setupContentView;
- (id)initWithFrame:(struct CGRect)arg1 chorusType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
