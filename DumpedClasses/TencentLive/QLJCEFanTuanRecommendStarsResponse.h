//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface QLJCEFanTuanRecommendStarsResponse : JceObjectV2
{
    _Bool jcev2_p_3_o_isHaveNextPage;
    int jcev2_p_0_r_errCode;
    NSArray *jcev2_p_1_o_starGroupList__b0x9i_VOQLJCEFantuanRecommendStarsGroup;
    NSString *jcev2_p_2_o_pageContext;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_isHaveNextPage, setter=setJce_isHaveNextPage:) _Bool jcev2_p_3_o_isHaveNextPage; // @synthesize jcev2_p_3_o_isHaveNextPage;
@property(retain, nonatomic, getter=jce_pageContext, setter=setJce_pageContext:) NSString *jcev2_p_2_o_pageContext; // @synthesize jcev2_p_2_o_pageContext;
@property(retain, nonatomic, getter=jce_starGroupList, setter=setJce_starGroupList:) NSArray *jcev2_p_1_o_starGroupList__b0x9i_VOQLJCEFantuanRecommendStarsGroup; // @synthesize jcev2_p_1_o_starGroupList__b0x9i_VOQLJCEFantuanRecommendStarsGroup;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end
