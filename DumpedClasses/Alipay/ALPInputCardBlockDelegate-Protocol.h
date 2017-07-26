//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALPInputCardInfoViewController, APTableViewCell, NSIndexPath, NSString, UITableView, UIView, WEALTHSignValidateReq;

@protocol ALPInputCardBlockDelegate <NSObject>
- (void)didClickCell:(UITableView *)arg1 indexPath:(NSIndexPath *)arg2 inController:(ALPInputCardInfoViewController *)arg3;
- (void)fillValue:(WEALTHSignValidateReq *)arg1;
- (_Bool)hasText;
- (NSString *)isValid;
- (void)resignFirstResponse;
- (double)cellHeight:(long long)arg1;
- (APTableViewCell *)blockCell:(UITableView *)arg1 atIndex:(long long)arg2;
- (long long)cellCount;

@optional
- (UIView *)headerForBlock;
- (UIView *)footerForBlock;
@end
