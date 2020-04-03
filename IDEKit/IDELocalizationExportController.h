//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

#import <IDEKit/IDELocalizationController-Protocol.h>
#import <IDEKit/NSTableViewDelegate-Protocol.h>

@class DVTStackBacktrace, IDELocalizationExportAction, IDELocalizationExporter, NSArray, NSArrayController, NSButton, NSImageView, NSOutlineView, NSPanel, NSProgressIndicator, NSSavePanel, NSStackView, NSString, NSTextField, NSTreeController;

@interface IDELocalizationExportController : DVTViewController <NSTableViewDelegate, IDELocalizationController>
{
    BOOL _includeNonLocalizedResources;
    BOOL _complete;
    IDELocalizationExportAction *_action;
    NSPanel *_selectScreenshotsPanel;
    NSArrayController *_targetLanguagesController;
    NSTreeController *_testEventsTreeController;
    NSProgressIndicator *_exportPanelFetchingActivitiesResultsProgressIndicator;
    NSTextField *_summaryLocalizedActivitiesTextField;
    NSButton *_customizeScreenshotsOptionsButton;
    NSButton *_includeScreenshotsAndStringsButton;
    NSOutlineView *_screenshotsOutlineView;
    NSStackView *_warningStackView;
    NSTextField *_warningTextField;
    NSImageView *_warningImageView;
    NSString *_exportFileType;
    IDELocalizationExporter *_worker;
    NSSavePanel *_savePanel;
    NSArray *_localizedActivitiesData;
}

+ (id)keyPathsForValuesAffectingCanIncludeNonLocalizedResources;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *localizedActivitiesData; // @synthesize localizedActivitiesData=_localizedActivitiesData;
@property(retain) NSSavePanel *savePanel; // @synthesize savePanel=_savePanel;
@property BOOL complete; // @synthesize complete=_complete;
@property(retain) IDELocalizationExporter *worker; // @synthesize worker=_worker;
@property BOOL includeNonLocalizedResources; // @synthesize includeNonLocalizedResources=_includeNonLocalizedResources;
@property(copy) NSString *exportFileType; // @synthesize exportFileType=_exportFileType;
@property __weak NSImageView *warningImageView; // @synthesize warningImageView=_warningImageView;
@property __weak NSTextField *warningTextField; // @synthesize warningTextField=_warningTextField;
@property __weak NSStackView *warningStackView; // @synthesize warningStackView=_warningStackView;
@property __weak NSOutlineView *screenshotsOutlineView; // @synthesize screenshotsOutlineView=_screenshotsOutlineView;
@property __weak NSButton *includeScreenshotsAndStringsButton; // @synthesize includeScreenshotsAndStringsButton=_includeScreenshotsAndStringsButton;
@property __weak NSButton *customizeScreenshotsOptionsButton; // @synthesize customizeScreenshotsOptionsButton=_customizeScreenshotsOptionsButton;
@property __weak NSTextField *summaryLocalizedActivitiesTextField; // @synthesize summaryLocalizedActivitiesTextField=_summaryLocalizedActivitiesTextField;
@property __weak NSProgressIndicator *exportPanelFetchingActivitiesResultsProgressIndicator; // @synthesize exportPanelFetchingActivitiesResultsProgressIndicator=_exportPanelFetchingActivitiesResultsProgressIndicator;
@property(retain) NSTreeController *testEventsTreeController; // @synthesize testEventsTreeController=_testEventsTreeController;
@property(retain) NSArrayController *targetLanguagesController; // @synthesize targetLanguagesController=_targetLanguagesController;
@property __weak NSPanel *selectScreenshotsPanel; // @synthesize selectScreenshotsPanel=_selectScreenshotsPanel;
@property(retain, nonatomic) IDELocalizationExportAction *action; // @synthesize action=_action;
- (void)editScreenshotOptionsSave:(id)arg1;
- (void)editScreenshotOptions:(id)arg1;
- (id)screenshotsSummaryString;
@property(readonly, copy) NSString *description;
- (void)cancel;
- (void)startLocalizationOperationForWorkspace:(id)arg1 buildParameters:(id)arg2;
@property(readonly) BOOL canIncludeNonLocalizedResources;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)selectedOneLocalizationAction:(id)arg1;
- (void)_updateScreenshots;
- (void)_updateDestinationLanguages;
- (id)_configuredSavePanel;
- (void)restoreUserChoices;
- (void)saveUserChoices;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

