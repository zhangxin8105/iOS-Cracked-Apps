//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTHotelOrderSelectSheetModel : NSObject
{
    NSString *_mainTitle;
    NSString *_subTitle;
    NSObject *_data;
}

+ (id)modelWithMainTitle:(id)arg1 subTitle:(id)arg2 andData:(id)arg3;
@property(retain, nonatomic) NSObject *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *mainTitle; // @synthesize mainTitle=_mainTitle;
- (void).cxx_destruct;

@end
