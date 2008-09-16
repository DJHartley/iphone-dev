/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

#import "QueueProtocol.h"

@class NSMutableArray;

@interface BufferedQueue : NSObject <Queue>
{
    unsigned int _maximumSize;
    double _maximumLatency;
    double _timeOfLastFlush;
    NSMutableArray *_queue;
    unsigned int _currentSize;
}

- (BOOL)addItem:(id)fp8;	// IMP=0x30bbf3ab
- (void)dealloc;	// IMP=0x30bbf5a1
- (BOOL)flush;	// IMP=0x30bbf4fd
- (BOOL)handleItems:(id)fp8;	// IMP=0x30bbf571
- (id)init;	// IMP=0x30bbf37d
- (id)initWithMaximumSize:(unsigned int)fp8 latency:(double)fp12;	// IMP=0x30bbf315
- (void)setMaximumLatency:(double)fp8;	// IMP=0x30bbf3a5
- (void)setMaximumSize:(unsigned int)fp8;	// IMP=0x30bbf3a1
- (unsigned int)sizeForItem:(id)fp8;	// IMP=0x30bbf56d

@end
