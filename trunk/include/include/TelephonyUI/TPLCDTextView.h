/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

@class NSString, TPLCDTextViewScrollingView, UIFrameAnimation;

@interface TPLCDTextView : UIView
{
    NSString *_text;
    struct __GSFont *_font;
    struct CGColor *_shadowColor;
    struct CGColor *_textColor;
    TPLCDTextViewScrollingView *_scrollingView;
    float _fontSize;
    struct CGRect _textRect;
    UIFrameAnimation *_animation;
    id _delegate;
    float _minFontSize;
    unsigned int _textRectIsValid:1;
    unsigned int _centerText:1;
    unsigned int _animates:1;
    unsigned int _isAnimating:1;
    unsigned int _leftTruncates:1;
}

+ (float)defaultMinimumFontSize;	// IMP=0x32633d38
- (void)_drawTextInRect:(struct CGRect)fp8 verticallyOffset:(BOOL)fp24;	// IMP=0x3263423c
- (void)_finishedScrolling;	// IMP=0x32634904
- (void)_scheduleStartScrolling;	// IMP=0x32634574
- (void)_setupForAnimationIfNecessary;	// IMP=0x32634d40
- (void)_startScrolling;	// IMP=0x32634674
- (void)_tearDownAnimation;	// IMP=0x326344fc
- (BOOL)animates;	// IMP=0x32634a8c
- (void)dealloc;	// IMP=0x32633dfc
- (void)drawRect:(struct CGRect)fp8;	// IMP=0x32634454
- (id)initWithFrame:(struct CGRect)fp8;	// IMP=0x32633d44
- (void)resetAnimation;	// IMP=0x32634a9c
- (void)setAnimatesIfTruncated:(BOOL)fp8;	// IMP=0x326345fc
- (void)setCenterText:(BOOL)fp8;	// IMP=0x32633fdc
- (void)setDelegate:(id)fp8;	// IMP=0x32634b8c
- (void)setFont:(struct __GSFont *)fp8;	// IMP=0x326340d4
- (void)setFrame:(struct CGRect)fp8;	// IMP=0x32633ea4
- (void)setLeftTruncatesText:(BOOL)fp8;	// IMP=0x32634028
- (void)setMinimumFontSize:(float)fp8;	// IMP=0x32634168
- (void)setShadowColor:(struct CGColor *)fp8;	// IMP=0x32634410
- (void)setText:(id)fp8;	// IMP=0x3263418c
- (void)setTextColor:(struct CGColor *)fp8;	// IMP=0x326343b8
- (struct CGSize)sizeToFit;	// IMP=0x326350d0
- (void)startAnimating;	// IMP=0x326348c8
- (void)stopAnimating;	// IMP=0x326349b8
- (id)text;	// IMP=0x32634234
- (struct CGRect)textRect;	// IMP=0x32635154

@end
