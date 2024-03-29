//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class DVTFilePath, IDENavigableItem, IDEStructureEditingAssistantContext;
@protocol IDEStructureEditingItem;

@protocol IDEStructureEditingDropTarget <NSObject>
- (id <IDEStructureEditingItem>)actualTargetStructureEditingItem;
- (IDENavigableItem *)actualNavigableItem;
- (long long)actualChildIndex;
- (BOOL)structureEditingAcceptInsertionOfSubitemsForContext:(IDEStructureEditingAssistantContext *)arg1;
- (BOOL)structureEditingValidateInsertionOfSubitemsForContext:(IDEStructureEditingAssistantContext *)arg1;
- (IDEStructureEditingAssistantContext *)insertSubitemsAssistantContext;

@optional
- (DVTFilePath *)structureEditingNaturalFilePathForDropTarget;
@end

