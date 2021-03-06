//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class AttributedImage, AttributedURL, NSArray, NSMutableArray, NSMutableAttributedString, UIColor;

@interface AttributedLabel : UILabel
{
    NSMutableArray *_images;
    NSMutableArray *_linkLocations;
    struct __CTFrame *_textFrame;
    _Bool _showUnderlineForLink;
    _Bool _useLargeLineSpace;
    _Bool _recevieTouchOnLinksOnly;
    _Bool _receiveTouchOnImages;
    _Bool _useLabelParagraph;
    _Bool _verticalCenter;
    NSMutableAttributedString *_attributedString;
    UIColor *_linkColor;
    id <AttributedLableDelegate> _delegate;
    AttributedURL *_currentUrl;
    AttributedImage *_currentImage;
}

+ (struct CGSize)sizeWithAttributedString:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3;
+ (struct CGSize)sizeWithAttributedString:(id)arg1 constrainedToSize:(struct CGSize)arg2;
+ (struct CGSize)sizeWithString:(id)arg1 font:(id)arg2 color:(id)arg3 constrainedToSize:(struct CGSize)arg4;
+ (struct CGSize)sizeWithString:(id)arg1 font:(id)arg2 color:(id)arg3 constrainedToSize:(struct CGSize)arg4 lineSpacing:(double)arg5;
@property(retain, nonatomic) AttributedImage *currentImage; // @synthesize currentImage=_currentImage;
@property(retain, nonatomic) AttributedURL *currentUrl; // @synthesize currentUrl=_currentUrl;
@property(nonatomic) _Bool verticalCenter; // @synthesize verticalCenter=_verticalCenter;
@property(nonatomic) _Bool useLabelParagraph; // @synthesize useLabelParagraph=_useLabelParagraph;
@property(nonatomic) id <AttributedLableDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool receiveTouchOnImages; // @synthesize receiveTouchOnImages=_receiveTouchOnImages;
@property(nonatomic) _Bool recevieTouchOnLinksOnly; // @synthesize recevieTouchOnLinksOnly=_recevieTouchOnLinksOnly;
@property(nonatomic) _Bool useLargeLineSpace; // @synthesize useLargeLineSpace=_useLargeLineSpace;
@property(nonatomic) _Bool showUnderlineForLink; // @synthesize showUnderlineForLink=_showUnderlineForLink;
@property(retain, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(readonly, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)clearCurrentImage;
- (void)clearCurrentLink;
- (void)setCurrentImageForPoint:(struct CGPoint)arg1;
- (void)setCurrentLinkForPoint:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)drawLinkBackgroundInContext:(struct CGContext *)arg1;
- (id)linkHighlightedBackgroundColor;
- (void)drawImages;
- (void)drawText:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)drawTextInRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFitsHeight:(double)arg1;
- (struct CGSize)sizeThatFitsWidth:(double)arg1;
- (void)redraw;
- (void)removeCustomLinkInRangeAndNotRedraw:(struct _NSRange)arg1;
- (void)removeAllCustomLinkAndRedraw:(_Bool)arg1;
- (void)removeAllCustomLink;
- (void)addCustomLink:(id)arg1 forRange:(struct _NSRange)arg2 redraw:(_Bool)arg3;
- (void)addCustomLink:(id)arg1 forRange:(struct _NSRange)arg2;
- (struct _NSRange)replaceTextInRange:(struct _NSRange)arg1 withImage:(id)arg2 margin:(struct UIEdgeInsets)arg3 alignment:(unsigned long long)arg4;
- (struct _NSRange)replaceTextInRange:(struct _NSRange)arg1 withImage:(id)arg2 margin:(struct UIEdgeInsets)arg3;
- (struct _NSRange)replaceTextInRange:(struct _NSRange)arg1 withImage:(id)arg2;
- (_Bool)hasAppendedImage;
- (void)appendImage:(id)arg1 margin:(struct UIEdgeInsets)arg2 alignment:(unsigned long long)arg3;
- (void)appendImage:(id)arg1 margin:(struct UIEdgeInsets)arg2;
- (id)formatImageTextWithImage:(id)arg1 margin:(struct UIEdgeInsets)arg2 alignment:(unsigned long long)arg3;
- (void)appendImage:(id)arg1;
- (struct _NSRange)replaceTextInRange:(struct _NSRange)arg1 withAttributedText:(id)arg2;
- (void)appendAttributedText:(id)arg1;
- (struct _NSRange)replaceTextInRange:(struct _NSRange)arg1 witText:(id)arg2;
- (void)appendText:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (id)attributedText;
- (void)setText:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)rectForCurrentLink;
- (id)linkAtIndex:(long long)arg1;
- (struct CGRect)getLineBounds:(struct __CTLine *)arg1 point:(struct CGPoint)arg2;
- (struct CGAffineTransform)transformForCoreText;
- (id)imageForPoint:(struct CGPoint)arg1;
- (id)linkForPoint:(struct CGPoint)arg1;
- (id)attributedStringForDraw;
- (unsigned char)alignmentFromNSTextAlignment:(long long)arg1;
- (long long)numberOfDisplayedLines;
- (id)attributedString:(id)arg1;
- (void)resetTextFrame;
- (void)initDatas;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)appendNMSearchText:(id)arg1 color:(id)arg2 keywords:(id)arg3;
- (void)appendNMSearchText:(id)arg1 color:(id)arg2 keyword:(id)arg3;
- (void)setNMSearchText:(id)arg1 color:(id)arg2 keywords:(id)arg3;
- (void)setNMSearchText:(id)arg1 color:(id)arg2 keyword:(id)arg3;
- (id)attributedText:(id)arg1 color:(id)arg2 withKeywords:(id)arg3;
- (id)attributedText:(id)arg1 color:(id)arg2 withKeyword:(id)arg3;
- (void)setKeyword:(id)arg1;
- (void)setNMAttributedText:(id)arg1;
- (id)handleEmojiString:(id)arg1;
- (void)appendLinkWithDisplayString:(id)arg1 font:(id)arg2 linkUrl:(id)arg3 linkImage:(id)arg4;
- (void)appendTopicLinkWithDisplayString:(id)arg1 font:(id)arg2 linkUrl:(id)arg3;
- (void)replaceLinkWithDisplayString:(id)arg1 font:(id)arg2 linkImage:(id)arg3;
- (void)addLinkForHttpUrl;
- (void)addTopicLink;
- (void)addAtLink;
- (void)setNormalText:(id)arg1;
@property(retain, nonatomic) NSArray *urlWhiteList;

@end

