//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEWelcomeWindowAuthorizationHelper : NSObject
{
}

+ (BOOL)isAuthorized;
+ (struct AuthorizationOpaqueRef *)acquireAuthorizationForRightString:(const char *)arg1 withPrompt:(const char *)arg2;
+ (void)releaseAuthorization;
+ (struct AuthorizationOpaqueRef *)_createAuthorizationForRightString:(const char *)arg1 withPrompt:(const char *)arg2;
+ (void)initialize;

@end
