//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTJSONModel.h"

@class NSString;

@interface CTFioPassengerInfo : CTJSONModel
{
    int _PassengerId;
    int _Gender;
    int _Age;
    int _Type;
    NSString *_IdCardType;
    NSString *_IdCardNo;
}

@property(retain, nonatomic) NSString *IdCardNo; // @synthesize IdCardNo=_IdCardNo;
@property(retain, nonatomic) NSString *IdCardType; // @synthesize IdCardType=_IdCardType;
@property(nonatomic) int Type; // @synthesize Type=_Type;
@property(nonatomic) int Age; // @synthesize Age=_Age;
@property(nonatomic) int Gender; // @synthesize Gender=_Gender;
@property(nonatomic) int PassengerId; // @synthesize PassengerId=_PassengerId;
- (void).cxx_destruct;
- (id)init;

@end
