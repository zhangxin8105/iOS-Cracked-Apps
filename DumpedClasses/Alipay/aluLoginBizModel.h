//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "aluBaseBizModel.h"

@class NSMutableDictionary;

@interface aluLoginBizModel : aluBaseBizModel
{
    CDUnknownBlockType _callback;
    id _context;
    NSMutableDictionary *_extraInfo;
    unsigned long long _loginStyle;
}

@property(nonatomic) unsigned long long loginStyle; // @synthesize loginStyle=_loginStyle;
@property(retain, nonatomic) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)dealloc;

@end
