//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSString, NSWindow;

@protocol IDEContinuousIntegrationNewServiceAccountController <NSObject>
@property(copy) NSString *serverAddress;
- (void)beginSheetModalForWindow:(NSWindow *)arg1 completionBlock:(void (^)(long long, id, NSError *))arg2;
@end

