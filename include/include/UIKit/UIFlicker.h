/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class UIView;

@interface UIFlicker : NSObject
{
    UIView *_target;
    struct CGPoint _startLocation;
    int _throwIterations;
    id _delegate;
    int _mouseUpCount;
    int _mouseDraggedCount;
    float _delay;
    struct CGPoint _offset;
}

- (void)_mouseDraggedMemberListTest;	// IMP=0x32433280
- (void)_mouseUpMemberListTest;	// IMP=0x32433450
- (void)_throwMemberListTest;	// IMP=0x32433690
- (id)init;	// IMP=0x32433814
- (struct CGPoint)offset;	// IMP=0x3243387c
- (void)run;	// IMP=0x324338c4
- (void)setDelay:(float)fp8;	// IMP=0x324338b4
- (void)setDelegate:(id)fp8;	// IMP=0x324338bc
- (void)setIterations:(int)fp8;	// IMP=0x324338ac
- (void)setOffset:(struct CGPoint)fp8;	// IMP=0x3243388c
- (void)setStartLocation:(struct CGPoint)fp8;	// IMP=0x324338a0
- (void)setTarget:(id)fp8;	// IMP=0x32433898

@end

