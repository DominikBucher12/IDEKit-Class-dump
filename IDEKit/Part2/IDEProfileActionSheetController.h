//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/IDECapsuleListViewDataSource-Protocol.h>

@class DVTBorderedView, DVTChoice, DVTFilePathFieldCell, DVTNotificationToken, DVTObservingToken, DVTStackView_AppKitAutolayout, DVTStackView_ML, DVTTabChooserView, IDEArgumentsCapsuleSheetController, IDECapsuleListView, IDEEnvironmentVariablesCapsuleSheetController, IDEProfileSchemeAction, IDEScheme, IDEWorkspace, NSMutableArray, NSPopUpButton, NSString, NSTabView, NSTextField, NSView;

@interface IDEProfileActionSheetController : IDEViewController <IDECapsuleListViewDataSource>
{
    DVTTabChooserView *_tabChooser;
    NSTabView *_tabView;
    DVTBorderedView *_useRunActionOptionsBorderedView;
    IDECapsuleListView *_capsuleListView;
    DVTBorderedView *_optionsBorderedView;
    NSPopUpButton *_runnablePopUp;
    NSPopUpButton *_analysisToolsPopUp;
    DVTFilePathFieldCell *_workingDirectoryTextFieldCell;
    NSView *_infoTabViewContentView;
    NSPopUpButton *_macroExpansionRunnableBuildablesPopUp;
    NSTextField *_macroExpansionDescription;
    DVTStackView_ML *_optionsStackView;
    NSView *_resumeOptionView;
    NSView *_debugDocumentVersioningOptionView;
    NSView *_workingDirectoryOptionView;
    NSView *_testabilityOptionView;
    DVTStackView_AppKitAutolayout *_infoStackView;
    NSView *_executable_buildConfiguration;
    NSView *_executable_runnable;
    NSView *_executable_instrument;
    NSView *_watchLaunchSettingsView;
    NSPopUpButton *_watchInterfacePopup;
    NSPopUpButton *_notificationPayloadPopup;
    NSView *_notificationPayloadSettingsView;
    DVTChoice *_infoChoice;
    DVTChoice *_conditionsChoice;
    DVTChoice *_optionsChoice;
    IDEScheme *_runContext;
    IDEProfileSchemeAction *_runPhase;
    BOOL _optionsUpdatedInCurrentRunLoop;
    IDEArgumentsCapsuleSheetController *_argumentsViewController;
    IDEEnvironmentVariablesCapsuleSheetController *_environmentVariablesViewController;
    DVTObservingToken *_runnableBuildableProductsObservingToken;
    DVTObservingToken *_runContextRunnableObservingToken;
    DVTObservingToken *_launchActionArgsEnvLinkObservingToken;
    NSMutableArray *_observationTokens;
    DVTNotificationToken *_buildablesToken;
    unsigned long long _runnablePopUpRunnableBuildableProductsCount;
    BOOL _runnablePopUpHasCustomRunnable;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)defaultViewNibName;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) IDEProfileSchemeAction *runPhase; // @synthesize runPhase=_runPhase;
@property(retain) IDEScheme *runContext; // @synthesize runContext=_runContext;
@property(retain) DVTTabChooserView *tabChooser; // @synthesize tabChooser=_tabChooser;
- (id)capsuleListView:(id)arg1 viewControllerForRow:(long long)arg2;
- (long long)numberOfObjectsInCapsuleListView:(id)arg1;
@property(readonly) IDEWorkspace *workspace;
- (id)DVTFilePathFieldCell:(id)arg1 resolvedPathForPath:(id)arg2;
- (void)DVTFilePathFieldCell:(id)arg1 chooserSelectedPath:(id)arg2;
- (void)_resetOptionsUpdatedFlag;
- (void)_updateSupportedOptions;
- (void)_macroExpansionRunnableBuildableSelected:(id)arg1;
- (void)_updateMacroExpansionDescriptionForSelectedItem;
- (void)_updateMacroExpansionRunnablePopUpSelection;
- (void)_updateMacroExpansionRunnablePopUp;
- (unsigned long long)_indexOfDebuggerFromScheme;
- (void)clearHighlightsInCapsuleView;
- (void)_updateRunnablePopUp;
- (void)_runnableBuildableProductsDidChange;
- (void)_addMenuItemForBuildableProduct:(id)arg1 menu:(id)arg2;
- (void)_updateWatchSettings;
- (void)_notificationPayloadSelected:(id)arg1;
- (id)notificationPayloadFileReferences;
- (BOOL)_runnableIsWatchApp;
- (void)_addMenuItemForWatchInterfaceMenu:(id)arg1 tag:(long long)arg2;
- (void)watchInterfaceSelected:(id)arg1;
- (void)_validateNotificationPopupForTag:(long long)arg1;
- (void)runnablePopUpAction:(id)arg1;
- (void)_updateMacroExpansionRunnablePopUpEnablement;
- (void)_runnableDidUpdate;
- (void)revertStateWithDictionary:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)_analysisToolSelected:(id)arg1;
- (void)_addMenuItemForAnalysisTool:(id)arg1;
- (void)_addMenuItemForAnalysisTools:(id)arg1;
- (void)_updateAnalysisToolsPopUp;
- (void)_selectedSchemeChanged:(id)arg1;
- (void)primitiveInvalidate;
- (void)_updateInfoTab;
- (void)loadView;
- (void)updateBoundContent;
- (void)updateBoundIDERunContextBinding;
- (id)dvt_extraBindings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

