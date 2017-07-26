//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OHTTPListModel.h"

@class NSString;

@interface ALPPassGroupListModel : O2OHTTPListModel
{
    double _latitude;
    double _longitude;
    NSString *_cityCode;
}

@property(retain, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
- (id)responseObjects:(id)arg1;
- (_Bool)cacheResponse:(id)arg1;
- (id)cacheKey;
- (struct requestConfig)requestConfig;
- (_Bool)isPBResponse;
- (_Bool)raise1002Exception;
- (id)rpcRequest;
- (SEL)selectorNameForRPCService;
- (Class)RPCResponseClass;
- (Class)RPCServiceClass;
- (Class)RPCRequestClass;
- (id)listSeedIDWithItem:(id)arg1;
- (id)seedIdForPage;
- (id)loadCacheSynchronously;
- (id)initWithViewController:(id)arg1;

@end
