//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/DVTPathCellItem-Protocol.h>
#import <IDEKit/DVTTableCellViewLazyProperties-Protocol.h>
#import <IDEKit/IDEStructureEditingItem-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTStackBacktrace, DVTSymbol, IDEFileReference, IDENavigableItemCoordinator, NSArray, NSColor, NSImage, NSMutableArray, NSString, NSURL;
@protocol IDENavigableItemDebugAreaDelegate, IDENavigableItemDebugBarDelegate;

@interface IDENavigableItem : NSObject <DVTPathCellItem, IDEStructureEditingItem, DVTTableCellViewLazyProperties, DVTInvalidation>
{
    id _observationInfo;
    IDENavigableItemCoordinator *_coordinator;
    NSMutableArray *_childItems;
    unsigned long long _changeCount;
    int _filterMatchGeneration;
    int _filterMatchesChildGeneration;
    struct {
        unsigned int _childItemsNeedsUpdate:1;
        unsigned int _invalidatingChildItems:1;
        unsigned int _debug_8061745_shouldCaptureInvalidationBacktrace:1;
        unsigned int _observersRegisteredWithOldOrPriorOption:1;
        unsigned int _isBeingForgotten:1;
        unsigned int _isBeingForgottenInNICInvalidation:1;
        unsigned int _representedObjectConformsToInvalidation:1;
        unsigned int _isMajorGroupOrDecendentOfMajorGroup:1;
        unsigned int _isMajorGroupOrDecendentOfMajorGroupSet:1;
    } _ideniFlags;
    id _representedObject;
    IDENavigableItem *_parentItem;
    NSArray *_arrangedChildItems;
}

+ (id)_navigableItemForNavigationFromNavigableItem:(id)arg1 workspace:(id)arg2;
+ (Class)_navigableItemClassForModelObject:(id)arg1;
+ (id)_navigableItemExtensionForModelObjectClass:(Class)arg1 andConformanceString:(id)arg2;
+ (Class)_registerInfoForClass:(Class)arg1 conformance:(id)arg2 withExtension:(id)arg3;
+ (id)_childItemsKeyPathForClass:(Class)arg1 extension:(id)arg2 andConformance:(id)arg3;
+ (void)_customizeNewNavigableItemClass:(Class)arg1 forModelObjectClass:(Class)arg2;
+ (id)_createExtraInfoObject;
+ (id)_classInfoByModelObjectClass;
+ (id)_allNavigableItemExtensions;
+ (BOOL)automaticallyNotifiesObserversOfArrangedChildItems;
+ (id)keyPathsForValuesAffectingArrangedChildItems;
+ (BOOL)automaticallyNotifiesObserversOfParentItem;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (BOOL)automaticallyNotifiesObserversOf_forgettingForNICInvalidation;
+ (BOOL)automaticallyNotifiesObserversOf_forgetting;
+ (id)description;
+ (BOOL)automaticallyNotifiesObserversOfRepresentedObject;
+ (id)navigableItemWithRepresentedObject:(id)arg1 coordinator:(id)arg2;
+ (id)_navigableItemWithRepresentedObject:(id)arg1 parent:(id)arg2 inCoordinator:(id)arg3;
+ (id)representedExtension;
+ (id)_dynamicSubclass_navigableItemExtraInfo;
+ (id)_navigableItemExtraInfo;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingRepresentedURL;
+ (id)imageOfRepresentedObject:(id)arg1;
+ (id)nameOfRepresentedObject:(id)arg1;
+ (id)keyPathsForValuesAffecting_titleStyleForReferencedContentExistance;
+ (id)keyPathsForValuesAffectingIde_canStructureEditName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrangedChildItems; // @synthesize arrangedChildItems=_arrangedChildItems;
@property(readonly, nonatomic) IDENavigableItem *parentItem; // @synthesize parentItem=_parentItem;
@property(readonly, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(readonly, nonatomic) IDENavigableItemCoordinator *navigableItemCoordinator; // @synthesize navigableItemCoordinator=_coordinator;
@property(readonly, nonatomic) BOOL _isMajorGroupOrDecendentOfMajorGroup;
- (id)_navigableItemForExternalDrag;
- (id)_navigableItemForNavigationInWorkspace:(id)arg1;
- (id)contextualValueForProperty:(id)arg1;
- (void)_setDomainProvider:(Class)arg1;
- (Class)_domainProvider;
- (id)_descendantItemForRepresentedObject:(id)arg1 stopAtClass:(Class)arg2;
- (id)_descendantItemForRepresentedObjects:(id)arg1;
- (id)descendantItemForRepresentedObject:(id)arg1 stopAtClass:(Class)arg2;
- (id)descendantItemForRepresentedObject:(id)arg1;
- (id)childItemsToSearchForFindingDescendant:(id)arg1;
- (unsigned long long)indexOfChildItemForIdentifier:(id)arg1;
- (id)identifierForChildItem:(id)arg1;
- (id)archivableRepresentation;
- (int)_filterMatchesChildGeneration;
- (int)_filterMatchGeneration;
- (BOOL)_filterMatchingChildrenIsCurrentGeneration;
- (BOOL)_filterMatchesSelfOrChildForGeneration:(int)arg1;
- (BOOL)_filterMatchesSelfOrAncestorForGeneration:(int)arg1;
- (void)_setHasChildFilteringMatchForGeneration:(int)arg1;
- (void)_setFilterMatch:(BOOL)arg1 forGeneration:(int)arg2;
- (void)_clearFilterMatch;
- (void)_didChangeArrangedChildItems;
- (void)_willChangeArrangedChildItems;
- (unsigned long long)_currentNumberOfArrangedChildItems;
- (void)_invalidateArrangedChildItems;
- (void)_setArrangedChildItems:(id)arg1;
- (void)_didChangeChildItems;
- (void)_willChangeChildItems;
- (BOOL)_shouldResetChildItemsOnDocumentClose;
@property(readonly, nonatomic) NSArray *childItems; // @dynamic childItems;
- (void)_resetChildItems;
- (void)_updateMutableChildItems:(id)arg1 forChangeKind:(unsigned long long)arg2 atIndexes:(id)arg3;
- (void)_disposeInvalidatedChildItems;
- (void)_incrementChangeCount;
- (unsigned long long)_changeCount;
- (id)_refreshChildItemsAndReturnItemsToDispose;
- (id)_reallyPrivateChildItems;
- (id)_childItems;
- (void)_willAccessChildItems;
- (void)willAccessChildItems;
- (unsigned long long)countOfChildNavigableItems;
- (void)getChildNavigableItems:(id *)arg1 range:(struct _NSRange)arg2;
- (id)_childRepresentedObjects;
- (BOOL)_shouldPerformInvalidatableParentChildCoherencyChecks;
- (id)childNavigableItemsAtIndexes:(id)arg1;
- (id)objectInChildNavigableItemsAtIndex:(unsigned long long)arg1;
- (id)childRepresentedObjects;
@property(readonly, nonatomic, getter=isLeaf) BOOL leaf; // @dynamic leaf;
- (void)_validateChildItems;
- (id)_parentChildItemsKeyPath;
- (id)_parentRepresentedObjectClassName;
- (Class)_parentClass;
- (void)_setParentItem:(id)arg1;
- (BOOL)_isWrappingDocumentFileReference;
- (void)setName:(id)arg1;
@property(nonatomic) BOOL _forgettingForNICInvalidation; // @dynamic _forgettingForNICInvalidation;
@property(nonatomic) BOOL _forgetting; // @dynamic _forgetting;
@property(readonly, nonatomic) BOOL isEffectivelyValid; // @dynamic isEffectivelyValid;
- (void)primitiveInvalidate;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)observationInfo;
- (void)setObservationInfo:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)_removeFromNavigableItemByRepresentedObjectMap;
- (void)_registerInNavigableItemByRepresentedObjectMap;
- (void)cacheValue:(id)arg1 forProperty:(id)arg2;
- (id)cachedValueForProperty:(id)arg1;
- (void)_documentDidClose;
- (void)_enableInvalidationBacktraceCapturing;
- (void)_setCoordinator:(id)arg1;
- (id)coordinator;
- (void)_setRepresentedObject:(id)arg1;
- (id)initWithRepresentedObject:(id)arg1;
@property(readonly, nonatomic) NSArray *additionalFilterMatchingText;
@property(readonly, nonatomic) NSString *accessibleImageDescription; // @dynamic accessibleImageDescription;
@property(readonly, nonatomic) NSImage *image; // @dynamic image;
@property(readonly, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(readonly, nonatomic) NSString *toolTip; // @dynamic toolTip;
- (void)updateChildItemsForChangeKind:(unsigned long long)arg1 atIndexes:(id)arg2;
- (void)invalidateChildItems;
@property(readonly, nonatomic) NSColor *textColor;
- (id)nearestDocumentFileReferenceProvidingAncestor;
- (id)greatestDocumentAncestor;
@property(readonly, nonatomic) BOOL mergeDecendants;
@property(readonly, nonatomic) NSString *accessibilityIdentifier;
- (BOOL)representsDocumentRoot;
@property(readonly, nonatomic) NSURL *representedURLForExternalDrag;
@property(readonly, nonatomic, getter=isVisible) BOOL visible;
@property(readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property(readonly, nonatomic) NSString *groupIdentifier;
@property(readonly, nonatomic) BOOL missingReferencedContentIsImportant;
@property(readonly, nonatomic) BOOL referencedContentExists;
@property(readonly, nonatomic) IDEFileReference *fileReference;
@property(readonly, nonatomic) DVTSymbol *representedSymbol;
@property(readonly, nonatomic) NSURL *representedURL;
@property(readonly, nonatomic) DVTDocumentLocation *contentDocumentLocation;
@property(readonly, nonatomic, getter=isMajorGroup) BOOL majorGroup;
@property(readonly, nonatomic) DVTFileDataType *documentType;
@property(readonly, nonatomic) BOOL isDocumentNavigableItem;
- (unsigned long long)_titleStyleForMissingContent;
- (unsigned long long)_titleStyleForReferencedContentExistance;
- (BOOL)_allowsNonFileReferenceDocumentInFileInspector;
- (BOOL)ide_canStructureEditName;
- (id)representedContainerItem;
- (unsigned long long)indexUnderParent;
- (id)parentStructureEditingItem;
- (BOOL)_alwaysBypassFilter;
- (BOOL)coordinatorFilteringShouldFilterChildItems;
- (unsigned long long)navigableItem_conflictStateForUpdateOrMerge;
- (id)sourceControlServerStatus;
- (unsigned long long)sourceControlServerStatusFlag;
- (id)sourceControlLocalStatus;
- (unsigned long long)sourceControlLocalStatusFlag;
- (id)recursiveDescription;
@property(readonly) id <IDENavigableItemDebugAreaDelegate> debugAreaDelegate;
@property(readonly) id <IDENavigableItemDebugBarDelegate> debugBarDelegate;
- (id)navigableItemsForPersistentNameTree:(id)arg1;
- (void)_fillItems:(id)arg1 fromNameDictionary:(id)arg2 withParent:(id)arg3 andChildren:(id)arg4;
- (id)persistentNameTreeForNavigableItems:(id)arg1 errorOnInvalidItems:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_checkInvalidItemsAndFillRootDict:(id)arg1 forItem:(id)arg2 errorOnInvalidItems:(BOOL)arg3 error:(id *)arg4;
- (id)persistentNameTreeForNavigableItemsIgnoringInvalid:(id)arg1;
- (id)persistentNameTreeForNavigableItems:(id)arg1 error:(id *)arg2;
- (id)_fillRootDict:(id)arg1 withItem:(id)arg2 isTerminus:(BOOL)arg3;
- (id)_navigableItemWithName:(id)arg1 inArray:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

