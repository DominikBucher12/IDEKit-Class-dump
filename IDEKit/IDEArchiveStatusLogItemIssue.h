//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEArchiveStatusLogItemChild-Protocol.h>
#import <IDEKit/NSCopying-Protocol.h>

@class NSArray, NSAttributedString, NSError, NSString;

@interface IDEArchiveStatusLogItemIssue : NSObject <IDEArchiveStatusLogItemChild, NSCopying>
{
    NSAttributedString *_attributedString;
    NSError *_error;
    long long _severity;
    NSArray *_children;
}

+ (id)issueWithError:(id)arg1 severity:(long long)arg2;
- (void).cxx_destruct;
@property(retain) NSArray *children; // @synthesize children=_children;
@property(readonly) long long severity; // @synthesize severity=_severity;
@property(readonly) NSError *error; // @synthesize error=_error;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly) BOOL isNotice;
@property(readonly) BOOL isWarning;
@property(readonly) BOOL isError;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

