//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDERemoteNotificationHandling-Protocol.h>

@class NSString;

@interface IDEDeveloperIDRemoteNotificationHandler : NSObject <IDERemoteNotificationHandling>
{
}

- (BOOL)handleNotificationResponse:(id)arg1 payload:(id)arg2 error:(id *)arg3;
- (BOOL)handleNotificationPayload:(id)arg1 error:(id *)arg2;
- (BOOL)canHandleNotificationPayload:(id)arg1;
- (id)_devIDPlusDictionaryFromPayload:(id)arg1;
- (id)_getSubmissionIdentifierFromPayload:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

