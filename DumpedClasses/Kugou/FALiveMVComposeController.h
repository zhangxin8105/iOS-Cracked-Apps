//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAViewController.h"

#import "FALiveMVComposePlayerViewDelegate.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"

@class FALiveMVComposePlayerView, FALiveMVComposeVM, FALiveMVShootModel, NSString, UIButton, UILabel, UITableView, UITextView;

@interface FALiveMVComposeController : FAViewController <UITextViewDelegate, FALiveMVComposePlayerViewDelegate, UITableViewDelegate>
{
    _Bool _isActive;
    _Bool _hasSetBarHidden;
    FALiveMVShootModel *_shootModel;
    FAViewController *_mainViewController;
    UITableView *_tableView;
    FALiveMVComposePlayerView *_playerView;
    UIButton *_composeBtn;
    UITextView *_contentView;
    UILabel *_placeholderLab;
    FALiveMVComposeVM *_composeVM;
    long long _requestCount;
    UILabel *_countLab;
    UILabel *_titleLabel;
}

@property(nonatomic) _Bool hasSetBarHidden; // @synthesize hasSetBarHidden=_hasSetBarHidden;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *countLab; // @synthesize countLab=_countLab;
@property(nonatomic) long long requestCount; // @synthesize requestCount=_requestCount;
@property(retain, nonatomic) FALiveMVComposeVM *composeVM; // @synthesize composeVM=_composeVM;
@property(retain, nonatomic) UILabel *placeholderLab; // @synthesize placeholderLab=_placeholderLab;
@property(retain, nonatomic) UITextView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *composeBtn; // @synthesize composeBtn=_composeBtn;
@property(retain, nonatomic) FALiveMVComposePlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak FAViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) FALiveMVShootModel *shootModel; // @synthesize shootModel=_shootModel;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (_Bool)tapGrestureEndEditingEnable;
- (void)updateCountTxt:(long long)arg1;
- (void)textFiledEditChanged:(id)arg1;
- (void)progressViewEndProgress:(_Bool)arg1;
- (void)progressViewWithNodeProgress:(double)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)stopPlayMV;
- (void)loadMvInfo;
- (void)getClassifyList;
- (void)queryMvStatus;
- (void)classifyItemClick:(id)arg1;
- (void)closeBtnClick:(id)arg1;
- (void)composeBtnClick:(id)arg1;
- (void)configClassifyView;
- (void)goback;
- (void)tapBackground:(id)arg1;
- (void)configHeadView;
- (void)configSubViews;
- (void)viewDidLoad;
- (_Bool)shouldHiddenNavigationBar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
