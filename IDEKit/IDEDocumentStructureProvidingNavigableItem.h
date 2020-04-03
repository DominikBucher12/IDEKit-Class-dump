//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEKeyDrivenNavigableItem.h>

@class DVTObservingToken, IDEEditorDocument;

@interface IDEDocumentStructureProvidingNavigableItem : IDEKeyDrivenNavigableItem
{
    DVTObservingToken *_documentObservingToken;
    BOOL _invalidatingTopLevelObjects;
    IDEEditorDocument *_document;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IDEEditorDocument *document; // @synthesize document=_document;
- (unsigned long long)indexOfChildItemForIdentifier:(id)arg1;
- (id)identifierForChildItem:(id)arg1;
- (id)childRepresentedObjects;
- (BOOL)isLeaf;
- (BOOL)isDocumentNavigableItem;
- (id)_structureProvidingEditorDocument;
- (id)_editorDocument;
- (void)updateEditorDocument:(id)arg1;
- (void)invalidateChildItems;
- (void)_documentDidClose;
- (void)primitiveInvalidate;

@end

