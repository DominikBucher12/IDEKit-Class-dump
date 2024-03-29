//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSTokenFieldDelegate-Protocol.h>

@class IDEWorkspace, NSArray, NSString;

@interface IDEAttachTokenFieldDelegate : NSObject <NSTokenFieldDelegate>
{
    IDEWorkspace *_workspace;
    NSArray *_recentlyAttachedNames;
    NSArray *_processesFromDevice;
    NSArray *_targetsFromWorkspace;
}

- (void).cxx_destruct;
@property(retain) NSArray *targetsFromWorkspace; // @synthesize targetsFromWorkspace=_targetsFromWorkspace;
@property(retain) NSArray *processesFromDevice; // @synthesize processesFromDevice=_processesFromDevice;
@property(retain) NSArray *recentlyAttachedNames; // @synthesize recentlyAttachedNames=_recentlyAttachedNames;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (id)tokenField:(id)arg1 setUpTokenAttachmentCell:(id)arg2 forRepresentedObject:(id)arg3;
- (id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long *)arg4;
- (void)_startCollectingCompletionsFromBuildables;
- (void)_startCollectingCompletions;
- (void)updateCompletionsWithProcessInformationsFromDevice:(id)arg1;
- (void)rememberEnteredProcessNameIfNecessary:(id)arg1;
- (void)populateLastEntry:(id)arg1;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

