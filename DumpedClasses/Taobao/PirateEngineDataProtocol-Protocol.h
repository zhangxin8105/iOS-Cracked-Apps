//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol PirateEngineDataProtocol <NSObject>

@optional
- (NSString *)unzipAnimationWithUrl:(NSString *)arg1;
- (void)downloadAnimationZipWithUrl:(NSString *)arg1;
- (void)downloadImageWithUrl:(NSString *)arg1 usingBlock:(void (^)(UIImage *))arg2;
- (void)userDataDidFinishedLoad:(_Bool)arg1;
@end
