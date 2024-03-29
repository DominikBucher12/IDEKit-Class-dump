//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSTimer, NSWindow;

@interface IDEUITestingTCCPermissionWindowController : NSWindowController
{
    BOOL _isPresenting;
    BOOL _status;
    CDUnknownBlockType _permissionReplyBlock;
    NSTimer *_permissionPollingTimer;
    NSWindow *_workspaceWindow;
}

- (void).cxx_destruct;
@property __weak NSWindow *workspaceWindow; // @synthesize workspaceWindow=_workspaceWindow;
@property(retain) NSTimer *permissionPollingTimer; // @synthesize permissionPollingTimer=_permissionPollingTimer;
@property(copy) CDUnknownBlockType permissionReplyBlock; // @synthesize permissionReplyBlock=_permissionReplyBlock;
@property BOOL status; // @synthesize status=_status;
@property BOOL isPresenting; // @synthesize isPresenting=_isPresenting;
- (void)promptForPermission:(id)arg1;
- (void)cancel:(id)arg1;
- (void)_permissionUpdateCheck;
- (void)presentInWorkspaceWindowController:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)init;

@end

