//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTHotelZoneInfoModel : NSObject
{
    int _zoneInforId;
    NSString *_remark;
    NSString *_dataValue;
}

@property(copy, nonatomic) NSString *dataValue; // @synthesize dataValue=_dataValue;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(nonatomic) int zoneInforId; // @synthesize zoneInforId=_zoneInforId;
- (void).cxx_destruct;
- (id)init;

@end
