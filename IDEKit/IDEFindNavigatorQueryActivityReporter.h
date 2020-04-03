//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEActivityReporter.h>

@class NSArray, NSMapTable;
@protocol DVTInvalidation;

@interface IDEFindNavigatorQueryActivityReporter : IDEActivityReporter
{
    id <DVTInvalidation> _observations;
    NSArray *_reports;
    NSMapTable *_entriesByQuery;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *activityReports; // @synthesize activityReports=_reports;
- (void)queryCompleted:(id)arg1;
- (void)queryThrottled:(id)arg1;
- (void)queryStallStatusChanged:(id)arg1;
- (void)queryProgressed:(id)arg1;
- (void)queryStarted:(id)arg1;
- (id)entryForQueryFromNotificationCreatingIfNeeded:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

@end
