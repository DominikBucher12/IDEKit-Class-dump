//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/IDEBatchFindQueryDelegate-Protocol.h>

@class DVTStackBacktrace, IDEBatchFindAbstractQuery, NSString;
@protocol IDEFindNavigatorRelaxedQueryResultsExistCheckerDelegate;

@interface IDEFindNavigatorRelaxedQueryResultsExistChecker : NSObject <IDEBatchFindQueryDelegate, DVTInvalidation>
{
    IDEBatchFindAbstractQuery *_query;
    BOOL _complete;
    long long _resultCount;
    id <IDEFindNavigatorRelaxedQueryResultsExistCheckerDelegate> _delegate;
}

+ (void)initialize;
- (void).cxx_destruct;
@property __weak id <IDEFindNavigatorRelaxedQueryResultsExistCheckerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, getter=isComplete) BOOL complete; // @synthesize complete=_complete;
@property(readonly) long long resultCount; // @synthesize resultCount=_resultCount;
- (void)findNavigatorQueryDidComplete:(id)arg1;
- (void)findNavigatorQuery:(id)arg1 didGenerateResults:(id)arg2;
- (void)findNavigatorQuery:(id)arg1 progressUpdate:(long long)arg2;
- (void)findNavigatorQuery:(id)arg1 isStalledOnFilePaths:(id)arg2;
- (void)findNavigatorQuery:(id)arg1 didFinishGeneratingLazyChildrenOfResult:(id)arg2;
- (void)execute;
- (void)primitiveInvalidate;
- (id)initWithSpecification:(id)arg1 workspace:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

