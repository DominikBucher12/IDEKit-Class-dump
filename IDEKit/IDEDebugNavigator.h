//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDENavigator.h>

#import <IDEKit/NSMenuDelegate-Protocol.h>

@class DVTGradientImageButton, DVTNotificationToken, DVTObservingToken, IDENavigableItem, IDENavigatorOutlineView, IDENavigatorSearchFilterControlBar, NSArray, NSLayoutConstraint, NSMapTable, NSMenuItem, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSView;

@interface IDEDebugNavigator : IDENavigator <NSMenuDelegate>
{
    IDENavigatorOutlineView *_outlineView;
    DVTGradientImageButton *_autoCompressMinButton;
    NSLayoutConstraint *_filterContainerViewHeight;
    NSMenuItem *_helpMenuItem;
    NSMenuItem *_copyMenuItem;
    IDENavigatorSearchFilterControlBar *_filterControl;
    NSMapTable *_processHeaderCellViewsForContentDelegateTable;
    DVTGradientImageButton *_gaugesToggleButton;
    IDENavigableItem *_itemToSelectBasedOnItemBeingEdited;
    NSMutableArray *_cachedNavigableDebugItems;
    NSMapTable *_contentDelegateForIdentifierTable;
    DVTNotificationToken *_coordinatorWillForgetObservingToken;
    DVTObservingToken *_rootNavigableChildItemsObservingToken;
    DVTObservingToken *_allFinishedObservingToken;
    DVTObservingToken *_coalescedStateObservingToken;
    DVTNotificationToken *_selectedObjectsDidChangeObservingToken;
    BOOL _isInUserDirectSelection;
    BOOL _isInOutlineViewProcessPendingChanges;
    BOOL _showGaugesNotSetToSupportMessageTrace;
    NSMutableDictionary *_cachedStateDictionary;
    NSMutableDictionary *_transientStates;
    NSArray *_archivableNavigableItemsToSelect;
    NSMutableSet *_processesWithClosedGauges;
    NSMutableArray *_selectedObjects;
    BOOL _showsCompressedStackFrames;
    BOOL _showsOnlyInterestingContent;
    BOOL _showsOnlyRunningBlocks;
    NSString *_filterString;
    unsigned long long _compressionValue;
    NSView *_filterContainerView;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)createProcessActionPopUpMenuItemWithPopUpImage:(id)arg1 action:(SEL)arg2;
+ (id)createProcessActionPopUpMenuItemWithPopUpImage:(id)arg1 menuItemImage:(id)arg2 action:(SEL)arg3;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingNavigatorFilterContextsForFunctionBar;
- (void).cxx_destruct;
@property __weak NSView *filterContainerView; // @synthesize filterContainerView=_filterContainerView;
@property(nonatomic) BOOL showsOnlyRunningBlocks; // @synthesize showsOnlyRunningBlocks=_showsOnlyRunningBlocks;
@property(nonatomic) BOOL showsOnlyInterestingContent; // @synthesize showsOnlyInterestingContent=_showsOnlyInterestingContent;
@property(nonatomic) BOOL showsCompressedStackFrames; // @synthesize showsCompressedStackFrames=_showsCompressedStackFrames;
@property(readonly, nonatomic) NSMutableDictionary *transientStates; // @synthesize transientStates=_transientStates;
@property(readonly, nonatomic) unsigned long long compressionValue; // @synthesize compressionValue=_compressionValue;
@property(readonly, nonatomic) BOOL isInUserDirectSelection; // @synthesize isInUserDirectSelection=_isInUserDirectSelection;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
@property(readonly) IDENavigatorOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (struct CGRect)frameOfCellForRow:(unsigned long long)arg1 proposedRect:(struct CGRect)arg2;
- (void)_updateGaugesButtonToolTip:(id)arg1;
- (void)_drawSeparatorForProcessItem:(id)arg1;
- (void)_toggleGaugesVisibility:(id)arg1;
- (void)_showsGauges:(BOOL)arg1 andExpandItem:(id)arg2 shouldAnimate:(BOOL)arg3;
- (BOOL)_uiShouldReact;
- (void)_navigableItemCoordinatorProcessPendingChanges;
- (BOOL)_writeRepresentedObjects:(id)arg1 toPasteboard:(id)arg2;
- (void)_handleCoordinaterWillForgetItems:(id)arg1;
- (void)_handleLaunchSessionsChanged;
- (id)_navigableItemsToSelect;
- (id)_indexesForItems:(id)arg1;
- (void)_openSelectedNavigableItemsWithEventType:(unsigned long long)arg1;
- (void)_changeToNewLaunchSessionBeforeOpeningSelectedItem:(id)arg1;
- (id)_representedObjectForSelectedRow;
- (void)_recordSelectedRowsForRestoration;
- (void)_recordSelectedArchivableNavigableItems:(id)arg1;
- (void)contentDelegateFinished:(id)arg1;
- (id)processActionPopUpButtonForContentDelegate:(id)arg1;
- (void)_addSpacerToTableCellView:(id)arg1;
- (void)_addProcessActionPopUpButtonToTableCellView:(id)arg1 withNavigableContentDelegate:(id)arg2;
- (void)_addGaugesToggleButtonToTableCellView:(id)arg1;
- (void)recordPersistenceStateChanges:(id)arg1;
- (void)restorePreviousTransientStates;
- (id)expandedItemTokens;
- (void)restoreExpandedAndSelectionStates;
- (void)_delayedRestoreExpandedAndSelectionStates;
- (void)_expandItemsForTokens:(id)arg1;
- (void)restoreExpandedStatesForTokens:(id)arg1;
- (void)restoreExpandedStates;
- (void)restoreSelectedStatesAndScrollToSelection:(BOOL)arg1;
- (void)scrollToSelection;
- (void)_scrollToIndexes:(id)arg1;
- (id)_navigableItemArchivableRepresentationsForNavigableItems:(id)arg1;
- (void)selectNavigableItems:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)setStoredCompressionValue:(id)arg1;
- (void)_updateCompressionControls;
- (void)_primitiveSetShowsCompressedStackFramesWithKVO:(BOOL)arg1;
- (id)storedCompressionValue;
- (id)_contentDelegateForRightClickedItems;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (id)_processNameForItem:(id)arg1;
- (BOOL)_shouldExpandItemAsResultOfOptionClick:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldExpandItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)_handleUserDirectDeletion;
- (BOOL)_handleUserDirectMoveUpOrDown:(BOOL)arg1;
- (BOOL)_handleUserDirectShiftKeyMoveUpOrDown:(BOOL)arg1;
- (id)_contentDelegateForRepresentedObject:(id)arg1;
- (id)_contentDelegateFromProcessIfConforming:(id)arg1;
- (id)contentDelegateForDebugNavigable:(id)arg1;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (id)_tableCellViewToHostGaugeTrayItem:(id)arg1 withOutlineView:(id)arg2 tableColumn:(id)arg3 item:(id)arg4;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (void)outlineView:(id)arg1 didRemoveRowView:(id)arg2 forRow:(long long)arg3;
- (void)outlineView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (BOOL)_representedObjectIsWaitingToAttach:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)_configureSeparatorLineDrawingForTableRowView:(id)arg1 withItem:(id)arg2;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (id)_processHeaderTableCellViewForItem:(id)arg1 withOutlineView:(id)arg2 contentDelegate:(id)arg3;
- (void)_bindImageAndTitleOfTableViewCell:(id)arg1 contentDelegate:(id)arg2;
- (id)_genericTableCellViewForNavItem:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemWillExpand:(id)arg1;
- (id)_expandedItemTokens;
- (id)_tokenForPersistingRepresentedObject:(id)arg1;
- (id)_tokenForExpandedRepresentedObject:(id)arg1;
- (id)_allGaugeDataSourcesForForProcess:(id)arg1;
- (id)_dataSourceForGaugeDocumentLocationNavItem:(id)arg1;
- (void)_makeNavItemReflectShowGaugesStoredState:(id)arg1;
@property(readonly, copy) NSArray *navigableDebugItems;
- (BOOL)delegateFirstResponder;
- (id)domainIdentifier;
- (id)_selectedRepresentedObjects;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)_canCopyOrDeleteSelectedObjects:(SEL)arg1;
- (void)delete:(id)arg1;
- (void)copy:(id)arg1;
- (void)viewWillUninstall;
- (void)updateOutputSelection;
- (void)_addCoalescedStateObserver;
- (void)viewDidInstall;
- (void)_debugNavigatorResetNavigableItemCoordinator;
- (void)_installFilterBarRepresentedObject:(id)arg1;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)openDoubleClickedNavigableItemsAction:(id)arg1;
- (void)openClickedNavigableItemAction:(id)arg1;
- (void)openSelectedNavigableItemsKeyAction:(id)arg1;
- (id)itemToSelectBasedOnItemBeingEdited;
- (BOOL)prefersStrongSelection;
- (void)_updateSelectionToReflectActivelyEditedItem;
- (void)focusedEditorDidSelectItem;
- (void)revealArchivedNavigableItems:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)_toggleButtonsFromContainer:(id)arg1;
- (id)_navigatorFilterControlBarFromContainer:(id)arg1;
- (id)_visitSubviewsOfView:(id)arg1 lookingForViewClass:(Class)arg2;
- (id)_dfrImageForImageName:(id)arg1;
- (id)_filterToggleContextsForControlBar:(id)arg1;
- (id)navigatorFilterContextsForFunctionBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSMutableArray *mutableSelectedObjects; // @dynamic mutableSelectedObjects;
@property(copy) NSArray *selectedObjects; // @dynamic selectedObjects;
@property(readonly) Class superclass;

@end

