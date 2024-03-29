//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/_IDEDistributionManualConfigurationDataSource.h>

#import <IDEKit/IDESigningEditorProfileDataSource-Protocol.h>

@class IDEDistributionContext, IDEDistributionItem, IDEProfileQualification, SigningEditorConfiguration;
@protocol IDEProvisioningBasicProfile, IDESigningEditorConfigurationDataSourceDelegate;

@interface _IDEDistributionManualProfileDataSource : _IDEDistributionManualConfigurationDataSource <IDESigningEditorProfileDataSource>
{
    IDEDistributionItem *_distributionItem;
    IDEDistributionContext *_context;
}

+ (id)keyPathsForValuesAffectingProvisioningProfile;
+ (id)keyPathsForValuesAffectingProfileQualification;
- (void).cxx_destruct;
@property(readonly, nonatomic) IDEDistributionContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) IDEDistributionItem *distributionItem; // @synthesize distributionItem=_distributionItem;
@property(readonly, nonatomic) BOOL showEmptyProfileSelectionPlaceholder;
- (id)provisioningProfileDownloaderContextWithError:(id *)arg1;
@property(retain, nonatomic) id <IDEProvisioningBasicProfile> provisioningProfile;
- (void)locateEligibleProfiles:(id *)arg1 ineligibleProfiles:(id *)arg2;
@property(readonly, nonatomic) IDEProfileQualification *profileQualification;
- (id)evaluation;
@property(readonly, getter=isProfileChangeable) BOOL profileChangeable;
@property(readonly) long long profileSupport;
@property(readonly, getter=isRepairBusy) BOOL repairBusy;
- (id)initWithDistributionItem:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly) SigningEditorConfiguration *configuration;
@property __weak id <IDESigningEditorConfigurationDataSourceDelegate> configurationDataSourceDelegate;

@end

