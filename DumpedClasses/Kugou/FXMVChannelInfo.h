//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FXMVChannelInfo : NSObject
{
    long long _channelId;
    NSString *_img;
    NSString *_name;
}

+ (id)initWithMVEntity:(id)arg1;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(nonatomic) long long channelId; // @synthesize channelId=_channelId;
- (void).cxx_destruct;

@end

