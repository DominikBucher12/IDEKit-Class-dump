//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEAbstractOpenQuicklyWindowController.h>

@interface IDEJumpToLineWindowController : IDEAbstractOpenQuicklyWindowController
{
}

+ (id)sharedInstance;
- (id)locationToOpen;
- (BOOL)alwaysTargetsOriginatingEditor;
- (void)prepareToShowWindow;
- (id)userDefaultsBaseName;
- (void)windowDidLoad;

@end
