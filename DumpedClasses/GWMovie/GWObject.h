//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class GWUserDefaults, NSMutableDictionary;

@interface GWObject : NSObject <NSCoding>
{
    unsigned long long _gwTag;
    NSMutableDictionary *_gwUserInfo;
    GWUserDefaults *_gwUserDefaults;
}

+ (id)transferDicArrToGWModelArr:(id)arg1;
+ (id)transferDicToGWModel:(id)arg1;
+ (id)transferToGWModelArr:(id)arg1;
@property(retain, nonatomic) GWUserDefaults *gwUserDefaults; // @synthesize gwUserDefaults=_gwUserDefaults;
@property(retain, nonatomic) NSMutableDictionary *gwUserInfo; // @synthesize gwUserInfo=_gwUserInfo;
@property(nonatomic) unsigned long long gwTag; // @synthesize gwTag=_gwTag;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)shouldCodeWithPropertyName:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)transferToGWModel;
- (id)valueForUndefinedKey:(id)arg1;
- (id)mj_keyValuesWithKeys:(id)arg1 ignoredKeys:(id)arg2;

@end
