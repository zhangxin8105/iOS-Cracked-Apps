//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFPreloadable.h"

@class DTRpcAsyncCaller, NSMutableArray;

@interface TFCardPreload : TFPreloadable
{
    DTRpcAsyncCaller *_queryCardListCaller;
    DTRpcAsyncCaller *_deleteCardCaller;
    _Bool _syncing;
    id <TFCardPreLoadDelegate> _delegate;
    NSMutableArray *_cards;
    NSMutableArray *_dexCards;
}

@property(retain, nonatomic) NSMutableArray *dexCards; // @synthesize dexCards=_dexCards;
@property(retain, nonatomic) NSMutableArray *cards; // @synthesize cards=_cards;
@property(nonatomic) __weak id <TFCardPreLoadDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)doFinishedOnMainThread;
- (void)cancel;
- (void)cardListThread:(id)arg1;
- (void)updateWithDelegate:(id)arg1;
- (void)resetCards;
- (id)init;
- (void)dealloc;

@end
