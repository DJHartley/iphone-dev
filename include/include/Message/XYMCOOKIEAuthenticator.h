/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/SASLAuthenticator.h>

@class YahooAccount;

@interface XYMCOOKIEAuthenticator : SASLAuthenticator
{
    YahooAccount *_yahooAccount;
}

- (BOOL)base64EncodeResponseData;	// IMP=0x30bc6251
- (id)responseForServerData:(id)fp8;	// IMP=0x30bc61c1
- (id)saslName;	// IMP=0x30bc6245
- (void)setAuthenticationState:(int)fp8;	// IMP=0x30bc6255

@end

