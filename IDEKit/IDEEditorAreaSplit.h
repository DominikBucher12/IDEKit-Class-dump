//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/IDEEditorMultipleSplitItem-Protocol.h>
#import <IDEKit/IDEEditorMutableMultipleSplitItem-Protocol.h>
#import <IDEKit/NSUserInterfaceValidations-Protocol.h>
#import <IDEKit/_IDEEditorModeActions-Protocol.h>

@class DVTNotificationToken, DVTObservingToken, IDEEditorArea, IDEEditorContext, IDEEditorModeViewController, IDEEditorMultipleSplit, IDENavigableItemArchivableRepresentation, NSArray, NSMutableDictionary, NSNumber, NSString, NSView;

@interface IDEEditorAreaSplit : IDEViewController <NSUserInterfaceValidations, _IDEEditorModeActions, IDEEditorMutableMultipleSplitItem, IDEEditorMultipleSplitItem>
{
    NSView *_editorModeHostView;
    DVTObservingToken *_workspaceActivityObserver;
    NSNumber *_lastChangedEditorModeTimeIntervalNumber;
    int _userVisibleEditorMode;
    int _editorMode;
    unsigned long long _subEditorLayout;
    DVTNotificationToken *_primaryFrameChangeToken;
    NSMutableDictionary *_editorIdToManuallySetEditorMode;
    BOOL _needsToRefreshContexts;
    BOOL _isRefreshingContexts;
    BOOL _isSettingEditorMode;
    BOOL _didInstall;
    BOOL _didRestoreState;
    IDEEditorMultipleSplit *parentEditorMultipleSplit;
    IDEEditorArea *editorArea;
    IDEEditorModeViewController *_editorModeViewController;
    IDENavigableItemArchivableRepresentation *_selectedNavigableItemArchivedRepresentation;
    long long _subEditorOrientation;
    unsigned long long _borderSides;
    IDEEditorContext *_lastActiveEditorContext;
}

+ (BOOL)automaticallyNotifiesObserversForEditorMode;
+ (int)defaultEditorMode;
+ (id)keyPathsForValuesAffectingEditorContexts;
+ (id)keyPathsForValuesAffectingIsPrimaryEditorAreaSplit;
+ (id)keyPathsForValuesAffectingPrimaryEditorContext;
- (void).cxx_destruct;
@property unsigned long long subEditorLayout; // @synthesize subEditorLayout=_subEditorLayout;
@property(retain) IDEEditorContext *lastActiveEditorContext; // @synthesize lastActiveEditorContext=_lastActiveEditorContext;
@property(nonatomic) unsigned long long borderSides; // @synthesize borderSides=_borderSides;
@property(nonatomic) long long subEditorOrientation; // @synthesize subEditorOrientation=_subEditorOrientation;
@property(readonly) IDENavigableItemArchivableRepresentation *selectedNavigableItemArchivedRepresentation; // @synthesize selectedNavigableItemArchivedRepresentation=_selectedNavigableItemArchivedRepresentation;
@property(retain) IDEEditorModeViewController *editorModeViewController; // @synthesize editorModeViewController=_editorModeViewController;
@property(retain) IDEEditorArea *editorArea; // @synthesize editorArea;
@property(retain) IDEEditorMultipleSplit *parentEditorMultipleSplit; // @synthesize parentEditorMultipleSplit;
@property(readonly) BOOL isRefreshingContexts; // @synthesize isRefreshingContexts=_isRefreshingContexts;
@property(readonly) NSArray *editorAreaSplits;
@property(readonly) struct CGSize minimumContentViewFrameSize;
- (void)resetEditorSizes;
- (BOOL)canResetEditorSizes;
- (id)navigationOverlayTargetAccessibilityTitle;
- (void)_setSubEditorPositionToBelow:(id)arg1;
- (void)_setSubEditorPositionToOnRight:(id)arg1;
- (void)_setSubEditorPositionToAutomatic:(id)arg1;
- (void)updateSubEditorLayoutIfNeeded;
- (void)_toggleShowCodeReviewForEditor:(id)arg1;
- (void)_toggleMaximizeEditor:(id)arg1;
- (void)_toggleShowAssistantMode:(id)arg1;
- (void)_toggleShowPreviewMode:(id)arg1;
- (void)_showPreviewMode:(id)arg1;
- (void)_showAssistantMode:(id)arg1;
- (void)_showEditorOnly:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (long long)_controlStateValueForChangeSubEditorOrientationAction:(SEL)arg1;
- (void)_updateStateSavingRegistrations;
- (void)_refreshEditorContextsAndPreserveCurrentEditorHistoryStack:(BOOL)arg1;
@property(nonatomic) int editorMode;
- (int)validateEditorMode:(int)arg1;
- (void)setUserVisibleEditorMode:(int)arg1 client:(unsigned long long)arg2;
- (void)_updateDefaultModeForEditorIDWithEditorMode:(int)arg1 client:(unsigned long long)arg2;
- (void)_restoreUserVisibleEditorMode:(int)arg1 primaryHistoryStack:(id)arg2 secondaryHistoryStack:(id)arg3 primaryEditorHasKeyFocus:(BOOL)arg4 secondaryEditorHasKeyFocus:(BOOL)arg5 client:(unsigned long long)arg6;
- (void)setUserVisibleEditorMode:(int)arg1;
@property(readonly, nonatomic) int userVisibleEditorMode;
- (void)_setEditorMode:(int)arg1;
- (void)_reportChangedFromOldEditorMode:(int)arg1 newEditorMode:(int)arg2 client:(unsigned long long)arg3;
- (void)_setEditorModeViewControllerWithPrimaryEditorContext:(id)arg1;
- (void)_resetAssistantEditorSelection;
- (BOOL)_canResetAssistantEditorSelection;
- (void)editorContextWasRemoved:(id)arg1;
- (void)editorContextDidBecomeLastActiveEditor:(id)arg1 focused:(BOOL)arg2;
- (void)newEditorAreaSplitAlternate:(id)arg1;
- (void)newEditorAreaSplit:(id)arg1;
- (void)compareRevisionChange:(id)arg1;
- (void)showBlame;
- (id)editorContexts;
@property(readonly) BOOL isPrimaryEditorAreaSplit;
@property(readonly) IDEEditorContext *primaryEditorContext;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)editorContext:(id)arg1 didSetEditor:(id)arg2;
- (int)_primitiveDefaultEditorModeForExtension:(id)arg1;
- (id)_editorModeCompatibleEditorIDsForDocumentExtension:(id)arg1;
- (id)_editorIdentifierKeyForDocumentExtension:(id)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

