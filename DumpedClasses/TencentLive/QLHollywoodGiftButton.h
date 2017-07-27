//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLUIButton.h"

#import "QLActionDelegate.h"
#import "QLRequestModelDelegate.h"
#import "QLShareDataSource.h"

@class NSArray, NSData, NSDictionary, NSString, QLHollywoodGiftCheckModel, QLHollywoodGiftSyncModel, QLJCEMiniProgramInfo, QLMBProgressHUD, QLMovieItem, UIImage, UIView, UIViewController;

@interface QLHollywoodGiftButton : QLUIButton <QLActionDelegate, QLShareDataSource, QLRequestModelDelegate>
{
    QLHollywoodGiftCheckModel *_checkModel;
    QLHollywoodGiftSyncModel *_syncModel;
    int _localVersion;
    UIView *_tipView;
    UIView *_touchView;
    QLMBProgressHUD *_hudView;
    _Bool _hasClickOpenBtn;
    unsigned long long _actionType;
    _Bool _isPayingVocher;
    id _userInfo;
    CDUnknownBlockType _clickCompletionBlock;
    QLMovieItem *_movieItem;
}

@property(nonatomic) _Bool isPayingVocher; // @synthesize isPayingVocher=_isPayingVocher;
@property(retain, nonatomic) QLMovieItem *movieItem; // @synthesize movieItem=_movieItem;
@property(copy, nonatomic) CDUnknownBlockType clickCompletionBlock; // @synthesize clickCompletionBlock=_clickCompletionBlock;
@property(nonatomic) __weak id userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *shareExtendInfo;
@property(readonly, nonatomic) NSString *shareImageURL;
@property(readonly, nonatomic) NSString *shareFromPage;
@property(readonly, nonatomic) unsigned long long shareDataType;
@property(readonly, nonatomic) NSString *shareURL;
@property(readonly, nonatomic) NSString *shareSingleTitle;
@property(readonly, nonatomic) NSString *shareSubTitle;
@property(readonly, nonatomic) NSString *shareTitle;
@property(readonly, nonatomic) NSString *shareID;
- (unsigned long long)actionShouldSupportActionTypeMask:(id)arg1;
- (_Bool)action:(id)arg1 shouldActionByUser:(unsigned long long)arg2;
- (void)action:(id)arg1 didPressShareButton:(unsigned long long)arg2;
- (void)actionMenuDidDismissFromSuperView:(id)arg1;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)loadData:(id)arg1;
- (void)giftSync;
- (void)giftCheck;
- (id)vocherConfirmMessage;
- (_Bool)isVideoCanBePlayed;
- (void)vocherPayFail;
- (void)vocherPayFinish;
- (void)showVoucherAlert:(unsigned long long)arg1;
- (void)showShareInterface;
- (_Bool)shouldClickWhenBack;
- (void)delayClickCompletion;
- (void)delayShowLoading;
- (void)touchEnable:(_Bool)arg1;
- (void)showHUDWithTip:(_Bool)arg1 tip:(id)arg2 isProgress:(_Bool)arg3 markImg:(id)arg4;
- (void)iconTap;
- (void)btnClick;
- (void)showAlert:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool needShare;
@property(readonly, nonatomic) NSString *shareActionUrl;
@property(readonly, nonatomic) NSString *shareContent;
@property(readonly, nonatomic) NSString *shareContentTail;
@property(readonly, nonatomic) UIViewController *shareController;
@property(readonly, nonatomic) NSString *shareCopyContent;
@property(readonly, nonatomic) NSData *shareGifData;
@property(readonly, nonatomic) UIImage *shareImage;
@property(readonly, nonatomic) QLJCEMiniProgramInfo *shareMiniProgramInfo;
@property(readonly, nonatomic) NSData *shareOriImgData;
@property(readonly, nonatomic) NSArray *sharePictureList;
@property(readonly, nonatomic) unsigned long long sharePlatformMask;
@property(readonly, nonatomic) NSDictionary *shareReportInfo;
@property(readonly, nonatomic) unsigned long long shareStyle;
@property(readonly, nonatomic) QLMovieItem *shareVideoInfo;
@property(readonly) Class superclass;

@end
