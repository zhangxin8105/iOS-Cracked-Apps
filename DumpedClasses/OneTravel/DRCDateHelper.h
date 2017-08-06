//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DRCDateHelper : NSObject
{
}

+ (id)sharedInstance;
- (id)nextDayEarliestTimeWithDate:(id)arg1 type:(unsigned long long)arg2;
- (id)currentDayLatestTimeWithDate:(id)arg1 type:(unsigned long long)arg2;
- (id)currentDayEarliestTimeWithDate:(id)arg1 type:(unsigned long long)arg2;
- (id)getDateWithDate:(id)arg1 time:(id)arg2;
- (long long)getMinuteWithTimeString:(id)arg1;
- (long long)getHourWithTimeString:(id)arg1;
- (id)getDurationStringWithTimeInterval:(double)arg1 type:(unsigned long long)arg2;
- (id)weekDay:(id)arg1;
- (id)getFormatDateWithTimeInterval:(unsigned long long)arg1;

@end
