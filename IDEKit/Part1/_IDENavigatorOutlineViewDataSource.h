//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/NSOutlineViewDataSource-Protocol.h>
#import <IDEKit/NSOutlineViewDelegate-Protocol.h>

@class DVTNotificationToken, DVTStackBacktrace, DVTWeakInterposer, IDENICFilterProxy, IDENavigableItemFilter, IDENavigatorOutlineView, NSArray, NSHashTable, NSMapTable, NSString;

@interface _IDENavigatorOutlineViewDataSource : NSObject <NSOutlineViewDataSource, NSOutlineViewDelegate, DVTInvalidation>
{
    id _expandedItems;
    id _rootItems;
    DVTNotificationToken *_navigableItemGraphObserver;
    DVTNotificationToken *_navigableItemPropertyObserver;
    DVTNotificationToken *_forgottenNavigableItemsObserver;
    NSMapTable *_navItemChangeCountByItem;
    IDENICFilterProxy *_coordinatorFilteredItems;
    unsigned long long _numberOfRowsBeforeExpandOrCollapse;
    id _realObject;
    DVTWeakInterposer *_realObjectInterposer;
    double _currentModifiedExpansionTimestamp;
    IDENavigableItemFilter *_lastFilter;
    struct {
        unsigned int realDataSourceRespondsTo_child_ofItem:1;
        unsigned int realDataSourceRespondsTo_childItemsForItem:1;
        unsigned int realDataSourceRespondsTo_isItemExpandable:1;
        unsigned int realDataSourceRespondsTo_numberOfChildrenOfItem:1;
        unsigned int realDataSourceRespondsTo_objectValueForTableColumn_byItem:1;
        unsigned int realDataSourceRespondsTo_setObjectValue_forTableColumn_byItem:1;
        unsigned int realDelegateRespondsTo_willDisplayCell_forTableColumn_item:1;
        unsigned int realDelegateRespondsTo_selectionIndexesForProposedSelection:1;
        unsigned int realDelegateRespondsTo_dataCell_forTableColumn_item:1;
        unsigned int realDelegateRespondsTo_ItemDidExpand:1;
        unsigned int realDelegateRespondsTo_ItemDidCollapse:1;
        unsigned int realDelegateRespondsTo_heightOfRowByItem:1;
        unsigned int realDelegateRespondsTo_shouldShowOutlineCellForItem:1;
        unsigned int realDelegateRespondsTo_shouldExpandItem:1;
        unsigned int realDelegateRespondsTo_shouldCollapseItem:1;
        unsigned int realDelegateRespondsTo_outlineViewSelectionDidChange:1;
        unsigned int realDelegateRespondsTo_toolTipForCell:1;
        unsigned int realDelegateRespondsTo_isGroupHeaderItem:1;
        unsigned int realDelegateRespondsTo_shouldShowCellExpansion:1;
        unsigned int notifyingDelegateOfExpandOrCollapse:1;
        unsigned int clearingExpandedItems:1;
        unsigned int accessingChildItemsForItem:1;
        unsigned int _pad:8;
    } _idenovdsFlags;
    IDENavigatorOutlineView *_outlineView;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain) IDENavigatorOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (double)_outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldCollapseItem:(id)arg2;
- (void)outlineViewItemDidExpand:(id)arg1;
- (BOOL)_shouldExpandCollapseSiblingsOfItem:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldExpandItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
@property(readonly) NSHashTable *expandedItems;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (BOOL)outlineView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)childItemsForItem:(id)arg1;
- (void)_refreshFilter;
@property(retain) id realObject;
@property(copy) NSArray *rootItems;
- (void)_processNavigableItemDidForgetNotification:(id)arg1;
- (void)_processNavigableItemGraphChangeNotification:(id)arg1;
- (void)_clearExpandedItems;
- (BOOL)_notifyingRealDelegateOfExpandOrCollapse;
- (id)objectInOutlineViewDataSourceRootItemsAtIndex:(long long)arg1;
- (long long)countOfOutlineViewDataSourceRootItems;
- (void)primitiveInvalidate;
- (id)initWithOutlineView:(id)arg1 realObject:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

