//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTInvalidation_NSObject.h>

#import <IDEKit/IDEBatchFindQueryDelegate-Protocol.h>

@class MISSING_TYPE;

@interface _TtCC6IDEKit29IDEFindResultExplorableSourceP33_397AFEB4126BD23E6A2591F95127F3A211Accumulator : DVTInvalidation_NSObject <IDEBatchFindQueryDelegate>
{
    MISSING_TYPE *query;
    MISSING_TYPE *treeNodes;
    MISSING_TYPE *source;
}

- (void).cxx_destruct;
- (id)init;
- (void)findNavigatorQuery:(id)arg1 didFinishGeneratingLazyChildrenOfResult:(id)arg2;
- (void)findNavigatorQuery:(id)arg1 didGenerateResults:(id)arg2;
- (void)findNavigatorQueryDidComplete:(id)arg1;
- (void)findNavigatorQuery:(id)arg1 isStalledOnFilePaths:(id)arg2;
- (void)findNavigatorQuery:(id)arg1 progressUpdate:(long long)arg2;
- (void)primitiveInvalidate;

@end
