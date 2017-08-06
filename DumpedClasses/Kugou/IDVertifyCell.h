//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class KGThemeButton, KGThemeLabel, KGThemeLine, UIImageView;

@interface IDVertifyCell : UITableViewCell
{
    UIImageView *_imgV;
    KGThemeLabel *_label;
    KGThemeButton *_btn;
    KGThemeLabel *_updateLabel;
    KGThemeLine *_bottonLine;
    double _marginForBottonLine;
}

@property(nonatomic) double marginForBottonLine; // @synthesize marginForBottonLine=_marginForBottonLine;
@property(retain, nonatomic) KGThemeLine *bottonLine; // @synthesize bottonLine=_bottonLine;
@property(retain, nonatomic) KGThemeLabel *updateLabel; // @synthesize updateLabel=_updateLabel;
@property(retain, nonatomic) KGThemeButton *btn; // @synthesize btn=_btn;
@property(retain, nonatomic) KGThemeLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *imgV; // @synthesize imgV=_imgV;
- (void).cxx_destruct;
- (void)initSelectView;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;

@end
