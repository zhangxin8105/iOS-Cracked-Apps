//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCRouteInProgressCellDriver.h"

#import "DCHomeTableViewCellProtocol.h"

@class DCHomeSuspenseListModel, DCHomeTableCellTieModel, NSString;

@interface DCHomeInProgressCellDriver : DCRouteInProgressCellDriver <DCHomeTableViewCellProtocol>
{
    DCHomeSuspenseListModel *_dataModel;
    DCHomeTableCellTieModel *_tieModel;
}

+ (double)cellMargin;
+ (double)cellHeightByDataModel:(id)arg1;
@property(nonatomic) __weak DCHomeTableCellTieModel *tieModel; // @synthesize tieModel=_tieModel;
@property(nonatomic) __weak DCHomeSuspenseListModel *dataModel; // @synthesize dataModel=_dataModel;
- (void).cxx_destruct;
- (void)setEventsTieModel:(id)arg1;
- (id)currentDataModel;
- (void)layoutSubviews;
- (void)tapped;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)refreshCellByDataModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
