//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSDictionary, UNNotificationResponse;

@protocol IDERemoteNotificationHandling <NSObject>
- (BOOL)handleNotificationResponse:(UNNotificationResponse *)arg1 payload:(NSDictionary *)arg2 error:(id *)arg3;
- (BOOL)handleNotificationPayload:(NSDictionary *)arg1 error:(id *)arg2;
- (BOOL)canHandleNotificationPayload:(NSDictionary *)arg1;
@end

