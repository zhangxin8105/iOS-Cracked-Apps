//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APMessage.h"

@class NSDictionary, NSString, UIImage;

@interface APInAppNotification : NSObject <APMessage>
{
    NSString *_identifier;
    long long _state;
    CDUnknownBlockType _handler;
    double _duration;
    NSString *_title;
    NSString *_subtitle;
    NSString *_body;
    NSDictionary *_userInfo;
    id <APMessageView> _associatedView;
    UIImage *_icon;
}

+ (double)notificationDuration;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(nonatomic) __weak id <APMessageView> associatedView; // @synthesize associatedView=_associatedView;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithNotification:(id)arg1;
- (id)init;
- (Class)viewClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
