//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/NSOutlineViewDataSource-Protocol.h>
#import <IDEKit/NSOutlineViewDelegate-Protocol.h>

@class DVTOutlineView, DVTReplacementView, IDEEditor, IDETestReportStateSaving, NSArray, NSMapTable, NSMutableOrderedSet, NSString, NSURL;
@protocol IDECoverageReportFunctionFetcher, IDECoverage_DeviceHelper, IDECoverage_RootObject;

@interface IDECoverageReportViewController : IDEViewController <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    NSMutableOrderedSet *_targetsFilteredByFilterField;
    NSMutableOrderedSet *_filesFilteredByFilterField;
    NSMutableOrderedSet *_methodsFilteredByFilterField;
    NSMapTable *_cachedFilteredItemsBasedOnCoverageDifferencesAndTestBundleCheckbox;
    IDETestReportStateSaving *_stateSavingHelper;
    BOOL _disableStateSaving;
    BOOL _disableJumpToSource;
    NSURL *_documentURL;
    id <IDECoverage_RootObject> _rootObject;
    id <IDECoverage_DeviceHelper> _deviceHelper;
    NSArray *_currentSelectedDocumentLocations;
    id <IDECoverageReportFunctionFetcher> _functionFetcher;
    CDUnknownBlockType _fetchFunctionsForFile;
    NSString *_filterString;
    IDEEditor *_hostEditor;
    DVTOutlineView *_outlineView;
    NSArray *_deviceColumns;
    long long _coverageBarColumnIndex;
    DVTReplacementView *_scopeBarReplacementView;
}

+ (void)jumpToSourceCodeForItem:(id)arg1 fromEditor:(id)arg2;
+ (void)initialize;
- (void).cxx_destruct;
@property __weak DVTReplacementView *scopeBarReplacementView; // @synthesize scopeBarReplacementView=_scopeBarReplacementView;
@property long long coverageBarColumnIndex; // @synthesize coverageBarColumnIndex=_coverageBarColumnIndex;
@property(retain, nonatomic) NSArray *deviceColumns; // @synthesize deviceColumns=_deviceColumns;
@property __weak DVTOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(nonatomic) BOOL disableJumpToSource; // @synthesize disableJumpToSource=_disableJumpToSource;
@property(nonatomic) __weak IDEEditor *hostEditor; // @synthesize hostEditor=_hostEditor;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
@property(copy, nonatomic) CDUnknownBlockType fetchFunctionsForFile; // @synthesize fetchFunctionsForFile=_fetchFunctionsForFile;
@property __weak id <IDECoverageReportFunctionFetcher> functionFetcher; // @synthesize functionFetcher=_functionFetcher;
@property(retain) NSArray *currentSelectedDocumentLocations; // @synthesize currentSelectedDocumentLocations=_currentSelectedDocumentLocations;
@property(retain, nonatomic) id <IDECoverage_DeviceHelper> deviceHelper; // @synthesize deviceHelper=_deviceHelper;
@property(retain, nonatomic) id <IDECoverage_RootObject> rootObject; // @synthesize rootObject=_rootObject;
@property(retain, nonatomic) NSURL *documentURL; // @synthesize documentURL=_documentURL;
- (void)restoreFilterField;
- (void)_filterOutlineAndRefresh;
- (id)_filterItemsBasedOnCoverageDifferencesAndTestBundleCheckboxes:(id)arg1 contextItem:(id)arg2;
- (id)testBundleExtension;
- (id)allFiles;
- (void)viewWillDisappear;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (void)_stashSelection:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (id)indexPathForOutlineItem:(id)arg1;
- (id)indexPathForCoverageMethod:(id)arg1 inFile:(id)arg2 inTarget:(id)arg3;
- (id)indexPathForCoverageFile:(id)arg1 inTarget:(id)arg2;
- (id)indexPathForCoverageTarget:(id)arg1;
- (void)doubleClickInTable:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)_deviceViewForItem:(id)arg1 column:(id)arg2;
- (id)lineCoverageOfDevicesNotMatchingID:(id)arg1 inCoverageItem:(id)arg2;
- (id)coverageForDeviceWithIdentifier:(id)arg1 inCoverageItem:(id)arg2;
- (id)_viewForChangeColumnForItem:(id)arg1;
- (id)_percentFormatter;
- (id)_viewForBarColumnForItem:(id)arg1;
- (id)_viewForNodeColumnForItem:(id)arg1;
- (void)revealClickedItemInProjectNavigator:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)iconForTargetOrFileWithTitle:(id)arg1;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)outlineView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (id)_methodsForFile:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *rootItems;
- (void)reloadOutlineView;
- (void)_restoreSavedState;
- (void)_mutateSelectedDocumentLocationsToPrimeAssisantEditorGeniusResultsFinder;
- (void)_refreshColumns;
- (void)navigateToTestLogErrors;
- (void)refreshOutline;
- (id)scopeBar;
- (void)primitiveInvalidate;
- (void)loadView;
@property(readonly, nonatomic) BOOL showDeviceDifferencesDefault;
@property(readonly, nonatomic) BOOL showTestBundlesDefault;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

