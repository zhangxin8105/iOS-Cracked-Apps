//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (WXSliderNeighborView)
- (double)sliderNeighbor:(id)arg1 valueForOption:(long long)arg2 withDefault:(double)arg3;
- (struct CATransform3D)sliderNeighbor:(id)arg1 itemTransformForOffset:(double)arg2 baseTransform:(struct CATransform3D)arg3;
- (double)sliderNeighborItemWidth:(id)arg1;
- (void)sliderNeighbor:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (_Bool)sliderNeighbor:(id)arg1 shouldSelectItemAtIndex:(long long)arg2;
- (void)sliderNeighborDidEndDecelerating:(id)arg1;
- (void)sliderNeighborWillBeginDecelerating:(id)arg1;
- (void)sliderNeighborDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)sliderNeighborWillBeginDragging:(id)arg1;
- (void)sliderNeighborCurrentItemIndexDidChange:(id)arg1;
- (void)sliderNeighborDidScroll:(id)arg1;
- (void)sliderNeighborDidEndScrollingAnimation:(id)arg1;
- (void)sliderNeighborWillBeginScrollingAnimation:(id)arg1;
- (unsigned long long)numberOfPlaceholdersInSliderNeighborView:(id)arg1;
@end
