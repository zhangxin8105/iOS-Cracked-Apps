//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SslCertResult : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(retain, nonatomic) NSMutableArray *certificatesArray; // @dynamic certificatesArray;
@property(readonly, nonatomic) unsigned long long certificatesArray_Count; // @dynamic certificatesArray_Count;
@property(nonatomic) _Bool hasHostCert; // @dynamic hasHostCert;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(copy, nonatomic) NSString *hostCert; // @dynamic hostCert;

@end

