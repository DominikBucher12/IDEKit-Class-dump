//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEFindNavigatorAbstractScopeOutlineItem.h>

@interface IDEFindNavigatorGroupScopeOutlineItem : IDEFindNavigatorAbstractScopeOutlineItem
{
    BOOL _filterable;
}

- (id)resolveIconUsingWorkspace:(id)arg1;
- (id)predicate;
- (id)filteredCloneWithChildren:(id)arg1 passedFilterLocally:(BOOL)arg2 descendantPassedFilter:(BOOL)arg3;
- (BOOL)isFilterable;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 predicate:(id)arg3 passedFilterLocally:(BOOL)arg4 descendantPassedFilter:(BOOL)arg5 filterable:(BOOL)arg6;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 predicate:(id)arg3 children:(id)arg4 passedFilterLocally:(BOOL)arg5 descendantPassedFilter:(BOOL)arg6 filterable:(BOOL)arg7;

@end

