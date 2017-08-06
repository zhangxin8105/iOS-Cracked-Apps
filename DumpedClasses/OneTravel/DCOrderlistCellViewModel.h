//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DCCellComplseUserViewModel, DCCellComposeFooterViewModel, DCCellComposeRouteViewModel, NSDictionary, NSIndexPath;

@interface DCOrderlistCellViewModel : NSObject
{
    _Bool _isNew;
    _Bool _isTheLastOne;
    DCCellComplseUserViewModel *_userViewModel;
    DCCellComposeRouteViewModel *_routeViewModel;
    DCCellComposeFooterViewModel *_footerViewModel;
    NSDictionary *_userInfo;
    NSIndexPath *_indexPath;
    double _height;
}

+ (double)cellMargin;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) _Bool isTheLastOne; // @synthesize isTheLastOne=_isTheLastOne;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) DCCellComposeFooterViewModel *footerViewModel; // @synthesize footerViewModel=_footerViewModel;
@property(retain, nonatomic) DCCellComposeRouteViewModel *routeViewModel; // @synthesize routeViewModel=_routeViewModel;
@property(retain, nonatomic) DCCellComplseUserViewModel *userViewModel; // @synthesize userViewModel=_userViewModel;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
- (void).cxx_destruct;
- (double)usersViewHeightWithModel:(id)arg1;
- (void)caculateHeight;
- (id)myFooterViewModel;
- (id)myRouteViewModel;
- (id)myUserViewModel;
- (id)apiModel;
- (void)setApiModel:(id)arg1;
- (void)setupWithWaitRideCrossCityApiModel:(id)arg1;
- (void)setupWithWaitRideSameCityApiModel:(id)arg1;
- (void)setupWithWaitTripS2SModel:(id)arg1;
- (void)setupWithWaitTripModel:(id)arg1;

@end
