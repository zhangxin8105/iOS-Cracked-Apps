//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BcardImageCache : NSObject
{
}

+ (id)GetInstance;
+ (id)getImageDefaultCachePath;
- (_Bool)deleteImageCacheforKey:(id)arg1;
- (id)getImageCacheforKey:(id)arg1;
- (_Bool)setImageCache:(id)arg1 forKey:(id)arg2;
- (id)getFilePathForKey:(id)arg1;

@end
