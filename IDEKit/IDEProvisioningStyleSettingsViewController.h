//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/NSMenuDelegate-Protocol.h>

@class NSButton, NSString;
@protocol IDESigningEditorStyleDataSource;

@interface IDEProvisioningStyleSettingsViewController : IDEViewController <NSMenuDelegate>
{
    id <IDESigningEditorStyleDataSource> _dataSource;
    NSButton *_provisioningStyleCheckBoxButton;
}

- (void).cxx_destruct;
@property __weak NSButton *provisioningStyleCheckBoxButton; // @synthesize provisioningStyleCheckBoxButton=_provisioningStyleCheckBoxButton;
@property(retain, nonatomic) id <IDESigningEditorStyleDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)primitiveInvalidate;
- (void)startObservations;
- (void)clickedProvisioningStyleSelecthionCheckBoxButton:(id)arg1;
- (void)updateProvisioningStyleSelection;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
