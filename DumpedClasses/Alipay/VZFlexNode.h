//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString, VZFNode;

@interface VZFlexNode : NSObject
{
    struct FlexNode *_flex_node;
    NSMutableArray *_childNodes;
    int _lock;
    CDUnknownBlockType _measure;
    CDUnknownBlockType _baseline;
    NSString *_name;
}

+ (id)flexNodeWithSpecs:(const struct NodeSpecs *)arg1;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) CDUnknownBlockType baseline; // @synthesize baseline=_baseline;
@property(copy, nonatomic) CDUnknownBlockType measure; // @synthesize measure=_measure;
@property(readonly, nonatomic) NSArray *childNodes; // @synthesize childNodes=_childNodes;
- (void).cxx_destruct;
- (id)description;
- (id)recursiveDescription:(unsigned long long)arg1;
- (id)propertiesDescription:(unsigned long long)arg1;
- (void)removeSubNode:(id)arg1;
- (void)addSubNode:(id)arg1;
- (void)layout:(struct CGSize)arg1;
- (void)prepareLayout;
@property(readonly, nonatomic) struct UIEdgeInsets resultPadding;
@property(readonly, nonatomic) struct UIEdgeInsets resultMargin;
@property(readonly, nonatomic) struct CGRect resultFrame;
- (void)dealloc;
- (id)init;
@property(nonatomic) CDStruct_1253fce2 padding;
@property(nonatomic) CDStruct_1253fce2 paddingRight;
@property(nonatomic) CDStruct_1253fce2 paddingBottom;
@property(nonatomic) CDStruct_1253fce2 paddingLeft;
@property(nonatomic) CDStruct_1253fce2 paddingTop;
@property(nonatomic) CDStruct_1253fce2 margin;
@property(nonatomic) CDStruct_1253fce2 marginRight;
@property(nonatomic) CDStruct_1253fce2 marginBottom;
@property(nonatomic) CDStruct_1253fce2 marginLeft;
@property(nonatomic) CDStruct_1253fce2 marginTop;
@property(nonatomic) CDStruct_1253fce2 maxHeight;
@property(nonatomic) CDStruct_1253fce2 maxWidth;
@property(nonatomic) CDStruct_1253fce2 minHeight;
@property(nonatomic) CDStruct_1253fce2 minWidth;
@property(nonatomic) CDStruct_1253fce2 height;
@property(nonatomic) CDStruct_1253fce2 width;
@property(nonatomic) CDStruct_1253fce2 lineSpacing;
@property(nonatomic) CDStruct_1253fce2 spacing;
@property(nonatomic) double flexShrink;
@property(nonatomic) double flexGrow;
@property(nonatomic) CDStruct_1253fce2 flexBasis;
@property(nonatomic) int justifyContent;
@property(nonatomic) int alignContent;
@property(nonatomic) int alignSelf;
@property(nonatomic) int alignItems;
@property(nonatomic) int direction;
@property(nonatomic) _Bool wrap;
@property(nonatomic) _Bool fixed;
- (void)applyStackLayoutAttributes:(const struct StackNodeSpecs *)arg1;
@property(nonatomic) VZFNode *fNode;

@end
