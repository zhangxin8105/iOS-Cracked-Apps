//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface TBIMMobileContactRestrictedView : UIView
{
    UIButton *_settingButton;
    CDUnknownBlockType _tapSettingButtonBlock;
}

@property(copy, nonatomic) CDUnknownBlockType tapSettingButtonBlock; // @synthesize tapSettingButtonBlock=_tapSettingButtonBlock;
@property(retain, nonatomic) UIButton *settingButton; // @synthesize settingButton=_settingButton;
- (void).cxx_destruct;
- (void)tapSettingButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 contentOffsetY:(long long)arg2 tapSettingButtonBlock:(CDUnknownBlockType)arg3;

@end
