//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IDEContainerItem;
@protocol IDEStructureEditingItem;

@protocol IDEStructureEditingItem
- (id <IDEStructureEditingItem>)parentStructureEditingItem;
- (unsigned long long)indexUnderParent;
- (IDEContainerItem *)representedContainerItem;
@end

