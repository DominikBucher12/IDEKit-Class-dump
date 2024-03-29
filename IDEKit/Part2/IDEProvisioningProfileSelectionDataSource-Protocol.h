//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEProvisioningRepairDataSource-Protocol.h>

@class IDEProfileQualification, IDEProvisioningProfileDownloaderContext;
@protocol IDEProvisioningBasicProfile;

@protocol IDEProvisioningProfileSelectionDataSource <IDEProvisioningRepairDataSource>
@property(readonly, nonatomic) BOOL showEmptyProfileSelectionPlaceholder;
@property(readonly, nonatomic) IDEProfileQualification *profileQualification;
@property(retain, nonatomic) id <IDEProvisioningBasicProfile> provisioningProfile;
@property(readonly) long long profileSupport;
@property(readonly, getter=isProfileChangeable) BOOL profileChangeable;
- (IDEProvisioningProfileDownloaderContext *)provisioningProfileDownloaderContextWithError:(id *)arg1;
- (void)locateEligibleProfiles:(id *)arg1 ineligibleProfiles:(id *)arg2;
@end

