//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class LiveRoomModel, UIImageView, UILabel;

@interface LiveEnterMessageCell : UITableViewCell
{
    LiveRoomModel *_liveRoomModel;
    UILabel *_messageLabel;
    UIImageView *_avatarView;
    UILabel *_userNameLabel;
    UIImageView *_bgImageView;
    long long _userLevel;
}

+ (double)cellHeight;
@property(nonatomic) long long userLevel; // @synthesize userLevel=_userLevel;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) LiveRoomModel *liveRoomModel; // @synthesize liveRoomModel=_liveRoomModel;
- (void).cxx_destruct;
- (void)refreshCellWithMessage:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 frame:(struct CGRect)arg3 liveRoomModel:(id)arg4;
- (void)awakeFromNib;

@end
