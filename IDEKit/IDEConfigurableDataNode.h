//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEConfigurableDataSource, NSArray, NSImage, NSMutableArray, NSOutlineView;
@protocol XCEDataNodeAdapterP;

@interface IDEConfigurableDataNode : NSObject
{
    IDEConfigurableDataNode *_parent;
    NSMutableArray *_children;
    id <XCEDataNodeAdapterP> _adapter;
    IDEConfigurableDataSource *_dataSource;
    id _data;
    NSImage *_cachedImage;
    double _cachedRowHeight;
    id _custom;
    struct {
        unsigned int cleared:1;
        unsigned int childrenAreSorted:1;
        unsigned int cachedRowHeightDependsOnWidth:1;
        unsigned int willBeRemoved:1;
        unsigned int storedExpanded:1;
        unsigned int storedCollapsed:1;
        unsigned int storedSelected:1;
        unsigned int storedExpandedByDefault:1;
        unsigned int customFlag1:1;
        unsigned int customFlag2:1;
        unsigned int customFlag3:1;
        unsigned int adapterRespondsTo_clear:1;
        unsigned int adapterRespondsTo_representedFilename:1;
        unsigned int adapterRespondsTo_toolTipForTableColumn:1;
        unsigned int adapterRespondsTo_dataNodeConfigure:1;
        unsigned int adapterRespondsTo_objectValueForTableColumn:1;
        unsigned int adapterRespondsTo_setObjectValue:1;
        unsigned int adapterRespondsTo_dataNodeImage:1;
        unsigned int adapterRespondsTo_willDisplayCell:1;
        unsigned int adapterRespondsTo_dataCellForTableColumn:1;
        unsigned int adapterRespondsTo_shouldShowOutlineCell:1;
        unsigned int adapterRespondsTo_isGroupItem:1;
        unsigned int adapterRespondsTo_instantiateChildrenForDataNode:1;
        unsigned int adapterRespondsTo_filterChildData:1;
        unsigned int adapterRespondsTo_isDataNodeExpandable:1;
        unsigned int adapterRespondsTo_isDataNodeSelectable:1;
        unsigned int adapterRespondsTo_doubleClickInColumn:1;
        unsigned int adapterRespondsTo_shouldEditTableColumn:1;
        unsigned int adapterRespondsTo_handleMouseDown:1;
        unsigned int adapterRespondsTo_instantiateAddedChildWithData:1;
        unsigned int adapterRespondsTo_removeChild:1;
        unsigned int adapterRespondsTo_renameChild:1;
        unsigned int adapterRespondsTo_dropPaths:1;
        unsigned int adapterRespondsTo_removeDataNode:1;
        unsigned int adapterRespondsTo_refreshDataNode:1;
        unsigned int adapterRespondsTo_compareDataNode:1;
        unsigned int adapterRespondsTo_editorViewControllerForDataNode:1;
        unsigned int adapterRespondsTo_inspectorViewControllersForDataNode:1;
        unsigned int adapterRespondsTo_persistentObjectComponent:1;
        unsigned int adapterRespondsTo_matchesPersistentObjectComponent:1;
        unsigned int adapterRespondsTo_heightOfRowForDataNode:1;
        unsigned int adapterRespondsTo_canAcceptDroppedItem:1;
        unsigned int adapterRespondsTo_canAcceptDroppedItems:1;
        unsigned int adapterRespondsTo_acceptDroppedItems:1;
        unsigned int adapterRespondsTo_isDataNodeDragDeletable:1;
        unsigned int adapterRespondsTo_shouldSortChildrenOfNode:1;
        unsigned int adapterRespondsTo_frameOfOutlineCellAtRow:1;
        unsigned int _reserved:18;
    } _flags;
}

+ (id)minimumNodeCoverFromNodesInArray:(id)arg1;
+ (id)dataNodeWithData:(id)arg1 adapter:(id)arg2 dataSource:(id)arg3;
+ (id)dataNodeWithData:(id)arg1 adapter:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id custom; // @synthesize custom=_custom;
@property(nonatomic) double cachedRowHeight; // @synthesize cachedRowHeight=_cachedRowHeight;
@property(retain, nonatomic) NSImage *cachedImage; // @synthesize cachedImage=_cachedImage;
- (void)consistencyCheck;
- (void)scrollToVisible;
- (void)selectInOutlineView;
- (void)setNeedsDisplay;
- (id)previousNodeInTreeLoadIfNecessary:(BOOL)arg1 wrap:(BOOL)arg2;
- (id)lastChildRecursivelyOrSelfLoadIfNecessary:(BOOL)arg1;
- (id)nextNodeInTreeLoadIfNecessary:(BOOL)arg1 wrap:(BOOL)arg2;
- (id)previousSibling;
- (id)nextSibling;
- (BOOL)isExpandedByDefault;
- (void)expandSelfAndParentsAndChildren;
- (void)expandOutlineAsNecessaryForVisibility;
- (void)expandSelfAndParents;
- (BOOL)handleReturnKey:(id)arg1 forOutlineView:(id)arg2 changeFocus:(BOOL)arg3;
- (BOOL)handleMouseDown:(id)arg1 forOutlineView:(id)arg2 inRow:(long long)arg3;
@property(readonly, nonatomic) id context; // @dynamic context;
@property(readonly, nonatomic) NSOutlineView *outlineView; // @dynamic outlineView;
- (void)removeSelf;
- (BOOL)matchesPersistentObjectComponent:(id)arg1;
- (id)persistentObjectComponent;
- (BOOL)dropPaths:(id)arg1 atIndex:(long long)arg2;
- (void)dropItems:(id)arg1 atIndex:(long long)arg2;
- (BOOL)canDropItems:(id)arg1 atIndex:(long long)arg2;
- (void)clearExpandedByDefault;
- (id)dataArrayForConsistencyCheck;
- (void)refreshNodeFor:(id)arg1;
- (void)replaceNodeFor:(id)arg1 withNodeFor:(id)arg2 at:(id)arg3;
- (void)renamedNodeFor:(id)arg1 within:(id)arg2;
- (void)removeNodeFor:(id)arg1 from:(id)arg2;
- (id)_findSubNodeWithData:(id)arg1;
- (BOOL)considerDataEqual:(id)arg1;
- (void)addNodeFor:(id)arg1 to:(id)arg2;
- (long long)compareInverse:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)outlineViewIsGroupItem:(id)arg1;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1 defaultFrame:(struct CGRect)arg2;
- (void)noteHeightOfRowChanged;
- (void)voidWidthDependentCachedRowHeights;
- (double)rowHeight;
- (id)toolTipForTableColumn:(id)arg1 forCell:(id)arg2 rect:(struct CGRect *)arg3 mouseLocation:(struct CGPoint)arg4;
- (id)toolTipForTableColumn:(id)arg1;
- (BOOL)outlineViewShouldShowOutlineCell:(id)arg1;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3;
- (void)setObjectValue:(id)arg1 forTableColumn:(id)arg2;
- (id)objectValueForTableColumn:(id)arg1;
- (id)description;
- (void)recursiveSortChildren;
- (void)sortImmediateChildren;
- (BOOL)isDescendantOfNodeInArray:(id)arg1;
- (BOOL)isDescendantOfNode:(id)arg1;
- (id)inspectorViewControllersForEditor:(id)arg1;
- (id)editorViewController;
- (BOOL)shouldEditTableColumn:(id)arg1;
- (BOOL)doubleClickInColumn:(id)arg1;
- (id)representedFilename;
- (BOOL)isDragDeletable;
- (BOOL)isSelectable;
- (BOOL)isExpanded;
- (BOOL)isExpandable;
- (id)childAtIndex:(long long)arg1;
- (id)lastChild;
- (id)firstChild;
- (long long)numberOfChildren;
- (void)discardPreloadedChildren;
- (id)addChildForDataObject:(id)arg1 withAdapter:(id)arg2;
- (void)addChildrenForDataObjects:(id)arg1 withCommonAdapter:(id)arg2;
@property(copy, nonatomic) NSArray *children;
- (void)removeChildrenAtIndexes:(id)arg1;
- (void)insertChildren:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectFromChildrenAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inChildrenAtIndex:(unsigned long long)arg2;
- (id)objectInChildrenAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfChildren;
- (id)mutableChildren;
- (BOOL)childrenAreLoaded;
- (long long)indexOfChildIdenticalTo:(id)arg1;
- (long long)indexOfChild:(id)arg1;
- (void)removeTree;
- (void)unlinkTree;
- (void)linkTreeToParent:(id)arg1 dataSource:(id)arg2;
- (void)removeFromParent;
- (void)removeChild:(id)arg1;
- (void)_removeChildrenIdenticalTo:(id)arg1;
- (void)addChildren:(id)arg1;
- (void)insertChildren:(id)arg1 atIndex:(long long)arg2;
- (void)insertChild:(id)arg1 atIndex:(long long)arg2;
- (void)addChild:(id)arg1;
- (id)_instantiatedChildren;
@property(nonatomic) BOOL willBeRemoved; // @dynamic willBeRemoved;
@property(nonatomic) BOOL customFlag3; // @dynamic customFlag3;
@property(nonatomic) BOOL customFlag2; // @dynamic customFlag2;
@property(nonatomic) BOOL customFlag1; // @dynamic customFlag1;
@property(nonatomic) BOOL storedExpandedByDefault; // @dynamic storedExpandedByDefault;
@property(nonatomic) BOOL cachedRowHeightDependsOnWidth; // @dynamic cachedRowHeightDependsOnWidth;
- (id)image;
@property(retain, nonatomic) id <XCEDataNodeAdapterP> adapter; // @synthesize adapter=_adapter;
- (void)dealloc;
- (void)clear;
- (BOOL)nodeWasCleared;
@property(retain, nonatomic) IDEConfigurableDataSource *dataSource; // @dynamic dataSource;
@property(retain, nonatomic) IDEConfigurableDataNode *parent;
@property(retain, nonatomic) id data;
- (id)initWithData:(id)arg1 parent:(id)arg2 children:(id)arg3 adapter:(id)arg4 dataSource:(id)arg5;
- (id)initWithData:(id)arg1 parent:(id)arg2 children:(id)arg3 adapter:(id)arg4;

@end

