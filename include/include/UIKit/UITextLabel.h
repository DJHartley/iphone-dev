/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSString;

@interface UITextLabel : UIView
{
    struct CGSize _size;
    NSString *_text;
    struct CGColor *_color;
    struct CGColor *_highlightedColor;
    struct CGColor *_shadowColor;
    struct __GSFont *_font;
    struct CGSize _shadowOffset;
    struct {
        unsigned int ellipsisStyle:3;
        unsigned int highlighted:1;
        unsigned int centersHorizontally:1;
        unsigned int wrapsText:1;
        unsigned int reserved:26;
    } _textLabelFlags;
}

+ (struct __GSFont *)defaultFont;	// IMP=0x3245d3e4
- (struct CGColor *)_disabledFontColor;	// IMP=0x3245da20
- (void)_invalidateTextSize;	// IMP=0x3245d974
- (BOOL)centersHorizontally;	// IMP=0x3245dc9c
- (struct CGColor *)color;	// IMP=0x3245dbec
- (struct CGColor *)currentTextColor;	// IMP=0x3245dcc4
- (void)dealloc;	// IMP=0x3245d69c
- (void)drawContentsInRect:(struct CGRect)fp8;	// IMP=0x3245e160
- (void)drawRect:(struct CGRect)fp8;	// IMP=0x3245dfa0
- (struct CGSize)ellipsizedTextSize;	// IMP=0x3245d81c
- (struct __GSFont *)font;	// IMP=0x3245dedc
- (struct CGColor *)highlightedColor;	// IMP=0x3245dcbc
- (BOOL)ignoresMouseEvents;	// IMP=0x3245d734
- (id)initWithFrame:(struct CGRect)fp8;	// IMP=0x3245d3f8
- (BOOL)isHighlighted;	// IMP=0x3245df3c
- (void)setCentersHorizontally:(BOOL)fp8;	// IMP=0x3245dc54
- (void)setColor:(struct CGColor *)fp8;	// IMP=0x3245dadc
- (void)setEllipsisStyle:(int)fp8;	// IMP=0x3245df4c
- (void)setEnabled:(BOOL)fp8;	// IMP=0x3245da58
- (void)setFont:(struct __GSFont *)fp8;	// IMP=0x3245ddc0
- (void)setFrame:(struct CGRect)fp8;	// IMP=0x3245d544
- (void)setHighlighted:(BOOL)fp8;	// IMP=0x3245def4
- (void)setHighlightedColor:(struct CGColor *)fp8;	// IMP=0x3245dbf4
- (void)setShadowColor:(struct CGColor *)fp8;	// IMP=0x3245dd64
- (void)setShadowOffset:(struct CGSize)fp8;	// IMP=0x3245e038
- (void)setText:(id)fp8;	// IMP=0x3245d990
- (void)setWrapsText:(BOOL)fp8;	// IMP=0x3245e0a0
- (struct CGColor *)shadowColor;	// IMP=0x3245ddb8
- (struct CGSize)shadowOffset;	// IMP=0x3245dee4
- (void)sizeToFit;	// IMP=0x3245e43c
- (id)text;	// IMP=0x3245dad4
- (struct CGSize)textSize;	// IMP=0x3245d73c
- (BOOL)wrapsText;	// IMP=0x3245dcac

@end

