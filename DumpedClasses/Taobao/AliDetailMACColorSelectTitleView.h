//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AliDetailMACColorSelectTitleButton, UILabel;

@interface AliDetailMACColorSelectTitleView : UIView
{
    CDUnknownBlockType _backBlock;
    UILabel *_backLabel;
    UIView *_backBtn;
    AliDetailMACColorSelectTitleButton *_titleButton;
}

@property(retain, nonatomic) AliDetailMACColorSelectTitleButton *titleButton; // @synthesize titleButton=_titleButton;
@property(retain, nonatomic) UIView *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) UILabel *backLabel; // @synthesize backLabel=_backLabel;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
- (void).cxx_destruct;
- (void)backHit;
- (void)buttonAction;
- (void)layoutSubviews;
- (void)arrowAnimation:(_Bool)arg1;
- (void)setTitleText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
