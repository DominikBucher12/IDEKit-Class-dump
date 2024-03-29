//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEActivityReporter.h>

@class DVTNotificationToken, DVTObservingToken, IDEActivityReport, NSImage;

@interface IDESCMActivityReporter : IDEActivityReporter
{
    NSImage *_scmImage;
    IDEActivityReport *_workspaceScanActivityReport;
    IDEActivityReport *_exportFilesActivityReport;
    IDEActivityReport *_blameActivityReport;
    IDEActivityReport *_logActivityReport;
    IDEActivityReport *_commitPushPullUpdateMergeActivityReport;
    IDEActivityReport *_switchBranchActivityReport;
    IDEActivityReport *_createGitRepoReport;
    IDEActivityReport *_scmPrepareToUpdatePushPullMergeReport;
    DVTNotificationToken *_willScanToken;
    DVTNotificationToken *_didScanToken;
    DVTNotificationToken *_willUpdateToken;
    DVTNotificationToken *_didUpdateToken;
    DVTNotificationToken *_willCommitToken;
    DVTNotificationToken *_didCommitToken;
    DVTNotificationToken *_willMergeToken;
    DVTNotificationToken *_didMergeToken;
    DVTNotificationToken *_willSwitchToken;
    DVTNotificationToken *_didSwitchToken;
    DVTNotificationToken *_willExportVersionsToken;
    DVTNotificationToken *_didExportVersionsToken;
    DVTNotificationToken *_willBlameToken;
    DVTNotificationToken *_didBlameToken;
    DVTNotificationToken *_willLogToken;
    DVTNotificationToken *_didLogToken;
    DVTNotificationToken *_willPrepareToMergeToken;
    DVTNotificationToken *_didPrepareToMergeToken;
    DVTNotificationToken *_willPrepareToUpdateToken;
    DVTNotificationToken *_didPrepareToUpdateToken;
    DVTNotificationToken *_willPrepareToPullToken;
    DVTNotificationToken *_didPrepareToPullToken;
    DVTNotificationToken *_willPrepareToPushToken;
    DVTNotificationToken *_didPrepareToPushToken;
    DVTNotificationToken *_willCreateGitRepoToken;
    DVTNotificationToken *_willPushToXcodeServerToken;
    DVTNotificationToken *_didCreateGitRepoToken;
    DVTObservingToken *_scmMonitorObservingToken;
}

- (void).cxx_destruct;
@property(retain) DVTObservingToken *scmMonitorObservingToken; // @synthesize scmMonitorObservingToken=_scmMonitorObservingToken;
- (void)primitiveInvalidate;
- (void)_postWorkspaceScanningCompletedActivity;
- (void)publishActivityReport:(id)arg1;
- (void)setUpSCMObserving;
- (void)createWorkspaceScanningActivityReport;
- (id)initWithWorkspace:(id)arg1;

@end

