//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TaxiFullScreenWebViewController.h"

@class NSString, TaxiPriceInfoModel;

@interface TaxiPriceInfoWebViewController : TaxiFullScreenWebViewController
{
    _Bool _isUserChoose;
    _Bool _isNeedDynamic;
    CDUnknownBlockType _priceInfoBlock;
    long long _price;
    TaxiPriceInfoModel *_model;
    NSString *_city;
    NSString *_orderId;
    long long _webType;
}

@property(readonly, nonatomic) long long webType; // @synthesize webType=_webType;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(readonly, nonatomic) _Bool isNeedDynamic; // @synthesize isNeedDynamic=_isNeedDynamic;
@property(readonly, nonatomic) _Bool isUserChoose; // @synthesize isUserChoose=_isUserChoose;
@property(readonly, nonatomic) TaxiPriceInfoModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) long long price; // @synthesize price=_price;
@property(copy, nonatomic) CDUnknownBlockType priceInfoBlock; // @synthesize priceInfoBlock=_priceInfoBlock;
- (void).cxx_destruct;
- (void)initWebViewHelper;
- (id)additionalUrl;
- (id)initWithUrl:(id)arg1 orderId:(id)arg2;
- (id)initWithUrl:(id)arg1 price:(long long)arg2 model:(id)arg3 isUserChoose:(_Bool)arg4 type:(long long)arg5 isNeedDynamic:(_Bool)arg6 city:(id)arg7;

@end
