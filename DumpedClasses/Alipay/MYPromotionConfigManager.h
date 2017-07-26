//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MYPromotionConfigManager : NSObject
{
    id <MYPromotionConfigProvider> _provider;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <MYPromotionConfigProvider> provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (long long)checkConfigModel:(id)arg1;
- (void)classifyConfigs:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (id)promotionModelsForUri:(id)arg1;
- (id)promotionConfigs;
- (id)init;

@end
