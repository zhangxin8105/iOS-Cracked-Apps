//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface XYAZPayload : NSObject
{
    NSMutableDictionary *_payload;
}

- (void).cxx_destruct;
- (id)description;
- (id)getAsDictionary;
- (void)addDictionaryToPayload:(id)arg1 base64Encoded:(unsigned char)arg2 typeWhenEncoded:(id)arg3 typeWhenNotEncoded:(id)arg4;
- (void)addJsonStringToPayload:(id)arg1 base64Encoded:(unsigned char)arg2 typeWhenEncoded:(id)arg3 typeWhenNotEncoded:(id)arg4;
- (void)addJsonToPayload:(id)arg1 base64Encoded:(unsigned char)arg2 typeWhenEncoded:(id)arg3 typeWhenNotEncoded:(id)arg4;
- (void)addDictionaryToPayload:(id)arg1;
- (void)addValueToPayload:(id)arg1 forKey:(id)arg2;
- (id)initWithNSDictionary:(id)arg1;
- (id)init;

@end
