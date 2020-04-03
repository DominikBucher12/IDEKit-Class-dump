//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEWorkspace, NSString;

@interface IDEContextAutocreationController : NSObject <DVTInvalidation>
{
    NSString *_contextAutocreationMetricIdentifier;
    BOOL _batchAddingBlueprints;
    BOOL _needsBatchSchemeAutocreation;
    BOOL _allowAutocreateSchemesUI;
    IDEWorkspace *_workspace;
}

+ (id)contextAutocreationControllerForWorkspace:(id)arg1;
+ (id)logAspect;
+ (void)initialize;
- (void).cxx_destruct;
@property BOOL allowAutocreateSchemesUI; // @synthesize allowAutocreateSchemesUI=_allowAutocreateSchemesUI;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (id)createSchemeForBuildable:(id)arg1 withName:(id)arg2;
- (void)_finishAutocreateSchemesForcingAutocreate:(BOOL)arg1 fromAddingBlueprint:(BOOL)arg2 withBuildablesToCreateContextsFor:(id)arg3;
- (void)_autocreateSchemesWithUI:(BOOL)arg1 forcingAutocreate:(BOOL)arg2 fromAddingBlueprint:(BOOL)arg3;
- (void)autocreateSchemesForcingAutocreate:(BOOL)arg1;
- (void)didBatchAddMultipleBlueprints:(id)arg1;
- (void)willBatchAddMultipleBlueprints:(id)arg1;
- (void)primitiveInvalidate;
- (id)initForWorkspace:(id)arg1;
- (id)contextAutocreationMetricIdentifier;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

