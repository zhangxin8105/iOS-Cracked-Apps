//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTDashLineView, CTFlightRadioView, UIImageView, UILabel;

@interface CTFlightInlandOrdrTitleCell : UITableViewCell
{
    UILabel *_orderGoTitle;
    UILabel *_orderGoInfoLabel;
    UILabel *_orderReturnTitle;
    UILabel *_orderReturnInfoLabel;
    UIImageView *_orderSwitchImage;
    CTFlightRadioView *_flightBgView;
    CTDashLineView *_dashLine;
}

+ (double)setupOrderDetailCell:(id)arg1 withModel:(id)arg2 withModel:(id)arg3 forSectionType:(int)arg4 needAdaptRatio:(_Bool)arg5;
@property(retain, nonatomic) CTDashLineView *dashLine; // @synthesize dashLine=_dashLine;
@property(retain, nonatomic) CTFlightRadioView *flightBgView; // @synthesize flightBgView=_flightBgView;
@property(retain, nonatomic) UIImageView *orderSwitchImage; // @synthesize orderSwitchImage=_orderSwitchImage;
@property(retain, nonatomic) UILabel *orderReturnInfoLabel; // @synthesize orderReturnInfoLabel=_orderReturnInfoLabel;
@property(retain, nonatomic) UILabel *orderReturnTitle; // @synthesize orderReturnTitle=_orderReturnTitle;
@property(retain, nonatomic) UILabel *orderGoInfoLabel; // @synthesize orderGoInfoLabel=_orderGoInfoLabel;
@property(retain, nonatomic) UILabel *orderGoTitle; // @synthesize orderGoTitle=_orderGoTitle;
- (void).cxx_destruct;
- (id)getStrWith:(id)arg1;
- (id)getAirportTerminal:(id)arg1 terminal:(id)arg2;
- (id)getFlgihtSegmentInfoWith:(id)arg1;
- (void)setviewHideWith:(id)arg1 hide:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
