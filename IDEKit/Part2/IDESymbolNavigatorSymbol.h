//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTSymbol, IDEFileReference, NSArray, NSImage, NSNull, NSString, NSURL;
@protocol IDEIndexSymbol;

@interface IDESymbolNavigatorSymbol : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    id <IDEIndexSymbol> _symbol;
    BOOL _dontShortCircuitFetch;
}

- (void).cxx_destruct;
@property BOOL dontShortCircuitFetch; // @synthesize dontShortCircuitFetch=_dontShortCircuitFetch;
@property(readonly) id <IDEIndexSymbol> symbol; // @synthesize symbol=_symbol;
- (void)fetchSymbols:(id)arg1 generation:(unsigned long long)arg2 lastOperation:(id)arg3;
- (void)cancelOperations;
- (BOOL)childrenNeedUpdating;
- (BOOL)hasChildren;
- (id)ideModelObjectTypeIdentifier;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) NSString *navigableItem_name;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithSymbol:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

