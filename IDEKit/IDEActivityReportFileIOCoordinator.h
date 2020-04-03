//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableSet, NSSet;
@protocol OS_dispatch_queue;

@interface IDEActivityReportFileIOCoordinator : NSObject
{
    NSMutableArray *_activityReports;
    NSMutableSet *_runningThrottleableActivityReports;
    NSMutableSet *_runningUnthrottleableActivityReports;
    NSMapTable *_activityReportObservations;
    NSObject<OS_dispatch_queue> *_activityReportsQueue;
}

+ (id)sharedActivityReportFileIOCoordinator;
+ (void)initialize;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
- (void).cxx_destruct;
@property(readonly) NSSet *runningUnthrottleableActivityReports; // @synthesize runningUnthrottleableActivityReports=_runningUnthrottleableActivityReports;
@property(readonly) NSSet *runningThrottleableActivityReports; // @synthesize runningThrottleableActivityReports=_runningThrottleableActivityReports;
@property(readonly) NSArray *activityReports; // @synthesize activityReports=_activityReports;
- (void)updateWithAddedActivityReports:(id)arg1;
- (void)updateWithAddedActivityReports:(id)arg1 deletedActivityReports:(id)arg2;
- (void)_stopObservingReport:(id)arg1;
- (void)_startObservingReport:(id)arg1;
- (void)_updateRunningActivityReports;
- (void)_throttleActivityReport:(id)arg1 throttleFactor:(double)arg2;
- (BOOL)_removeSortedActivityReport:(id)arg1;
- (void)_insertSortedActivityReport:(id)arg1;
- (CDUnknownBlockType)_activityReportPriorityComparator;
- (unsigned long long)_allowedConcurrentActivities;
- (id)_init;
- (id)init;

@end
