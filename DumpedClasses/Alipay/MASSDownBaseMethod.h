//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MASSMethod.h"

@class NSData, NSString;

@interface MASSDownBaseMethod : MASSMethod
{
    long long _downReturnType;
    NSString *_saveFilePath;
    NSData *_mmdpBizParam;
}

@property(retain, nonatomic) NSData *mmdpBizParam; // @synthesize mmdpBizParam=_mmdpBizParam;
@property(retain, nonatomic) NSString *saveFilePath; // @synthesize saveFilePath=_saveFilePath;
@property(nonatomic) long long downReturnType; // @synthesize downReturnType=_downReturnType;
- (void).cxx_destruct;

@end
