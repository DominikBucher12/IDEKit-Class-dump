//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSArray, NSImage, NSNull, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;

@protocol IDEKeyDrivenNavigableItemRepresentedObject <NSObject>
@property(nonatomic, readonly) NSString *navigableItem_name;

@optional
+ (NSString *)navigableItem_childRepresentedObjectsKeyPathForConformance:(NSString *)arg1;
+ (NSString *)navigableItem_childRepresentedObjectsKeyPath;
@property(nonatomic, readonly) NSNull *navigableItem_filtered;
@property(nonatomic, readonly) NSString *navigableItem_groupIdentifier;
- (DVTDocumentLocation *)navigableItem_contentDocumentLocationInDocumentURL:(NSURL *)arg1;
@property(nonatomic, readonly) BOOL navigableItem_isVisible;
@property(nonatomic, readonly) BOOL navigableItem_isEnabled;
@property(nonatomic, readonly) BOOL navigableItem_missingReferencedContentIsImportant;
@property(nonatomic, readonly) BOOL navigableItem_referencedContentExists;
@property(nonatomic, readonly) _TtC13DVTFoundation9DVTSymbol *navigableItem_representedSymbol;
@property(nonatomic, readonly) NSURL *navigableItem_representedURL;
@property(nonatomic, readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(nonatomic, readonly) DVTFileDataType *navigableItem_documentType;
@property(nonatomic, readonly) IDEFileReference *navigableItem_fileReference;
@property(nonatomic, readonly) BOOL navigableItem_isMajorGroup;
- (NSArray *)navigableItem_descendantRepresentedObjectsFromRepresentedObject:(id)arg1;
@property(nonatomic, readonly) NSArray *navigableItem_childRepresentedObjects;
@property(nonatomic, readonly) id navigableItem_parentRepresentedObject;
@property(nonatomic, readonly) BOOL navigableItem_isLeaf;
@property(nonatomic, readonly) NSArray *navigableItem_additionalFilterMatchingText;
@property(nonatomic, readonly) NSString *navigableItem_toolTip;
@property(nonatomic, readonly) NSString *navigableItem_accessibilityIdentifier;
@property(nonatomic, readonly) NSString *navigableItem_accessibleImageDescription;
@property(nonatomic, readonly) NSImage *navigableItem_image;
@property(nonatomic, readonly) NSString *navigableItem_subtitle;
@end

