//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTTrainExpendRootViewController.h"

@class UIButton;

@interface CTTrainRefundDoneViewController : CTTrainExpendRootViewController
{
    UIButton *_btnGoHome;
}

@property(nonatomic) __weak UIButton *btnGoHome; // @synthesize btnGoHome=_btnGoHome;
- (void).cxx_destruct;
- (void)onGoHomeClicked:(id)arg1;
- (void)updateNavbar;
- (void)doBack;
- (void)onReturnClicked:(id)arg1;
- (void)backBarButtonClicked:(id)arg1;
- (void)initView;
- (void)viewDidLoad;

@end
