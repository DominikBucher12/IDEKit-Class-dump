//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEFindNavigatorAbstractScopeOutlineItem.h>

@class IDEBatchFindNamedScope;

@interface IDEFindNavigatorScopeNamedScopeOutlineItem : IDEFindNavigatorAbstractScopeOutlineItem
{
    IDEBatchFindNamedScope *_namedScope;
}

- (void).cxx_destruct;
@property(readonly) IDEBatchFindNamedScope *namedScope; // @synthesize namedScope=_namedScope;
- (id)filteredCloneWithChildren:(id)arg1 passedFilterLocally:(BOOL)arg2 descendantPassedFilter:(BOOL)arg3;
- (id)initWithNamedScope:(id)arg1 passedFilterLocally:(BOOL)arg2 descendantPassedFilter:(BOOL)arg3;

@end
