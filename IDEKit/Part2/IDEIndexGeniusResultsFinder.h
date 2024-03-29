//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEGeniusResultsFinder.h>

@class DVTDispatchLock, DVTNotificationToken;

@interface IDEIndexGeniusResultsFinder : IDEGeniusResultsFinder
{
    DVTNotificationToken *_indexDidChangeNotificationObserver;
    DVTDispatchLock *_generationLock;
    unsigned long long _currentGeneration;
}

- (void).cxx_destruct;
- (void)_updateGeniusResults;
- (BOOL)_getUpdateGeniusResultsPhase1Block:(CDUnknownBlockType *)arg1 phase2Block:(CDUnknownBlockType *)arg2 phase3Block:(CDUnknownBlockType *)arg3;
- (void)setIdle:(BOOL)arg1;
- (void)primitiveInvalidate;
- (id)_initWithEditorModeViewController:(id)arg1 navigableItemCoordinator:(id)arg2;

@end

