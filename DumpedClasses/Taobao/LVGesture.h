//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

#import "LVClassProtocal.h"
#import "UIGestureRecognizerDelegate.h"

@class LuaViewCore, NSString;

@interface LVGesture : UIGestureRecognizer <LVClassProtocal, UIGestureRecognizerDelegate>
{
    LuaViewCore *_lv_luaviewCore;
    struct _LVUserDataInfo *_lv_userData;
    CDUnknownBlockType _onTouchEventCallback;
}

+ (int)lvClassDefine:(struct lua_State *)arg1 globalName:(id)arg2;
+ (void)releaseUD:(struct _LVUserDataInfo *)arg1;
+ (const struct luaL_Reg *)baseMemberFunctions;
@property(copy, nonatomic) CDUnknownBlockType onTouchEventCallback; // @synthesize onTouchEventCallback=_onTouchEventCallback;
@property(nonatomic) struct _LVUserDataInfo *lv_userData; // @synthesize lv_userData=_lv_userData;
@property(nonatomic) __weak LuaViewCore *lv_luaviewCore; // @synthesize lv_luaviewCore=_lv_luaviewCore;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)handleGesture:(id)arg1 event:(id)arg2 eventType:(long long)arg3;
- (void)handleGesture:(id)arg1;
- (id)init:(struct lua_State *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
