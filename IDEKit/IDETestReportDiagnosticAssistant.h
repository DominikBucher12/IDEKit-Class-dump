//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <IDEKit/DVTFindBarHostable-Protocol.h>

@class DVTBorderedView, DVTIncrementalFindBar, DVTScopeBarController, DVTSourceTextView, IDETestReportDiagnosticAssistantNavigableItem, NSButton, NSPopUpButton, NSString, NSTextField, NSURL;

@interface IDETestReportDiagnosticAssistant : IDEEditor <DVTFindBarHostable>
{
    DVTIncrementalFindBar *_findBar;
    DVTScopeBarController *_findBarScopeBarController;
    IDETestReportDiagnosticAssistantNavigableItem *_navigable;
    NSURL *_selectedLogURL;
    DVTBorderedView *_borderedView;
    DVTSourceTextView *_textView;
    NSPopUpButton *_logsPopUp;
    NSString *_unfilteredLogText;
    NSButton *_showDiagnosticsButton;
    NSTextField *_selectedLogLabel;
}

+ (id)selectedLogLabelForMenuItem:(id)arg1;
+ (id)ancestorItemForMenuItem:(id)arg1;
+ (id)firstLeafNodeItemInMenuTree:(id)arg1;
+ (id)menuForTestableSummary:(id)arg1 inTestSchemeAction:(id)arg2 menuItemTarget:(id)arg3;
+ (id)menuForTestPlanRunSummary:(id)arg1 inTestSchemeAction:(id)arg2 forTestTargetsMatchingName:(id)arg3 menuItemTarget:(id)arg4;
+ (id)menuForTestSchemeAction:(id)arg1 forTestTargetsMatchingName:(id)arg2 menuItemTarget:(id)arg3;
+ (id)menuForResultBundle:(id)arg1 forTestTargetsMatchingName:(id)arg2 menuItemTarget:(id)arg3;
- (void).cxx_destruct;
@property __weak NSTextField *selectedLogLabel; // @synthesize selectedLogLabel=_selectedLogLabel;
@property __weak NSButton *showDiagnosticsButton; // @synthesize showDiagnosticsButton=_showDiagnosticsButton;
@property(copy) NSString *unfilteredLogText; // @synthesize unfilteredLogText=_unfilteredLogText;
@property __weak NSPopUpButton *logsPopUp; // @synthesize logsPopUp=_logsPopUp;
@property DVTSourceTextView *textView; // @synthesize textView=_textView;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
- (void)showLogInFinder:(id)arg1;
- (void)decreaseFontSize:(id)arg1;
- (void)increaseFontSize:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)dismissFindBar:(id)arg1 andRestoreSelection:(BOOL)arg2;
- (void)hideFindBar;
- (void)dvtFindBar:(id)arg1 didUpdateResults:(id)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateCurrentResult:(id)arg2;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 from:(id)arg3 to:(id)arg4;
- (id)_URLForDocumentLocations;
- (void)highlightMatchRange:(struct _NSRange)arg1;
- (void)useSelectionForFind:(id)arg1;
- (void)findPrevious:(id)arg1;
- (void)findNext:(id)arg1;
- (void)find:(id)arg1;
- (void)showFindBar;
- (void)makeFindBar;
- (id)representedObjectForGeniusResultsPreviousDocumentLocation:(id)arg1;
- (id)assistantDocument;
- (void)showDiagnostic:(id)arg1;
- (void)loadDiagnosticFromURL:(id)arg1;
- (void)updateLogsPopUpWithNavigable:(id)arg1;
- (void)_themeFontsAndColorsUpdated;
- (void)viewDidLoad;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

