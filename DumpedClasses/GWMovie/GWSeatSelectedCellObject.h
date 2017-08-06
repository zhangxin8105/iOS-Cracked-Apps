//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWSelectedPriceCellObject.h"

@class NSString, UIImage;

@interface GWSeatSelectedCellObject : GWSelectedPriceCellObject
{
    NSString *_seatID;
    UIImage *_iconSeatImage;
    NSString *_areaName;
    NSString *_seatSite;
    NSString *_price;
    long long _rowIndex;
    long long _colIndex;
    NSString *_remark;
}

@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(nonatomic) long long colIndex; // @synthesize colIndex=_colIndex;
@property(nonatomic) long long rowIndex; // @synthesize rowIndex=_rowIndex;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *seatSite; // @synthesize seatSite=_seatSite;
@property(copy, nonatomic) NSString *areaName; // @synthesize areaName=_areaName;
@property(retain, nonatomic) UIImage *iconSeatImage; // @synthesize iconSeatImage=_iconSeatImage;
@property(copy, nonatomic) NSString *seatID; // @synthesize seatID=_seatID;
- (void).cxx_destruct;

@end
