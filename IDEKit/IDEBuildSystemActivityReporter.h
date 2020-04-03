//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEActivityReporter.h>

@class DVTObservingToken, IDEActivityReport, IDEBuildOperation, IDEBuildOperationStatus, NSTimer;

@interface IDEBuildSystemActivityReporter : IDEActivityReporter
{
    DVTObservingToken *_curBuildOpObserver;
    DVTObservingToken *_buildOpProgressObserver;
    DVTObservingToken *_buildOpStatusObserver;
    IDEActivityReport *_activeBuildOperationReport;
    IDEBuildOperation *_activeBuildOperation;
    IDEBuildOperationStatus *_buildStatusToUpdateUIWithAfterTimerExpires;
    NSTimer *_uiRefreshTimer;
}

- (void).cxx_destruct;
- (void)updateActivityReportsForBuildOperation:(id)arg1;
- (void)refreshUIIfNeededAfterTimerFired:(id)arg1;
- (void)refreshUIIfNeeded;
- (void)updateActiveBuildOperationReportWithBuildStatus:(id)arg1;
- (BOOL)shouldShowFileProgressString:(id)arg1 givenBuildableString:(id)arg2;
- (id)completionSummaryStringSegmentsForBuildOperation:(id)arg1;
- (id)attributedResultStringForBuildOperation:(id)arg1;
- (id)nonFailedBuildTextAttributes;
- (id)buildFailedTextAttributes;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

@end

