//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class IDEIntegrateSchemeAction, IDEScheme, IDEWorkspace, NSBox;

@interface IDEIntegrateActionSheetController : IDEViewController
{
    IDEScheme *_scheme;
    IDEWorkspace *_workspace;
    IDEIntegrateSchemeAction *_schemeAction;
    NSBox *_box;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSBox *box; // @synthesize box=_box;
@property(retain, nonatomic) IDEIntegrateSchemeAction *schemeAction; // @synthesize schemeAction=_schemeAction;
@property(retain, nonatomic) IDEScheme *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void)loadView;
- (void)updateBoundContent;
- (void)updateBoundIDEWorkspaceBinding;
- (void)updateBoundIDERunContextBinding;
- (id)dvt_extraBindings;
- (void)primitiveInvalidate;

@end

