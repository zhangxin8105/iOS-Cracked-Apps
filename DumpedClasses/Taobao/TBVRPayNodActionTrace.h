//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VUIManager, VUIVector3;

@interface TBVRPayNodActionTrace : NSObject
{
    struct _opaque_pthread_mutex_t mutex;
    id <TBVRPayNodActionTraceDelegate> _delegate;
    double _startTime;
    double _endTime;
    VUIVector3 *_startPosition;
    VUIVector3 *_bottomPosition;
    VUIManager *_uiManager;
}

@property(nonatomic) __weak VUIManager *uiManager; // @synthesize uiManager=_uiManager;
@property(retain, nonatomic) VUIVector3 *bottomPosition; // @synthesize bottomPosition=_bottomPosition;
@property(retain, nonatomic) VUIVector3 *startPosition; // @synthesize startPosition=_startPosition;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) __weak id <TBVRPayNodActionTraceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)end;
- (void)trace;
- (void)start;
- (double)maxTime;
- (id)initWithManager:(id)arg1;

@end
