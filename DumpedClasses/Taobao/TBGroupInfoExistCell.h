//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel, UIView;

@interface TBGroupInfoExistCell : UITableViewCell
{
    UILabel *_existLabel;
    UIView *_existLabelBc;
}

+ (double)heightForCell;
@property(retain, nonatomic) UIView *existLabelBc; // @synthesize existLabelBc=_existLabelBc;
@property(retain, nonatomic) UILabel *existLabel; // @synthesize existLabel=_existLabel;
- (void).cxx_destruct;
- (void)setContent:(id)arg1;
- (void)initLabel;
- (void)initStyle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
