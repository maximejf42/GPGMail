/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MFMessageAddressee : NSObject
{
    NSString *_displayName;
    NSString *_address;
    NSString *_type;
    id _message;
}

- (void)setMessage:(id)arg1;
- (id)objectSpecifier;
- (id)_keyForType;
- (void)setAddress:(id)arg1;
- (id)address;
- (void)setDisplayName:(id)arg1;
- (id)displayName;
- (id)formattedAddress;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithDisplayName:(id)arg1 address:(id)arg2 type:(id)arg3 message:(id)arg4;

@end

