//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTTrainRootTableViewController.h"

#import "CTTrain12306CheckCodeViewControllerDelegate.h"
#import "CTTrainOrderDetailButtonCellDelegate.h"
#import "CTTrainOrderDetailMoreInfoCellDelegate.h"
#import "CTTrainOrderDetailOtherInfoCellDelegate.h"
#import "CTTrainOrderDetailQiangSpeedUpViewDelegate.h"
#import "CTTrainOrderQiangPiaoCountDownViewDelegate.h"
#import "CTTrainOrderQiangPiaoInfoViewDelegate.h"
#import "CTTrainOrderQiangPiaoZhongViewDelegate.h"
#import "CTTrainQiangPiaoOrderChangeViewControllerDelegate.h"

@class CTCustomeGroupTableViewCell, CTTrainOrderDetailCacheBean, CTTrainOrderDetailMoreInfoCell, CTTrainOrderDetailNavigationRightView, CTTrainOrderDetailOtherInfoCell, CTTrainOrderDetailQiangSpeedUpView, CTTrainTableViewSectionModel, NSMutableArray, NSString, NSTimer, UITableViewCell;

@interface CTTrainQiangPiaoOrderDetailsViewController : CTTrainRootTableViewController <CTTrainOrderDetailButtonCellDelegate, CTTrainOrderDetailOtherInfoCellDelegate, CTTrainOrderQiangPiaoCountDownViewDelegate, CTTrainOrderQiangPiaoInfoViewDelegate, CTTrain12306CheckCodeViewControllerDelegate, CTTrainOrderQiangPiaoZhongViewDelegate, CTTrainQiangPiaoOrderChangeViewControllerDelegate, CTTrainOrderDetailMoreInfoCellDelegate, CTTrainOrderDetailQiangSpeedUpViewDelegate>
{
    _Bool _showRemindButton;
    _Bool _isRequestingScheduleInfo;
    _Bool _shouldStopScheduling;
    _Bool _hasSubmitCheckCode;
    int _vcType;
    id <CTTrainQiangPiaoOrderDetailsViewControllerDelegate> _delegate;
    CTTrainOrderDetailCacheBean *_shadowCacheBean;
    CTTrainTableViewSectionModel *_qiangpiaoStatusSectionModel;
    CTTrainTableViewSectionModel *_qiangpiaoInfoSectionModel;
    CTTrainTableViewSectionModel *_cancelSectionModel;
    CTTrainTableViewSectionModel *_changeQiangPiaoTaskSectionModel;
    CTTrainTableViewSectionModel *_otherInfoSectionModel;
    CTTrainTableViewSectionModel *_otherQuestionSectionModel;
    CTTrainTableViewSectionModel *_bottomTipsSectionModel;
    CTTrainTableViewSectionModel *_hotQuestionTitleSectionModel;
    CTTrainTableViewSectionModel *_hotQuestionSectionModel;
    CTTrainTableViewSectionModel *_moreInfoSectionModel;
    CTTrainOrderDetailOtherInfoCell *_otherInfoCell;
    CTCustomeGroupTableViewCell *_hotQuestionCell;
    CTTrainOrderDetailMoreInfoCell *_moreInfoCell;
    NSTimer *_timer;
    UITableViewCell *_statusCellNotStart;
    UITableViewCell *_statusCellSoon;
    UITableViewCell *_statusCellCommon;
    NSMutableArray *_arrayQiangPiaoSoon;
    CTTrainOrderDetailQiangSpeedUpView *_speedUpView;
    CTTrainOrderDetailNavigationRightView *_navRightView;
}

@property(retain, nonatomic) CTTrainOrderDetailNavigationRightView *navRightView; // @synthesize navRightView=_navRightView;
@property(retain, nonatomic) CTTrainOrderDetailQiangSpeedUpView *speedUpView; // @synthesize speedUpView=_speedUpView;
@property(nonatomic) _Bool hasSubmitCheckCode; // @synthesize hasSubmitCheckCode=_hasSubmitCheckCode;
@property(nonatomic) _Bool shouldStopScheduling; // @synthesize shouldStopScheduling=_shouldStopScheduling;
@property(nonatomic) _Bool isRequestingScheduleInfo; // @synthesize isRequestingScheduleInfo=_isRequestingScheduleInfo;
@property(retain, nonatomic) NSMutableArray *arrayQiangPiaoSoon; // @synthesize arrayQiangPiaoSoon=_arrayQiangPiaoSoon;
@property(nonatomic) _Bool showRemindButton; // @synthesize showRemindButton=_showRemindButton;
@property(retain, nonatomic) UITableViewCell *statusCellCommon; // @synthesize statusCellCommon=_statusCellCommon;
@property(retain, nonatomic) UITableViewCell *statusCellSoon; // @synthesize statusCellSoon=_statusCellSoon;
@property(retain, nonatomic) UITableViewCell *statusCellNotStart; // @synthesize statusCellNotStart=_statusCellNotStart;
@property(nonatomic) int vcType; // @synthesize vcType=_vcType;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) CTTrainOrderDetailMoreInfoCell *moreInfoCell; // @synthesize moreInfoCell=_moreInfoCell;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *hotQuestionCell; // @synthesize hotQuestionCell=_hotQuestionCell;
@property(retain, nonatomic) CTTrainOrderDetailOtherInfoCell *otherInfoCell; // @synthesize otherInfoCell=_otherInfoCell;
@property(retain, nonatomic) CTTrainTableViewSectionModel *moreInfoSectionModel; // @synthesize moreInfoSectionModel=_moreInfoSectionModel;
@property(retain, nonatomic) CTTrainTableViewSectionModel *hotQuestionSectionModel; // @synthesize hotQuestionSectionModel=_hotQuestionSectionModel;
@property(retain, nonatomic) CTTrainTableViewSectionModel *hotQuestionTitleSectionModel; // @synthesize hotQuestionTitleSectionModel=_hotQuestionTitleSectionModel;
@property(retain, nonatomic) CTTrainTableViewSectionModel *bottomTipsSectionModel; // @synthesize bottomTipsSectionModel=_bottomTipsSectionModel;
@property(retain, nonatomic) CTTrainTableViewSectionModel *otherQuestionSectionModel; // @synthesize otherQuestionSectionModel=_otherQuestionSectionModel;
@property(retain, nonatomic) CTTrainTableViewSectionModel *otherInfoSectionModel; // @synthesize otherInfoSectionModel=_otherInfoSectionModel;
@property(retain, nonatomic) CTTrainTableViewSectionModel *changeQiangPiaoTaskSectionModel; // @synthesize changeQiangPiaoTaskSectionModel=_changeQiangPiaoTaskSectionModel;
@property(retain, nonatomic) CTTrainTableViewSectionModel *cancelSectionModel; // @synthesize cancelSectionModel=_cancelSectionModel;
@property(retain, nonatomic) CTTrainTableViewSectionModel *qiangpiaoInfoSectionModel; // @synthesize qiangpiaoInfoSectionModel=_qiangpiaoInfoSectionModel;
@property(retain, nonatomic) CTTrainTableViewSectionModel *qiangpiaoStatusSectionModel; // @synthesize qiangpiaoStatusSectionModel=_qiangpiaoStatusSectionModel;
@property(retain, nonatomic, setter=setShadowCacheBean:) CTTrainOrderDetailCacheBean *shadowCacheBean; // @synthesize shadowCacheBean=_shadowCacheBean;
@property(nonatomic) __weak id <CTTrainQiangPiaoOrderDetailsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)speedUpViewTapped:(id)arg1;
- (void)moreInfoCell:(id)arg1 didTappedItem:(id)arg2;
- (void)succeedToChangeTheQiangPiaoOrderInTrainQiangPiaoOrderChangeViewController:(id)arg1;
- (void)didPressCancelButtonInTrain12306CheckCodeViewController:(id)arg1;
- (void)train12306CheckCodeViewController:(id)arg1 didPressConfirmButtonWithCheckCode:(id)arg2;
- (void)didPressSeatsItemInTrainOrderQiangPiaoInfoView:(id)arg1;
- (void)didPressCheciItemInTrainOrderQiangPiaoInfoView:(id)arg1;
- (void)didPressTipsViewInTrainOrderQiangPiaoZhongView:(id)arg1;
- (void)didPressOnMoreDetailButtonInTrainOrderQiangPiaoCountDownView:(id)arg1;
- (void)didPressOnAddAlertButtonInTrainOrderQiangPiaoCountDownView:(id)arg1;
- (void)otherInfoCell:(id)arg1 didSelectAppendInfoModel:(id)arg2;
- (void)otherInfoCell:(id)arg1 didShowAll:(_Bool)arg2;
- (void)orderDetailButtonCell:(id)arg1 didTappedWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)changeQiangPiaoTaskCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)cancelQiangpiaoCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)qiangpiaoInfoCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)qiangpiaoStatusCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)otherInfoCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)helpInfoCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)orderDetailButtonCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)otherQuestionRowModelWithIndexPath:(id)arg1 title:(id)arg2;
- (id)helpInfoRowModelWithIndePath:(id)arg1 helpInfoModel:(id)arg2;
- (id)hotQuestionTitleRowModelWithIndexPath:(id)arg1;
- (id)otherInfoRowModelWithIndexPath:(id)arg1;
- (id)changeQiangPiaoTaskRowModelWithIndexPath:(id)arg1;
- (id)cancelRowModelWithIndexPath:(id)arg1;
- (id)moreInfoRowModelWithIndexPath:(id)arg1;
- (id)qiangpiaoInfoRowModelWithIndexPath:(id)arg1;
- (id)qiangpiaoStatusRowModelWithIndexPath:(id)arg1;
- (id)otherQuestionSectionModelWithSection:(long long)arg1;
- (id)hotQuestionSectionModelWithSection:(long long)arg1;
- (id)hotQuestionTitleSectionModelWithSection:(long long)arg1;
- (id)otherInfoSectionModelWithSection:(long long)arg1;
- (id)bottomTipsSectionModelWithSection:(long long)arg1;
- (id)changeQiangPiaoTaskSectionModelWithSection:(long long)arg1;
- (id)cancelSectionModelWithSection:(long long)arg1;
- (id)moreInfoSectionModelWithSection:(long long)arg1;
- (id)qiangpiaoInfoSectionModelWithSection:(long long)arg1;
- (id)qiangpiaoStatusSectionModelWithSection:(long long)arg1;
- (struct UIEdgeInsets)mainTableViewEdgeInsets;
- (void)buildTableDataSource;
- (void)backBarButtonClicked:(id)arg1;
- (void)scheduleInfo;
- (void)changeAcceptInfo;
- (void)handleTimer:(id)arg1;
- (void)closeTimer;
- (void)openTimer;
- (void)changeQiangPiaoDetailInfo;
- (void)handleScheduleInfoCallBack;
- (void)updateList;
- (void)onFreshButton;
- (void)consult;
- (void)gotoKeFuZiXun:(id)arg1;
- (void)checkReminder;
- (void)backDoorAction:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)addFreeQiang;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)appBecomeActive;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
