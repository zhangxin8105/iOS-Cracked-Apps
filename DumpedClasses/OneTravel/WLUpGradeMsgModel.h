//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray<Optional>, NSNumber<Optional>, NSString<Optional>;

@interface WLUpGradeMsgModel : JSONModel
{
    NSString<Optional> *_title;
    NSString<Optional> *_subtitle;
    NSArray<Optional> *_documentation;
    NSString<Optional> *_button;
    NSNumber<Optional> *_type;
}

+ (id)forTestModel;
@property(copy, nonatomic) NSNumber<Optional> *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString<Optional> *button; // @synthesize button=_button;
@property(copy, nonatomic) NSArray<Optional> *documentation; // @synthesize documentation=_documentation;
@property(copy, nonatomic) NSString<Optional> *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
