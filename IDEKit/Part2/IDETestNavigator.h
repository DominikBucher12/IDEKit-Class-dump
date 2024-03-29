//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEOutlineBasedNavigator.h>

#import <IDEKit/DVTOutlineViewDelegate-Protocol.h>
#import <IDEKit/DVTTableRowViewMouseInsideDelegate-Protocol.h>
#import <IDEKit/IDETestingSelection-Protocol.h>
#import <IDEKit/NSMenuDelegate-Protocol.h>
#import <IDEKit/NSOutlineViewDelegate-Protocol.h>

@class DVTScopeBarView, IDENavigatorOutlineView, IDESelection, IDEWorkspaceTabController, NSDictionary, NSLayoutConstraint, NSMutableArray, NSMutableSet, NSPopUpButton, NSSet, NSString, NSTextField;
@protocol IDETestCollection;

@interface IDETestNavigator : IDEOutlineBasedNavigator <DVTTableRowViewMouseInsideDelegate, NSOutlineViewDelegate, NSMenuDelegate, IDETestingSelection, DVTOutlineViewDelegate>
{
    NSDictionary *_previouslyRestoredStateDictionary;
    BOOL _restoringState;
    NSMutableSet *_expandedItems;
    NSDictionary *_expandedItemNamesBeforeFiltering;
    NSMutableSet *_collapsedItems;
    NSDictionary *_collapsedItemNamesBeforeFiltering;
    NSMutableArray *_stateChangeObservingTokens;
    NSString *_testNamePatternString;
    BOOL _mouseIsWithinStatusRect;
    long long _rowForWhichRunWasPressed;
    BOOL _showFailingTestsOnly;
    BOOL _showSchemeTestablesOnly;
    BOOL _isRunningTests;
    long long _loadingProgress;
    NSPopUpButton *_activeTestPlanPopUpButton;
    NSLayoutConstraint *_activeTestPlanPopUpButtonWidthConstraint;
    NSTextField *_testPlanLabel;
    DVTScopeBarView *_scopeBar;
    NSLayoutConstraint *_scopeBarHeightConstraint;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (void)initialize;
- (void).cxx_destruct;
@property BOOL isRunningTests; // @synthesize isRunningTests=_isRunningTests;
@property(retain, nonatomic) NSString *testNamePatternString; // @synthesize testNamePatternString=_testNamePatternString;
@property(nonatomic) BOOL showSchemeTestablesOnly; // @synthesize showSchemeTestablesOnly=_showSchemeTestablesOnly;
@property(nonatomic) BOOL showFailingTestsOnly; // @synthesize showFailingTestsOnly=_showFailingTestsOnly;
@property(retain) NSLayoutConstraint *scopeBarHeightConstraint; // @synthesize scopeBarHeightConstraint=_scopeBarHeightConstraint;
@property(retain) DVTScopeBarView *scopeBar; // @synthesize scopeBar=_scopeBar;
@property(retain) NSTextField *testPlanLabel; // @synthesize testPlanLabel=_testPlanLabel;
@property(retain) NSLayoutConstraint *activeTestPlanPopUpButtonWidthConstraint; // @synthesize activeTestPlanPopUpButtonWidthConstraint=_activeTestPlanPopUpButtonWidthConstraint;
@property(retain) NSPopUpButton *activeTestPlanPopUpButton; // @synthesize activeTestPlanPopUpButton=_activeTestPlanPopUpButton;
@property(readonly) long long loadingProgress; // @synthesize loadingProgress=_loadingProgress;
- (void)tableRowView:(id)arg1 mouseInside:(BOOL)arg2;
- (void)_handleRunTestButtonPressed:(id)arg1;
- (void)_updateStatusViewForTableCellView:(id)arg1;
- (void)_configureStandardTableViewCell:(id)arg1 toNavItemsRepresentedObject:(id)arg2;
- (id)_tableCellViewForTestNavItem:(id)arg1;
- (id)_tableCellViewForTestableNavItem:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (id)_summaryOfTestable:(id)arg1;
- (int)_countOfTestsFor:(id)arg1 excluded:(int *)arg2 failed:(int *)arg3 inSchemeAction:(id)arg4;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (id)filterButtonAccessibilityDescription;
- (id)filterButtonToolTip;
- (id)filterButtonMenu;
- (void)_updateFilterButtonMenu:(id)arg1;
- (id)selectedTestable;
- (void)menuNeedsUpdate:(id)arg1;
- (id)_contextForTestingHelper;
@property(readonly) NSString *selectionUIContext;
@property(readonly) id <IDETestCollection> selectedTests;
- (void)_updateFilter;
- (void)_updateTableCellViewsUIState:(id)arg1;
- (void)_updateTableCellViewsUIStateForNavItem:(id)arg1;
- (void)_updateSchemeFilter;
- (void)setFilter:(id)arg1;
- (id)filterDefinitionIdentifier;
- (void)focusedEditorDidSelectItem;
- (void)revealTestsAndTestables:(id)arg1;
- (void)setVisibleRectString:(id)arg1;
- (id)visibleRectString;
- (id)_selectedItemsAsNameTree;
- (void)_setSelectedItemsFromNameTree:(id)arg1;
- (void)_setExpandedItems:(id)arg1;
- (void)_setCollapsedItems:(id)arg1;
- (void)_expandAllEnabledTestables;
- (unsigned long long)_itemDepth:(id)arg1;
- (id)_itemsBeforeFilteringAsNameTreeIn:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (BOOL)_restoreExpandedAndCollapsedItemsIfStateExists;
- (BOOL)isLoadingComplete;
- (void)configureStateSavingObservers;
- (id)openSpecifierForNavigableItem:(id)arg1 error:(id *)arg2;
- (BOOL)_itemHasSubTests:(id)arg1;
- (id)_localizedString:(id)arg1;
- (void)_updateEnablednessForTableCellView:(id)arg1;
- (void)viewWillUninstall;
- (void)manageTestPlansItemSelected:(id)arg1;
- (void)newTestPlanItemSelected:(id)arg1;
- (void)editTestPlanItemSelected:(id)arg1;
- (void)changeActiveTestPlan:(id)arg1;
- (void)rebuildActiveTestPlanPopUpButtonMenu;
- (void)viewDidInstall;
- (void)loadView;
- (void)_updateEmptyContentPlaceholders;
- (void)primitiveInvalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)domainIdentifier;

// Remaining properties
@property(copy) NSSet *collapsedItems; // @dynamic collapsedItems;
@property(readonly, copy) IDESelection *contextMenuSelection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy) NSSet *expandedItems; // @dynamic expandedItems;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSMutableSet *mutableCollapsedItems; // @dynamic mutableCollapsedItems;
@property(readonly, copy) NSMutableSet *mutableExpandedItems; // @dynamic mutableExpandedItems;
@property(retain) IDENavigatorOutlineView *outlineView; // @dynamic outlineView;
@property(readonly, copy) IDESelection *outputSelection;
@property(readonly) Class superclass;
@property(readonly, nonatomic) IDEWorkspaceTabController *workspaceTabController;

@end

