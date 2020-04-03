//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEPathCell, NSHashTable, NSSet, NSString;

@interface IDEPathCellNavigableItemObserver : NSObject <DVTInvalidation>
{
    IDEPathCell *_owner;
    NSHashTable *_observedItems;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_tearDownObservingForItems:(id)arg1;
- (void)_setupObservingForItems:(id)arg1;
@property(readonly) NSSet *observedItems;
- (void)primitiveInvalidate;
- (id)initWithOwner:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

