//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CUBaseModel.h"

@class CUSubedProductsModel, NSString;

@interface CUProductModel : CUBaseModel
{
    NSString *_callNumber;
    NSString *_simno;
    CUSubedProductsModel *_subedProducts;
}

@property(retain, nonatomic) CUSubedProductsModel *subedProducts; // @synthesize subedProducts=_subedProducts;
@property(copy, nonatomic) NSString *simno; // @synthesize simno=_simno;
@property(copy, nonatomic) NSString *callNumber; // @synthesize callNumber=_callNumber;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end
