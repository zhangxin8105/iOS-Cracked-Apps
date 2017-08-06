//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWUserCenterBaseViewController.h"

#import "UIActionSheetDelegate-Protocol.h"

@class NSString, UILabel;

@interface GWUCBindViewController : GWUserCenterBaseViewController <UIActionSheetDelegate>
{
    int _bindViewStyle;
    NSString *_bindContent;
    UILabel *_bindNameLabel;
    UILabel *_bindContentLabel;
    UILabel *_introductionLabel;
    UILabel *_labelOne;
    UILabel *_phoneLabel;
}

@property(retain, nonatomic) UILabel *phoneLabel; // @synthesize phoneLabel=_phoneLabel;
@property(retain, nonatomic) UILabel *labelOne; // @synthesize labelOne=_labelOne;
@property(retain, nonatomic) UILabel *introductionLabel; // @synthesize introductionLabel=_introductionLabel;
@property(retain, nonatomic) UILabel *bindContentLabel; // @synthesize bindContentLabel=_bindContentLabel;
@property(retain, nonatomic) UILabel *bindNameLabel; // @synthesize bindNameLabel=_bindNameLabel;
@property(retain, nonatomic) NSString *bindContent; // @synthesize bindContent=_bindContent;
@property(nonatomic) int bindViewStyle; // @synthesize bindViewStyle=_bindViewStyle;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)makeCallAction:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
