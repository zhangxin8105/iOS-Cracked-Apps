//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTTPAsyncFileResponse.h"

@class NSData, NSDictionary;

@interface HTTPDynamicFileResponse : HTTPAsyncFileResponse
{
    NSData *separator;
    NSDictionary *replacementDict;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)processReadBuffer;
- (_Bool)isDone;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)contentLength;
- (_Bool)isChunked;
- (id)initWithFilePath:(id)arg1 forConnection:(id)arg2 separator:(id)arg3 replacementDictionary:(id)arg4;

@end

