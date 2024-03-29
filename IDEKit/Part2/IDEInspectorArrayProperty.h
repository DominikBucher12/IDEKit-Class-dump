//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

#import <IDEKit/DVTTableViewDelegate-Protocol.h>
#import <IDEKit/NSTableViewDataSource-Protocol.h>

@class DVTBorderedView, DVTGradientImageButton, DVTTableView, IDEControlGroup, IDEInspectorKeyPath, NSArray, NSString;

@interface IDEInspectorArrayProperty : IDEInspectorProperty <NSTableViewDataSource, DVTTableViewDelegate>
{
    IDEInspectorKeyPath *_defaultValueKeyPath;
    IDEInspectorKeyPath *_titleKeyPath;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_enabledKeyPath;
    long long _insertionBehavior;
    NSArray *_reflectedValues;
    NSString *_defaultValue;
    NSString *_placeholder;
    NSString *_privateDragType;
    BOOL _readonly;
    DVTTableView *_itemsTableView;
    IDEControlGroup *_controlGroup;
    DVTBorderedView *_controlBar;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_removeButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DVTGradientImageButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) DVTGradientImageButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) DVTBorderedView *controlBar; // @synthesize controlBar=_controlBar;
@property(retain, nonatomic) IDEControlGroup *controlGroup; // @synthesize controlGroup=_controlGroup;
@property(retain, nonatomic) DVTTableView *itemsTableView; // @synthesize itemsTableView=_itemsTableView;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)removeSelectedRows:(id)arg1;
- (BOOL)canRemoveSelectedRows;
- (void)addRow:(id)arg1;
- (long long)insertionIndexArray:(id)arg1 givenSelectedIndexes:(id)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)editItem:(id)arg1;
- (void)updateRemoveButtonEnabledState;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)loadView;
- (double)baseline;
- (void)pushValuesToModel:(id)arg1;
- (void)setupViewAfterLoading;
- (id)view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

