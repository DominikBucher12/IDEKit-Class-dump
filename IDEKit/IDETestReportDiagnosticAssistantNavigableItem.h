//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEGeniusResultNavigableRepresentedObject-Protocol.h>
#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTSymbol, IDEFileReference, IDESchemeActionsInvocationRecord, NSArray, NSImage, NSNull, NSString, NSURL;

@interface IDETestReportDiagnosticAssistantNavigableItem : NSObject <IDEKeyDrivenNavigableItemRepresentedObject, IDEGeniusResultNavigableRepresentedObject>
{
    NSString *_name;
    NSURL *_originalFileURL;
    DVTDocumentLocation *_documentLocation;
    DVTFileDataType *_type;
    NSString *_testIdentifier;
    NSString *_testBlueprintName;
    IDESchemeActionsInvocationRecord *_invocationRecord;
}

- (void).cxx_destruct;
@property(readonly) IDESchemeActionsInvocationRecord *invocationRecord; // @synthesize invocationRecord=_invocationRecord;
@property(readonly, copy) NSString *testBlueprintName; // @synthesize testBlueprintName=_testBlueprintName;
@property(readonly) NSString *testIdentifier; // @synthesize testIdentifier=_testIdentifier;
@property(readonly) DVTFileDataType *type; // @synthesize type=_type;
@property(readonly) DVTDocumentLocation *documentLocation; // @synthesize documentLocation=_documentLocation;
@property(readonly) NSURL *originalFileURL; // @synthesize originalFileURL=_originalFileURL;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)geniusResult_identifierForManualCategory;
- (id)geniusResult_identifierForGeniusCategory;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) NSString *navigableItem_name;
- (id)initWithName:(id)arg1 originalFileURL:(id)arg2 generatedContentLocation:(id)arg3 type:(id)arg4 testIdentifier:(id)arg5 testBlueprintName:(id)arg6 invocationRecord:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
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
@property(readonly, nonatomic) DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

