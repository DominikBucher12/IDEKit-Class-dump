//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTGradientImageButton, DVTGradientImagePopUpButton, DVTObservingToken, DVTTableView, IDEControlGroup, IDEWorkspace, NSArrayController, NSButton, NSSearchField, NSString, NSWindow;
@protocol IDEClientTrackingToken;

@interface IDEManageRunContextsSheetController : IDEViewController
{
    NSWindow *_sheetWindow;
    DVTBorderedView *_tableBorderView;
    NSArrayController *_runContextsArrayController;
    NSArrayController *_customDataStoresArrayController;
    DVTTableView *_tableView;
    NSButton *_editButton;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_deleteButton;
    DVTGradientImagePopUpButton *_actionPopUpButton;
    IDEControlGroup *_controlGroup;
    NSSearchField *_schemesSearchField;
    NSWindow *_hostWindow;
    IDEWorkspace *_workspace;
    BOOL _didSheetEnd;
    DVTObservingToken *_selectionObserverToken;
    id <IDEClientTrackingToken> _clientTrackingToken;
    NSString *_filterString;
}

+ (id)keyPathsForValuesAffectingShouldAutocreateSchemes;
+ (void)runSheetForWindow:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
- (void)windowDidResize:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)checkToggleAction:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)unshareSchemesAction:(id)arg1;
- (void)shareSchemesAction:(id)arg1;
- (void)hideSchemesAction:(id)arg1;
- (void)showSchemesAction:(id)arg1;
- (void)editAction:(id)arg1;
- (void)_updateEditEnabledState;
- (void)convertToTestPlansAction:(id)arg1;
- (void)exportAction:(id)arg1;
- (void)importAction:(id)arg1;
- (void)duplicateAction:(id)arg1;
- (void)newSchemeAction:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)sheetOKAction:(id)arg1;
- (void)autocreateSchemesAction:(id)arg1;
- (void)cancelOperation:(id)arg1;
@property BOOL shouldAutocreateSchemes;
@property(retain) IDEWorkspace *workspace;
- (void)primitiveInvalidate;
- (void)_manageRunContextsSheetDidEndWithReturnCode:(long long)arg1;
- (void)_beginSheetForWindow:(id)arg1;
- (void)loadView;

@end

