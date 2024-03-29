//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDESymbolNavigatorSymbol.h>

@class DVTDispatchLock, IDESymbolNavigator, NSArray, NSOperationQueue;

@interface IDESymbolNavigatorContainerSymbol : IDESymbolNavigatorSymbol
{
    NSOperationQueue *_queue;
    unsigned long long _generation;
    IDESymbolNavigator *_navigator;
    NSArray *_children;
    DVTDispatchLock *_accessLock;
    BOOL _isCanceled;
    BOOL _isLoading;
}

+ (id)keyPathsForValuesAffectingNavigableItem_childRepresentedObjects;
- (void).cxx_destruct;
@property __weak IDESymbolNavigator *navigator; // @synthesize navigator=_navigator;
- (id)ideModelObjectTypeIdentifier;
- (void)fetchSymbols:(id)arg1 generation:(unsigned long long)arg2 lastOperation:(id)arg3;
- (id)navigableItem_childRepresentedObjects;
- (id)children;
- (void)loadChildrenWithOperation:(id)arg1 fetchingSymbols:(id)arg2;
- (id)loadChildren;
- (BOOL)childrenNeedUpdating;
- (void)addNavSymbolsForSymbols:(id)arg1 toMutableArray:(id)arg2;
- (BOOL)hasChildren;
- (BOOL)isCanceled;
- (void)cancelOperations;
- (id)initWithContainerSymbol:(id)arg1 operationQueue:(id)arg2 generation:(unsigned long long)arg3 symbolNavigator:(id)arg4;

@end

