//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEWorkspace, NSArray, NSWindow;

@protocol IDESourceControlCommitWindowControllerProtocol <NSObject>
@property(copy) CDUnknownBlockType commitWindowCompletionBlock;
@property(copy) NSArray *workingTrees;
@property(retain) IDEWorkspace *workspace;
@property(retain) NSArray *forcedPushInfos;
- (void)beginSheetForWindow:(NSWindow *)arg1;
@end

