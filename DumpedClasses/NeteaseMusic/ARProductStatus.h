//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ARProductStatus : NSObject
{
    _Bool _shouldUpdate;
    _Bool _downloaded;
    float _size;
    NSString *_pid;
}

@property(nonatomic) _Bool downloaded; // @synthesize downloaded=_downloaded;
@property(nonatomic) float size; // @synthesize size=_size;
@property(nonatomic) _Bool shouldUpdate; // @synthesize shouldUpdate=_shouldUpdate;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
