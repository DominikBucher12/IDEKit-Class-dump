//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEActivityReport, IDEWorkspaceDocument, NSArray, NSMapTable, NSMutableSet, NSSet, NSString;

@interface IDEActivityReportManager : NSObject <DVTInvalidation>
{
    IDEActivityReport *_lastCompletedUserVisiblePersistentSchemeBasedReport;
    IDEActivityReport *_lastCompletedUserVisibleSchemeBasedReport;
    IDEActivityReport *_lastCompletedUserVisibleReport;
    IDEWorkspaceDocument *_workspaceDocument;
    NSMapTable *_reportCompletedObservingTokenForReportsMapTable;
    NSSet *_activityReporterObservingTokens;
    NSSet *_activityReporters;
    NSMutableSet *_observers;
    NSArray *_orderedActivityReports;
    NSSet *_activityReports;
}

+ (void)initialize;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
- (void).cxx_destruct;
@property(retain, nonatomic) IDEActivityReport *lastCompletedUserVisiblePersistentSchemeBasedReport; // @synthesize lastCompletedUserVisiblePersistentSchemeBasedReport=_lastCompletedUserVisiblePersistentSchemeBasedReport;
@property(copy, nonatomic) NSArray *orderedActivityReports; // @synthesize orderedActivityReports=_orderedActivityReports;
@property(copy, nonatomic) NSSet *activityReports; // @synthesize activityReports=_activityReports;
@property(readonly) IDEWorkspaceDocument *workspaceDocument; // @synthesize workspaceDocument=_workspaceDocument;
- (void)postDistributedNotificationForReport:(id)arg1;
- (void)_postNotificationForRemovedReport:(id)arg1;
- (void)reportDidComplete:(id)arg1;
- (void)stopObservingReportForCompletion:(id)arg1;
- (void)startObservingReportForCompletion:(id)arg1;
- (id)addObserver:(CDUnknownBlockType)arg1;
- (void)removeObserverBlock:(CDUnknownBlockType)arg1;
- (void)restoreLastCompletedUserVisiblePersistentSchemeBasedReportFrom:(id)arg1;
@property(retain) IDEActivityReport *lastCompletedUserVisibleSchemeBasedReport; // @synthesize lastCompletedUserVisibleSchemeBasedReport=_lastCompletedUserVisibleSchemeBasedReport;
- (void)setLastCompletedUserVisibleReport:(id)arg1;
@property(readonly) IDEActivityReport *lastCompletedUserVisibleReport; // @synthesize lastCompletedUserVisibleReport=_lastCompletedUserVisibleReport;
- (void)rebuildActivityReportCaches;
- (void)handleUpdateFromActivityReporter:(id)arg1;
@property(retain) NSSet *activityReporters;
- (void)loadActivityReporters;
- (void)primitiveInvalidate;
- (id)initWithWorkspaceDocument:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

