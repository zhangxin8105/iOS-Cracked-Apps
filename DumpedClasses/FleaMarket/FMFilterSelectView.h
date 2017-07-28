//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class FMFilterSelectCell, FMRTCPageControl, NSArray, NSString, UIScrollView;

@interface FMFilterSelectView : UIView <UIScrollViewDelegate>
{
    UIScrollView *_filterScrollView;
    FMRTCPageControl *_pageController;
    FMFilterSelectCell *_preLabel;
    FMFilterSelectCell *_currLabel;
    FMFilterSelectCell *_nextLabel;
    id <FMFilterSelectViewDelegate> _delegate;
    long long _currFilter;
    NSArray *_usedFilters;
}

@property(retain, nonatomic) NSArray *usedFilters; // @synthesize usedFilters=_usedFilters;
@property(nonatomic) long long currFilter; // @synthesize currFilter=_currFilter;
@property(nonatomic) id <FMFilterSelectViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateFilterLabel;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)showFilterSelectView;
- (void)hiddenFilterSlectView;
- (void)initFilterCell;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
