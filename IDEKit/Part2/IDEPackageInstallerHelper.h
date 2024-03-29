//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFirstLaunchPackageInstallationHelper, NSArray;

@interface IDEPackageInstallerHelper : NSObject
{
    BOOL _backgroundDownloadInProgress;
    BOOL _needToQuitApps;
    DVTFirstLaunchPackageInstallationHelper *_dvtFLEPackageInstallationHelper;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) BOOL backgroundDownloadInProgress; // @synthesize backgroundDownloadInProgress=_backgroundDownloadInProgress;
- (id)_genericErrorMessage;
- (id)_badPackageErrorMessage;
- (id)_notEnoughSpaceErrorMessage;
- (id)errorMessageForError:(id)arg1;
- (id)_errorAttributes;
@property(readonly) NSArray *appsThatNeedToBeQuitBeforeInstallCanProceed;
- (void)installPackagesWithAuthRef:(struct AuthorizationOpaqueRef *)arg1;
- (BOOL)needToInstallPackages;
@property(readonly) NSArray *packagesToInstall;
- (id)initWithDelegate:(id)arg1;

@end

