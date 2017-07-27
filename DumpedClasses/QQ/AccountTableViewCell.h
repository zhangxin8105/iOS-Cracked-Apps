//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQTableViewCell.h"

@class AccountItem, NSString, QQAvatarView, UIImageView, UILabel;

@interface AccountTableViewCell : QQTableViewCell
{
    QQAvatarView *_head;
    UIImageView *_addIcon;
    UILabel *_nick;
    UILabel *_uin;
    NSString *_backImageName;
    AccountItem *_item;
}

@property(retain, nonatomic) AccountItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NSString *backImageName; // @synthesize backImageName=_backImageName;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)deleteMe;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
