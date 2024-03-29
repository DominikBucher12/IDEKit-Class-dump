//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/NSTableViewDataSource-Protocol.h>
#import <IDEKit/NSTableViewDelegate-Protocol.h>

@class DVTStackBacktrace, DVTTableView, IDEContainer, IDENavigableItemCoordinator, IDENavigatorDataCell, IDEWorkspace, NSButton, NSImageCell, NSMutableArray, NSString, NSWindow;
@protocol IDEBlueprintProvider;

@interface IDEUpgradeTaskWindowController : NSWindowController <NSTableViewDataSource, NSTableViewDelegate, DVTInvalidation>
{
    DVTTableView *_upgradeTable;
    NSButton *_closeButton;
    NSButton *_upgradeButton;
    NSButton *_skipButton;
    IDENavigatorDataCell *_groupCell;
    NSImageCell *_imageCell;
    IDENavigatorDataCell *_itemCell;
    IDENavigatorDataCell *_nilTaskCell;
    NSMutableArray *_items;
    IDEWorkspace *_workspace;
    IDEContainer *_container;
    id <IDEBlueprintProvider> _blueprintProvider;
    BOOL _displayingResults;
    IDENavigableItemCoordinator *_navigableItemCoordinator;
    CDUnknownBlockType _completionBlock;
    NSWindow *_hostWindow;
}

+ (id)_nilUpgradeTask;
+ (id)_containerContextForExtension:(id)arg1 container:(id)arg2;
+ (id)_blueprintContextForExtension:(id)arg1 blueprint:(id)arg2;
+ (id)_upgradeTasksProviderExtensionForContainer:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) BOOL displayingResults; // @synthesize displayingResults=_displayingResults;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)_canSelectTaskForRow:(long long)arg1;
- (BOOL)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)performChanges:(id)arg1;
- (void)clickedCheckbox:(id)arg1;
- (BOOL)_isNothingSelected;
- (void)_endSheetWithReturnCode:(id)arg1;
- (void)windowDidLoad;
- (BOOL)_loadAllUpgradeTasks;
- (id)_navigableItemForNilUpgradeTask;
- (void)_updateTasksSheetDidEndWithReturnCode:(long long)arg1;
- (void)beginSheetForWindow:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithWorkspace:(id)arg1 container:(id)arg2 blueprintProvider:(id)arg3;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

