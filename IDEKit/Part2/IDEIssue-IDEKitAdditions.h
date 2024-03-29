//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEIssue.h>

#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>
#import <IDEKit/IDENoteAnnotationExplorableItem-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTSymbol, IDEFileReference, NSArray, NSImage, NSNull, NSString, NSURL;
@protocol IDENoteAnnotationExplorableItem;

@interface IDEIssue (IDEKitAdditions) <IDEKeyDrivenNavigableItemRepresentedObject, IDENoteAnnotationExplorableItem>
+ (id)keyPathsForValuesAffectingNavigableItem_childRepresentedObjects;
+ (id)keyPathsForValuesAffectingNavigableItem_isLeaf;
+ (id)keyPathsForValuesAffectingNavigableItem_additionalFilterMatchingText;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
+ (BOOL)isCandidateAnnotationRepresentedObject:(id)arg1;
+ (id)_descriptionForIssueType:(unsigned long long)arg1;
+ (id)defaultImageForIssueType:(unsigned long long)arg1 ofSize:(unsigned long long)arg2;
@property(readonly) IDEIssue *exploredIssue;
@property(readonly) NSString *title;
@property(readonly) NSArray *locations;
@property(readonly) BOOL isNoteSeverity;
@property(readonly) NSArray *childExplorableItems;
@property(readonly) id <IDENoteAnnotationExplorableItem> parentExplorableItem;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_name;
@property(readonly) id exploreAnnotationRepresentedObject;
@property(readonly) id annotationRepresentedObject;
- (id)fixItImage;
@property(readonly) NSImage *image;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@property(readonly, getter=isValid) BOOL valid;
@end

