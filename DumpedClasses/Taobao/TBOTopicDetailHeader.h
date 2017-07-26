//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ITBOModel.h"

@class NSString, TBOAvatarImage, TBOTagView, UIButton, UILabel;

@interface TBOTopicDetailHeader : UIView <ITBOModel>
{
    id _model;
    TBOAvatarImage *_creatorAvatar;
    UILabel *_creatorTitle;
    TBOTagView *_userTagsView;
    UIButton *_communityButton;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *communityButton; // @synthesize communityButton=_communityButton;
@property(retain, nonatomic) TBOTagView *userTagsView; // @synthesize userTagsView=_userTagsView;
@property(retain, nonatomic) UILabel *creatorTitle; // @synthesize creatorTitle=_creatorTitle;
@property(retain, nonatomic) TBOAvatarImage *creatorAvatar; // @synthesize creatorAvatar=_creatorAvatar;
@property(retain, nonatomic) id model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
