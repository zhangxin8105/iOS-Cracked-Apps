//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BestpayMJMember.h"

@class BestpayMJType, NSString;

@interface BestpayMJIvar : BestpayMJMember
{
    struct objc_ivar *_ivar;
    NSString *_propertyName;
    BestpayMJType *_type;
}

@property(readonly, nonatomic) BestpayMJType *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property(nonatomic) struct objc_ivar *ivar; // @synthesize ivar=_ivar;
- (void).cxx_destruct;
@property(retain, nonatomic) id value;
- (id)initWithIvar:(struct objc_ivar *)arg1 srcObject:(id)arg2;

@end
