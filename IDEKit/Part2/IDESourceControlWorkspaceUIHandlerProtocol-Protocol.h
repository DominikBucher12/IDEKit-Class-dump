//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDESourceControlWorkspaceMonitor, NSArray, NSError, NSString;

@protocol IDESourceControlWorkspaceUIHandlerProtocol <NSObject>
- (void)requestOperationConfirmationForOperationName:(NSString *)arg1 workingCopyName:(NSArray *)arg2 completionBlock:(void (^)(BOOL))arg3;
- (void)workspaceMonitorDidFinishScanning:(IDESourceControlWorkspaceMonitor *)arg1;
- (void)warnAboutNewerRepositoryVersionWithError:(NSError *)arg1;
@end

