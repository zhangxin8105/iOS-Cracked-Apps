//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface FMNPSellAddItemHeader : UIView
{
    NSString *serviceType;
    UIView *_fmContentView;
    UIImageView *_imgAdd;
    UILabel *_textTitle;
}

@property(retain, nonatomic) UILabel *textTitle; // @synthesize textTitle=_textTitle;
@property(retain, nonatomic) UIImageView *imgAdd; // @synthesize imgAdd=_imgAdd;
@property(retain, nonatomic) UIView *fmContentView; // @synthesize fmContentView=_fmContentView;
- (void).cxx_destruct;
- (void)setupConstranits;
- (void)didTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withType:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
