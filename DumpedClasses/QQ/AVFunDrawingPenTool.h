//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBezierPath.h"

#import "AVFunDrawingTool.h"

@class NSString, UIColor;

@interface AVFunDrawingPenTool : UIBezierPath <AVFunDrawingTool>
{
    struct CGPath *path;
    struct CGPath *Apath;
    struct CGPoint *pathPoints;
    double *pathArray;
    int pathlen;
    UIColor *_lineColor;
    double _lineAlpha;
    NSString *_color;
    double _maxLen;
    double _lastLen;
    struct CGPoint _p2point;
    struct CGPoint _p1point;
    struct CGPoint _cpoint;
}

@property(nonatomic) struct CGPoint cpoint; // @synthesize cpoint=_cpoint;
@property(nonatomic) struct CGPoint p1point; // @synthesize p1point=_p1point;
@property(nonatomic) struct CGPoint p2point; // @synthesize p2point=_p2point;
@property(nonatomic) double lastLen; // @synthesize lastLen=_lastLen;
@property(nonatomic) double maxLen; // @synthesize maxLen=_maxLen;
@property(copy, nonatomic) NSString *color; // @synthesize color=_color;
@property(nonatomic) double lineAlpha; // @synthesize lineAlpha=_lineAlpha;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
- (void)dealloc;
- (void)curveFactorization:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 controlPoint:(struct CGPoint)arg3 count:(int)arg4;
- (double)bezMaker:(int)arg1 k:(int)arg2 t:(double)arg3;
- (double)realPow:(double)arg1 k:(int)arg2;
- (double)comp:(int)arg1 k:(int)arg2;
- (int)getPathLen;
- (int)ave:(int)arg1 d:(int)arg2 p:(float)arg3;
- (id)interpColor:(id)arg1 color:(id)arg2 uint:(double)arg3;
- (void)drawWithHalo;
- (void)draw;
- (void)addPathPoint:(struct CGPoint)arg1 withPreviousPoint:(struct CGPoint)arg2 withCurrentPoint:(struct CGPoint)arg3;
- (void)addPathPreviousPreviousPoint:(struct CGPoint)arg1 withPreviousPoint:(struct CGPoint)arg2 withCurrentPoint:(struct CGPoint)arg3;
- (void)addAPathPreviousPreviousPoint:(struct CGPoint)arg1 withPreviousPoint:(struct CGPoint)arg2 withCurrentPoint:(struct CGPoint)arg3;
- (struct CGRect)getPathRectBounds;
- (void)moveFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double lineWidth;
@property(readonly) Class superclass;

@end
