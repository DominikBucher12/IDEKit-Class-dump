//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTGradientImageButton, IDEAlertsView, IDEControlGroup, NSArray, NSCell, NSMutableArray, NSPointerArray, NSScrollView, NSTableView;

@interface IDEAlertsPrefsPaneController : IDEViewController
{
    DVTBorderedView *_masterBorderView;
    NSScrollView *_alertsScrollView;
    IDEAlertsView *_alertsView;
    DVTBorderedView *_detailBorderView;
    NSTableView *_tableView;
    DVTBorderedView *_controlGroupContainer;
    IDEControlGroup *_controlGroup;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_removeButton;
    NSPointerArray *_alertEvents;
    NSCell *_dividerCell;
    NSMutableArray *_observationTokens;
    NSMutableArray *_customObservationTokens;
    BOOL _ignoreNextEdit;
    NSArray *_customAlertEvents;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *customAlertEvents; // @synthesize customAlertEvents=_customAlertEvents;
- (void)beginEditingFromClick:(id)arg1;
- (void)removeCustomAlertEvent:(id)arg1;
- (void)addCustomAlertEvent:(id)arg1;
- (void)refreshKeyBindings;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 setKeyboardShortcut:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)loadView;
- (id)view;
- (void)awakeFromNib;
- (void)reloadTableData;
- (void)restoreSelection:(id)arg1;

@end

