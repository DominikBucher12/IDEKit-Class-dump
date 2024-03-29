//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEBatchFindAbstractResult, NSMapTable, NSMutableSet;

@interface IDEFindNavigatorFilteredResultSet : NSObject
{
    IDEBatchFindAbstractResult *_rootResult;
    NSMapTable *_resultFilterStatus;
    NSMapTable *_allResultGroupedByParent;
    NSMapTable *_visibleResultGroupedByParent;
    NSMutableSet *_deletedResults;
    CDUnknownBlockType _filter;
    long long _matchCount;
    long long _fileCount;
}

+ (void)insertResult:(id)arg1 intoGroupedChildMap:(id)arg2 populatingInsertionIndexesMap:(id)arg3;
- (void).cxx_destruct;
@property(readonly) long long fileCount; // @synthesize fileCount=_fileCount;
@property(readonly) long long matchCount; // @synthesize matchCount=_matchCount;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(readonly) BOOL hasVisibleContent;
@property(readonly) BOOL hasAnyContent;
- (id)visibleChildrenOfResult:(id)arg1;
- (id)visibleResultsInOutlineOrder;
- (id)resultsInOutlineOrderFromTable:(id)arg1;
- (void)populateOutlineOrder:(id)arg1 fromResult:(id)arg2 fromTable:(id)arg3;
- (void)deleteResults:(id)arg1;
- (id)descendantsOfResultsIncludingResults:(id)arg1;
- (void)accumulateDescendants:(id)arg1 ofResult:(id)arg2;
- (void)reimportResults;
- (unsigned long long)filterStatusFlagsForResult:(id)arg1;
- (id)importResultsReturningNewlyVisibleItemsInOutlineOrder:(id)arg1 insertionIndexes:(id *)arg2 andItemsToExpand:(id *)arg3;
- (void)faultIndirectlyMatchedParentsOfDirectlyMatchedResult:(id)arg1 populatingOutlineOrderedInsertedResultsArray:(id)arg2 insertionIndexesMap:(id)arg3 andItemsToExpand:(id)arg4;
- (id)initWithRootResult:(id)arg1;

@end

