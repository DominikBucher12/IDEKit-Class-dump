//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/_IDEDistributionManualConfigurationDataSource.h>

#import <IDEKit/IDESigningEditorTeamDataSource-Protocol.h>

@class SigningEditorConfiguration;
@protocol IDEProvisioningBasicTeam, IDESigningEditorConfigurationDataSourceDelegate;

@interface _IDEDistributionManualSigningTeamDataSource : _IDEDistributionManualConfigurationDataSource <IDESigningEditorTeamDataSource>
{
    id <IDEProvisioningBasicTeam> _team;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isTeamSelectionRequired;
- (id)teams;
@property(retain, nonatomic) id <IDEProvisioningBasicTeam> team;
- (id)initWithTeam:(id)arg1;

// Remaining properties
@property(readonly) SigningEditorConfiguration *configuration;
@property __weak id <IDESigningEditorConfigurationDataSourceDelegate> configurationDataSourceDelegate;

@end

