//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/_TtP6IDEKit15IDESelectedItem_-Protocol.h>

@class DVTFileDataType, IDENavigableItemArchivableRepresentation, NSURL;

@interface IDENavigableItemSelectedItem : NSObject <_TtP6IDEKit15IDESelectedItem_>
{
    IDENavigableItemArchivableRepresentation *_archivableRepresentation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IDENavigableItemArchivableRepresentation *archivableRepresentation; // @synthesize archivableRepresentation=_archivableRepresentation;
- (void)navigableItemForTemporaryCompatibilityInWorkspace:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)editorOpenSpecifierWithDocumentExtensionIdentifier:(id)arg1 error:(id *)arg2;
- (id)editorOpenSpecifierWithError:(id *)arg1;
- (BOOL)hasGreatestDocumentAncestorInWorkspace:(id)arg1;
@property(readonly, nonatomic) DVTFileDataType *contextualDocumentType;
@property(readonly, copy, nonatomic) NSURL *documentURL;
- (id)representedObjectInWorkspace:(id)arg1;
- (id)initWithArchivableRepresentation:(id)arg1;
- (id)description;

@end

