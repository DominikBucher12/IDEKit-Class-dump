//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorCategoryController.h>

@class NSSet;

@interface IDEFileInspectorCategoryController : IDEInspectorCategoryController
{
    NSSet *_fileInspectorExtensions;
}

- (void).cxx_destruct;
- (void)validateUsageOfSupportsDocumentInspection:(id)arg1;
- (id)presentationOrderForInspectors:(id)arg1;
- (id)extensionMatchedInspectorsForInspectedNavigables:(id)arg1 withWorkspaceDocument:(id)arg2;
- (id)documentExtensionIDsForInspectedNavigables:(id)arg1 withWorkspaceDocument:(id)arg2;
- (BOOL)extension:(id)arg1 canInspecttNavigableItems:(id)arg2;
- (BOOL)extension:(id)arg1 matchesFileDataTypes:(id)arg2;
- (id)filterInspectors:(id)arg1 withDocumentExtensionIdentifier:(id)arg2;
- (id)navigableItemsForInputNavigableItems:(id)arg1;
- (id)fileInspectorExtensions;
- (id)fileTypesForInspectedNavigables:(id)arg1;

@end

