//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEDebuggerMenuDelegate : NSObject
{
}

+ (id)_createProcessMenuItem:(id)arg1 pidsAsNumbersBeingDebuggedByXcode:(id)arg2;
+ (id)_createHeaderMenuItem:(id)arg1;
+ (void)_addMenuGroup:(id)arg1 withMenuItems:(id)arg2 toMenu:(id)arg3;
+ (id)_currentDevice;
+ (id)_activeWorkspace;
+ (id)_PIDsAsNumbersOfProcessesBeingDebuggedInXcode;
+ (id)_likelyAttachToTargetNames;
- (void)_addProcessInformations:(id)arg1 toMenu:(id)arg2;
- (void)menuNeedsUpdate:(id)arg1;

@end

