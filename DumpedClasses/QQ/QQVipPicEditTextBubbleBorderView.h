//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface QQVipPicEditTextBubbleBorderView : UIView
{
    UIButton *_deleteButton;
    UIButton *_transFormButton;
    _Bool _isInRotation;
    id <BubbleOperationDelegate> _operationDelegate;
    double _originalCanvasScale;
    double _currentCanvasScale;
}

@property(nonatomic) double currentCanvasScale; // @synthesize currentCanvasScale=_currentCanvasScale;
@property(nonatomic) double originalCanvasScale; // @synthesize originalCanvasScale=_originalCanvasScale;
@property(nonatomic) __weak id <BubbleOperationDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (void).cxx_destruct;
- (double)distanceFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (double)angleFromSideA:(double)arg1 sideB:(double)arg2 sideC:(double)arg3;
- (_Bool)isClockWise:(struct CGPoint)arg1 to:(struct CGPoint)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)handleTapOnDeleteButton:(id)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)initializeUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 canvasScale:(double)arg2;

@end
