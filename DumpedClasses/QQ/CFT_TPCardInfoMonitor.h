//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseSingleton.h"

@class NSMutableArray;

@interface CFT_TPCardInfoMonitor : BaseSingleton
{
    NSMutableArray *_observers;
}

@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
- (void)dealloc;
- (void)onCardInfoChanged:(id)arg1;
- (void)checkChanged;
- (void)setChanged:(_Bool)arg1 forTag:(int)arg2;
- (_Bool)changedForTag:(int)arg1;
- (void)stopWithTarget:(id)arg1;
- (void)stopWithTag:(int)arg1;
- (void)startWithTag:(int)arg1 target:(id)arg2 callback:(SEL)arg3 persist:(_Bool)arg4;
- (id)init;

@end
