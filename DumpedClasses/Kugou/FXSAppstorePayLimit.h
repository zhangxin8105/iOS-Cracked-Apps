//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBaseJSONModel.h"

@class NSString;

@interface FXSAppstorePayLimit : FXBaseJSONModel
{
    NSString *_msg;
    long long _status;
    NSString *_ext;
    long long _kugouId;
}

@property(nonatomic) long long kugouId; // @synthesize kugouId=_kugouId;
@property(retain, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
- (void).cxx_destruct;

@end
