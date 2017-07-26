//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMMarketBaseViewController.h"

#import "ARTObserverProtocol.h"
#import "MonePageProtocol.h"
#import "TMMarketFrontPageHotSellManagerDelegate.h"
#import "TMMarketLifecycleDelegate.h"
#import "TMMarketTitleViewDelegate.h"
#import "TMMarketToolbarDelegate.h"
#import "TangramListPagingFlowLayoutDelegate.h"
#import "TangramViewDatasource.h"
#import "UIScrollViewDelegate.h"

@class DRModule, NSString, NSTimer, TMMarketAlertView, TMMarketBackTopButton, TMMarketComponentFloatEntryModel, TMMarketComponentSearchBarModel, TMMarketFrontPageHotSellManager, TMMarketHotSellTabComponent, TMMarketLifecycle, TMMarketMainViewController, TMMarketPerformanceInfo, TMMarketPullToRefreshBackgroundView, TMMarketTitleView, TMMarketToolbar, TangramBus, TangramFlareHelper, TangramView, UIButton;

@interface TMMarketFrontController : TMMarketBaseViewController <UIScrollViewDelegate, MonePageProtocol, TMMarketToolbarDelegate, TMMarketTitleViewDelegate, TangramViewDatasource, TangramListPagingFlowLayoutDelegate, TMMarketFrontPageHotSellManagerDelegate, ARTObserverProtocol, TMMarketLifecycleDelegate>
{
    double _scrollViewOffsetY;
    _Bool _toolBarDidMoveToNaviCtrl;
    long long _hotSellItemLayoutIndex;
    _Bool _isMoreLoading;
    _Bool _isFromCache;
    _Bool _isByTangramReload;
    TMMarketMainViewController *_mainController;
    TangramView *_tangramView;
    TangramBus *_tangramBus;
    TMMarketLifecycle *_mLifecycle;
    NSString *_yosemitePreviewParam;
    TMMarketTitleView *_titleView;
    TMMarketPullToRefreshBackgroundView *_pullToRefreshBackgroundView;
    TMMarketComponentSearchBarModel *_searchBarModel;
    TMMarketToolbar *_toolBar;
    TMMarketHotSellTabComponent *_hotSellTabComponent;
    DRModule *_drModule;
    long long _hotSellTabIndex;
    TMMarketFrontPageHotSellManager *_hotSellManager;
    NSTimer *_flareTimer;
    TMMarketPerformanceInfo *_performanceInfo;
    TangramFlareHelper *_flareHelper;
    TMMarketBackTopButton *_backTopButton;
    UIButton *_floatEntryButton;
    TMMarketComponentFloatEntryModel *_floatEntryModel;
    TMMarketAlertView *_alertView;
}

@property(retain, nonatomic) TMMarketAlertView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) __weak TMMarketComponentFloatEntryModel *floatEntryModel; // @synthesize floatEntryModel=_floatEntryModel;
@property(retain, nonatomic) UIButton *floatEntryButton; // @synthesize floatEntryButton=_floatEntryButton;
@property(retain, nonatomic) TMMarketBackTopButton *backTopButton; // @synthesize backTopButton=_backTopButton;
@property(retain, nonatomic) TangramFlareHelper *flareHelper; // @synthesize flareHelper=_flareHelper;
@property(nonatomic) _Bool isByTangramReload; // @synthesize isByTangramReload=_isByTangramReload;
@property(retain, nonatomic) TMMarketPerformanceInfo *performanceInfo; // @synthesize performanceInfo=_performanceInfo;
@property(nonatomic) __weak NSTimer *flareTimer; // @synthesize flareTimer=_flareTimer;
@property(nonatomic) _Bool isFromCache; // @synthesize isFromCache=_isFromCache;
@property(retain, nonatomic) TMMarketFrontPageHotSellManager *hotSellManager; // @synthesize hotSellManager=_hotSellManager;
@property(nonatomic) long long hotSellTabIndex; // @synthesize hotSellTabIndex=_hotSellTabIndex;
@property(retain, nonatomic) DRModule *drModule; // @synthesize drModule=_drModule;
@property(nonatomic) __weak TMMarketHotSellTabComponent *hotSellTabComponent; // @synthesize hotSellTabComponent=_hotSellTabComponent;
@property(retain, nonatomic) TMMarketToolbar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) TMMarketComponentSearchBarModel *searchBarModel; // @synthesize searchBarModel=_searchBarModel;
@property(retain, nonatomic) TMMarketPullToRefreshBackgroundView *pullToRefreshBackgroundView; // @synthesize pullToRefreshBackgroundView=_pullToRefreshBackgroundView;
@property(retain, nonatomic) TMMarketTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) NSString *yosemitePreviewParam; // @synthesize yosemitePreviewParam=_yosemitePreviewParam;
@property(retain, nonatomic) TMMarketLifecycle *mLifecycle; // @synthesize mLifecycle=_mLifecycle;
@property(retain, nonatomic) TangramBus *tangramBus; // @synthesize tangramBus=_tangramBus;
@property(retain, nonatomic) TangramView *tangramView; // @synthesize tangramView=_tangramView;
@property(nonatomic) __weak TMMarketMainViewController *mainController; // @synthesize mainController=_mainController;
- (void).cxx_destruct;
- (_Bool)pageIsAlreadyOnTop;
- (void)pageScrollToTop;
- (void)sendAlimamaAdForImpression:(id)arg1;
- (id)extractScmFromModel:(id)arg1;
- (void)componentExposeTrack:(id)arg1 model:(id)arg2 index:(unsigned long long)arg3;
- (void)handleThemeUpdateNotifaction:(id)arg1;
- (void)registerThemeUpdateNotification;
- (void)addShopCartWithGoodsId:(id)arg1 goodsImage:(id)arg2 absPoint:(struct CGPoint)arg3 callback:(CDUnknownBlockType)arg4;
- (void)go2GoodsDetailWithItemId:(id)arg1 spm:(id)arg2 scm:(id)arg3;
- (void)userLocationCheckCompleteWithEvent:(id)arg1;
- (void)reloadPage;
- (void)asyncComponentComplete;
- (void)handleAddShopCartAction:(id)arg1;
- (void)handleReceiveFlowId:(id)arg1;
- (void)handleAddShopCartActionWithCoupon:(id)arg1;
- (void)handleJumpDetailAction:(id)arg1;
- (void)handleOpenURLAction:(id)arg1;
- (void)handlePostLoading;
- (void)handleRemoveComponentAction:(id)arg1;
- (void)handleRemoveLayoutAction:(id)arg1;
- (void)registerAction;
- (void)unRegisterAction;
- (id)dataForUserTrack;
- (id)UTPageName;
- (void)loadMore;
- (void)setupHotSellSPM:(id)arg1;
- (void)hotSellItemDidFinishLoad:(id)arg1 pageIndex:(long long)arg2 hasMore:(_Bool)arg3;
- (void)hotSellLoadError;
- (unsigned long long)numberOfItemsInTangramView:(id)arg1 forLayout:(id)arg2;
- (unsigned long long)numberOfLayoutsInTangramView:(id)arg1;
- (id)itemModelInTangramView:(id)arg1 forLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)layoutInTangramView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)handleComponentClickDown:(id)arg1;
- (id)itemInTangramView:(id)arg1 withModel:(id)arg2 forLayout:(id)arg3 atIndex:(unsigned long long)arg4;
- (id)modelWithLayout:(id)arg1 index:(long long)arg2;
- (id)spmURLWithURL:(id)arg1 spmc:(id)arg2 spmd:(id)arg3;
- (void)collectButtonClicked;
- (void)categoryButtonClicked;
- (void)searchFieldClicked;
- (void)cityButtonClicked;
- (void)bindFlareForVisibleItems;
- (void)invalidFlareTimer;
- (void)timerForFlare;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)executeParallaxAnimating;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (double)loadingViewHeight;
- (void)loadHotSellGoodsWithTabIndex:(long long)arg1 isLoadDataIfNoCache:(_Bool)arg2;
- (void)updateHotSellListSubLayoutIndex:(long long)arg1;
- (void)pagingListLayoutMovingToPre;
- (void)pagingListLayoutMovingToNext;
- (void)pagingListLayoutDidPaging:(long long)arg1;
- (double)pagingListLayoutAbsY;
- (void)setupTangramView;
- (void)go2ShopCart;
- (void)setupNavibar;
- (void)floatEntryButtonClicked:(id)arg1;
- (void)backTopButtonClicked:(id)arg1;
- (id)hotSellItemsLayout;
- (void)refreshSiteInfo;
- (void)reload;
- (void)reloadForCityChange;
- (void)changeArea:(id)arg1 cityName:(id)arg2 provinceName:(id)arg3 districtName:(id)arg4;
- (void)freeDRModule;
- (void)initDRModule;
- (void)initFlare;
- (void)homeRequestFailed:(id)arg1;
- (void)homeRequestFinishedWithIsFromCache:(_Bool)arg1;
- (void)tangramRefresh;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)handleSubjectEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
