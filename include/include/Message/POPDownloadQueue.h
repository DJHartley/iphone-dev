/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/BufferedMessageQueue.h>

@class MailboxUid, NSDate, SqliteMessageIDStore;

@interface POPDownloadQueue : BufferedMessageQueue
{
    SqliteMessageIDStore *_uidStore;
    MailboxUid *_mailbox;
    NSDate *startDate;
}

- (BOOL)addItem:(id)fp8;	// IMP=0x30bbdf5d
- (BOOL)handleItems:(id)fp8;	// IMP=0x30bbe01d
- (id)init;	// IMP=0x30bbdf25

@end

