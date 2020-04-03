//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEProvisioningRepairDataSource-Protocol.h>
#import <IDEKit/IDEProvisioningTeamSelectionDataSource-Protocol.h>

@class NSOrderedSet;
@protocol IDEProvisioningBasicSigningIdentity;

@protocol IDEProvisioningSigningCertificateSelectionDataSource <IDEProvisioningTeamSelectionDataSource, IDEProvisioningRepairDataSource>
@property(readonly) BOOL wantsTeamSelectionRegardlessOfSigningStyle;
@property(readonly) long long signingStyle;
@property(retain, nonatomic) id <IDEProvisioningBasicSigningIdentity> signingIdentity;
@property(readonly, nonatomic) NSOrderedSet *signingIdentities;
@property(readonly) BOOL isSigningIdentityChangeable;
@end
