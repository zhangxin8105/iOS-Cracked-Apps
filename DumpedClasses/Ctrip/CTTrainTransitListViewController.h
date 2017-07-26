//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTTrainListViewController.h"

#import "CTTrainTransitDetailViewDelegate.h"
#import "CTTrainTransitListFilterViewDelegate.h"

@class NSString, UIView;

@interface CTTrainTransitListViewController : CTTrainListViewController <CTTrainTransitDetailViewDelegate, CTTrainTransitListFilterViewDelegate>
{
    _Bool _needTransitPrompt;
    UIView *_promptView;
}

@property(retain, nonatomic) UIView *promptView; // @synthesize promptView=_promptView;
@property(nonatomic) _Bool needTransitPrompt; // @synthesize needTransitPrompt=_needTransitPrompt;
- (void).cxx_destruct;
- (void)trainTransitListFilterView:(id)arg1 didPressConfirmButtonWithFilter:(id)arg2;
- (void)trainTransitDetailView:(id)arg1 didPressOrderButtonWithTrain:(id)arg2 infoModel:(id)arg3;
- (void)requestTransitTicketData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)doButtonstate;
- (void)showTransitDetailViewWithModel:(id)arg1;
- (void)updateTrainList;
- (void)refreshListBusiness:(int)arg1;
- (void)filterAtIndex:(long long)arg1;
- (void)businessSuccess:(_Bool)arg1;
- (id)trainTransitListCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)trainInfoRowModelWithIndexPath:(id)arg1;
- (void)buildTableDataSource;
- (void)loadDataFirstTime;
- (void)trainListlogPageCode;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
