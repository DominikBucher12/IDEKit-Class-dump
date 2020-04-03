//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/IDEDistributionStepInterstitialViewController-Protocol.h>

@class NSString;
@protocol DVTPortalCertificateProtocol;

@interface IDEDistributionExportCertificateViewController : IDEViewController <IDEDistributionStepInterstitialViewController>
{
    id <DVTPortalCertificateProtocol> _certificate;
    NSString *_teamName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *teamName; // @synthesize teamName=_teamName;
@property(retain, nonatomic) id <DVTPortalCertificateProtocol> certificate; // @synthesize certificate=_certificate;
- (void)export:(id)arg1;
- (void)help:(id)arg1;
- (void)takeAdditionalAction;
@property(readonly, nonatomic) NSString *additionalActionTitle;
@property(readonly, nonatomic) BOOL canGoNext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

