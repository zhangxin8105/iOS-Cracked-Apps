//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface GSViewController : UIViewController
{
    _Bool _entranceLv2;
    unsigned long long _entranceType;
}

@property(nonatomic) unsigned long long entranceType; // @synthesize entranceType=_entranceType;
@property(nonatomic) _Bool entranceLv2; // @synthesize entranceLv2=_entranceLv2;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)backToHome;
- (_Bool)shouldAutorotate;
- (id)findService;
- (id)initWithEntranceType:(unsigned long long)arg1;

@end
