//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIControl, UIScrollView, UIView;

@protocol TBPageControlViewDelegate <NSObject>
- (UIControl *)TBPageControlView:(UIView *)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfSectionsInPageControlView:(UIView *)arg1;

@optional
- (void)TBPageControlView:(UIView *)arg1 refreshPage:(int)arg2;
- (void)TBPageControlView:(UIView *)arg1 scrollViewDidScroll:(UIScrollView *)arg2 withScollViewPage:(unsigned long long)arg3;
- (void)TBPageControlView:(UIView *)arg1 didShowViewAtIndex:(unsigned long long)arg2;
- (void)TBPageControlView:(UIView *)arg1 willShowViewAtIndex:(unsigned long long)arg2;
@end
