//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class IDEAnalyzeSchemeAction, IDEScheme, IDEWorkspace, NSBox;

@interface IDEAnalyzeActionSheetController : IDEViewController
{
    IDEScheme *_runContext;
    IDEWorkspace *_workspace;
    IDEAnalyzeSchemeAction *_runPhase;
    NSBox *_box;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain) IDEAnalyzeSchemeAction *runPhase; // @synthesize runPhase=_runPhase;
@property(retain) IDEScheme *runContext; // @synthesize runContext=_runContext;
@property(retain) IDEWorkspace *workspace;
- (void)updateBoundContent;
- (void)updateBoundIDEWorkspaceBinding;
- (void)updateBoundIDERunContextBinding;
- (id)dvt_extraBindings;
- (void)primitiveInvalidate;
- (void)loadView;

@end

