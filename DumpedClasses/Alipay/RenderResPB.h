//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface RenderResPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(readonly) _Bool hasQueryOrNo; // @dynamic hasQueryOrNo;
@property(readonly) _Bool hasResultCode; // @dynamic hasResultCode;
@property(readonly) _Bool hasResultDes; // @dynamic hasResultDes;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(readonly) _Bool hasTradeNo; // @dynamic hasTradeNo;
@property(nonatomic) _Bool queryOrNo; // @dynamic queryOrNo;
@property(retain, nonatomic) NSArray *renderDataList; // @dynamic renderDataList;
@property(retain, nonatomic) NSString *resultCode; // @dynamic resultCode;
@property(retain, nonatomic) NSString *resultDes; // @dynamic resultDes;
@property(nonatomic) _Bool success; // @dynamic success;
@property(retain, nonatomic) NSString *tradeNo; // @dynamic tradeNo;

@end
