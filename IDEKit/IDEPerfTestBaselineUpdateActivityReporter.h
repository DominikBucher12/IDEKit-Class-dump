//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEActivityReporter.h>

@class NSMapTable;

@interface IDEPerfTestBaselineUpdateActivityReporter : IDEActivityReporter
{
    id _updateStartedObserver;
    id _updateFinishedObserver;
    NSMapTable *_baselineRecordsToActivityReports;
}

- (void).cxx_destruct;
- (void)publishActivityReport:(id)arg1;
- (void)destroyActivityReportForBaselineController:(id)arg1;
- (void)createActivityReportForBaselineController:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

@end

