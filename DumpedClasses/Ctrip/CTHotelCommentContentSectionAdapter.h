//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelSectionAdapter.h"

@class CTHotelCommentsSubmitCacheBean, CTHotelRequestUtil, NSArray;

@interface CTHotelCommentContentSectionAdapter : CTHotelSectionAdapter
{
    CTHotelCommentsSubmitCacheBean *_mCacheBean;
    CTHotelRequestUtil *_contentKeywordUtil;
    NSArray *_commentHintWordsArray;
}

@property(retain, nonatomic) NSArray *commentHintWordsArray; // @synthesize commentHintWordsArray=_commentHintWordsArray;
@property(retain, nonatomic) CTHotelRequestUtil *contentKeywordUtil; // @synthesize contentKeywordUtil=_contentKeywordUtil;
@property(nonatomic) __weak CTHotelCommentsSubmitCacheBean *mCacheBean; // @synthesize mCacheBean=_mCacheBean;
- (void).cxx_destruct;
- (double)getCellHeight:(id)arg1;
- (id)inputCell;
- (id)getCellView:(id)arg1;
- (unsigned long long)getCellCount;

@end
