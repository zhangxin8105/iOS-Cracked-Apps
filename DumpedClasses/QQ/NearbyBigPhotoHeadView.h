//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NearbyAlbumInfoComponent, QQAvatarView, UIImageView;

@interface NearbyBigPhotoHeadView : UIView
{
    QQAvatarView *_photoWallHeadImage;
    UIImageView *_arrowView;
    UIImageView *_wordingView;
    NearbyAlbumInfoComponent *_albumInfoComponent;
}

@property(nonatomic) __weak NearbyAlbumInfoComponent *albumInfoComponent; // @synthesize albumInfoComponent=_albumInfoComponent;
- (void).cxx_destruct;
- (id)getHeadImageAreaView;
- (void)hiddenHeadView;
- (void)showHeadView;
- (void)onClickHeadImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
