//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class PriceType, UIButton, UIImageView, UILabel;

@interface CTTrainOrderDetaioRefundInfoCell : UITableViewCell
{
    PriceType *_refundMoney;
    CDUnknownBlockType _showRefundBlock;
    UILabel *_refundLabel;
    UIButton *_refundProgressButton;
    UIImageView *_backgroundImageView;
}

@property(nonatomic) __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak UIButton *refundProgressButton; // @synthesize refundProgressButton=_refundProgressButton;
@property(nonatomic) __weak UILabel *refundLabel; // @synthesize refundLabel=_refundLabel;
@property(copy, nonatomic) CDUnknownBlockType showRefundBlock; // @synthesize showRefundBlock=_showRefundBlock;
@property(retain, nonatomic) PriceType *refundMoney; // @synthesize refundMoney=_refundMoney;
- (void).cxx_destruct;
- (void)lookAtAction:(id)arg1;
- (void)awakeFromNib;

@end
