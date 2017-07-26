//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTAddressBookDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class CTHotelOrderCommitView, NSString, UITableView, UITextField;

@interface CTHotelOrderCreateBaseViewController : CTRootViewController <UITableViewDataSource, UITableViewDelegate, CTAddressBookDelegate, UITextFieldDelegate>
{
    UITextField *_editingView;
    struct CGPoint _oldEditOffset;
    UITableView *_mainTableView;
    CTHotelOrderCommitView *_commitView;
}

@property(retain, nonatomic) CTHotelOrderCommitView *commitView; // @synthesize commitView=_commitView;
@property(retain, nonatomic) UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
- (void).cxx_destruct;
- (void)sendInvoiceDeliveryFeeMerge:(id)arg1 cacheBean:(id)arg2;
- (void)commitButtonClicked:(id)arg1;
- (void)updateContactEmail:(id)arg1;
- (void)updateContactFg:(id)arg1;
- (void)updateContactTel:(id)arg1;
- (void)updateHotelList;
- (void)addressBookDidSelectPerson:(id)arg1;
- (void)doSelectFgClicked:(id)arg1;
- (void)doContactPersonClicked:(id)arg1;
- (id)createContactCell;
- (void)resignAllTextFieldResponder;
- (void)restoreEditOffset;
- (void)ensureEditViewBeSeen;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectCellID:(int)arg2 indexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForCellID:(int)arg2 indexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForID:(int)arg2 indexPath:(id)arg3;
- (int)cellIDByIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)createCommitView:(_Bool)arg1;
- (void)createTableView;
- (void)initOrderBaseView;
- (void)initOrderBase;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)backBarButtonClicked:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)initBaseData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
