//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSString;

@protocol MCRecommendModelDelegate <NSObject>
- (void)recommendModel:(id <MCRecommendModelProtocol>)arg1 uniqueId:(NSString *)arg2 subcribeResult:(_Bool)arg3 error:(NSError *)arg4;
- (void)recommendModel:(id <MCRecommendModelProtocol>)arg1 recommendData:(NSArray *)arg2;
@end
