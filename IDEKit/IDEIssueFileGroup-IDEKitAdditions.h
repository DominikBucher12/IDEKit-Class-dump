//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEIssueFileGroup.h>

#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTSymbol, IDEFileReference, NSArray, NSImage, NSNull, NSString, NSURL;

@interface IDEIssueFileGroup (IDEKitAdditions) <IDEKeyDrivenNavigableItemRepresentedObject>
+ (id)keyPathsForValuesAffectingNavigableItem_childRepresentedObjects;
+ (id)keyPathsForValuesAffectingNavigableItem_documentType;
+ (id)keyPathsForValuesAffectingNavigableItem_contentDocumentLocation;
+ (id)keyPathsForValuesAffectingNavigableItem_referencedContentExists;
+ (id)keyPathsForValuesAffectingNavigableItem_image;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
+ (id)imageForFileGroupWithURL:(id)arg1 issueType:(unsigned long long)arg2;
+ (void)editorDocumentDirtyStatusDidChange:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) NSString *navigableItem_name;
- (void)_noteDocumentEditedStateChanged;
@property(readonly) BOOL associatedFileExists;
- (id)textColor;
@property(readonly) NSImage *image;
- (void)_observeFilePathIfNecessary;
@property(readonly) NSString *displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@end
