//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel, WPShowOrderModel;
@protocol WPShowOrderDetailnfoCellDelegate;

@interface WPShowOrderDetailnfoCell : UITableViewCell
{
    id <WPShowOrderDetailnfoCellDelegate> _delegate;
    WPShowOrderModel *_orderModel;
    UIImageView *_ticketImage;
    UILabel *_titleLable;
    UILabel *_addressLable;
    UILabel *_timesLabel;
    UILabel *_numberLable;
    UILabel *_seatLabel;
    UILabel *_leftSeatLabel;
    UILabel *_tipLabel;
    UIButton *_tipShowButton;
    UIImageView *_arrowImageView;
}

@property(nonatomic) __weak UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) __weak UIButton *tipShowButton; // @synthesize tipShowButton=_tipShowButton;
@property(nonatomic) __weak UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) __weak UILabel *leftSeatLabel; // @synthesize leftSeatLabel=_leftSeatLabel;
@property(nonatomic) __weak UILabel *seatLabel; // @synthesize seatLabel=_seatLabel;
@property(nonatomic) __weak UILabel *numberLable; // @synthesize numberLable=_numberLable;
@property(nonatomic) __weak UILabel *timesLabel; // @synthesize timesLabel=_timesLabel;
@property(nonatomic) __weak UILabel *addressLable; // @synthesize addressLable=_addressLable;
@property(nonatomic) __weak UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(nonatomic) __weak UIImageView *ticketImage; // @synthesize ticketImage=_ticketImage;
@property(retain, nonatomic) WPShowOrderModel *orderModel; // @synthesize orderModel=_orderModel;
@property(nonatomic) __weak id <WPShowOrderDetailnfoCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)tipsShowButtonPress:(id)arg1;
- (void)prepareForReuse;
- (void)awakeFromNib;

@end
