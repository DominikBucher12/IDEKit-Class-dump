//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/NSMenuDelegate-Protocol.h>
#import <IDEKit/NSPopoverDelegate-Protocol.h>

@class DVTObservingToken, IDEProvisioningProfileDisplayGroup, IDEProvisioningProfileDownloaderWindowViewController, IDEProvisioningSliceConfiguration, NSButton, NSLayoutConstraint, NSOperationQueue, NSOrderedSet, NSPopUpButton, NSPopover, NSString, NSTextField;
@protocol IDESigningEditorProfileDataSource;

@interface IDEProvisioningProfileSelectionViewController : IDEViewController <NSPopoverDelegate, NSMenuDelegate>
{
    id <IDESigningEditorProfileDataSource> _dataSource;
    NSPopUpButton *_profilePopUpButton;
    NSTextField *_profileLabel;
    NSTextField *_profileLabelLabel;
    NSButton *_profileInfoButton;
    NSLayoutConstraint *_infoButtonProfilePopUpButtonHorizontalSpaceConstraint;
    NSLayoutConstraint *_infoButtonProfileLabelHorizontalSpaceConstraint;
    NSLayoutConstraint *_profilePopUpLeadingConstraint;
    NSLayoutConstraint *_profilePopUpWidthConstraint;
    NSLayoutConstraint *_profileLabelLeadingConstraint;
    NSLayoutConstraint *_viewTopConstraint;
    NSLayoutConstraint *_sliceHeightConstraint;
    NSPopover *_infoPopover;
    NSOperationQueue *_locateProfilesQueue;
    NSOrderedSet *_provisioningProfiles;
    NSOrderedSet *_ineligibleProvisioningProfiles;
    IDEProvisioningProfileDisplayGroup *_displayGroup;
    DVTObservingToken *_repairBusyObserver;
    IDEProvisioningSliceConfiguration *_configuration;
    IDEProvisioningProfileDownloaderWindowViewController *_downloaderWindowViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IDEProvisioningProfileDownloaderWindowViewController *downloaderWindowViewController; // @synthesize downloaderWindowViewController=_downloaderWindowViewController;
@property(retain, nonatomic) IDEProvisioningSliceConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) DVTObservingToken *repairBusyObserver; // @synthesize repairBusyObserver=_repairBusyObserver;
@property(retain, nonatomic) IDEProvisioningProfileDisplayGroup *displayGroup; // @synthesize displayGroup=_displayGroup;
@property(retain, nonatomic) NSOrderedSet *ineligibleProvisioningProfiles; // @synthesize ineligibleProvisioningProfiles=_ineligibleProvisioningProfiles;
@property(retain, nonatomic) NSOrderedSet *provisioningProfiles; // @synthesize provisioningProfiles=_provisioningProfiles;
@property(retain, nonatomic) NSOperationQueue *locateProfilesQueue; // @synthesize locateProfilesQueue=_locateProfilesQueue;
@property(retain, nonatomic) NSPopover *infoPopover; // @synthesize infoPopover=_infoPopover;
@property(retain) NSLayoutConstraint *sliceHeightConstraint; // @synthesize sliceHeightConstraint=_sliceHeightConstraint;
@property(retain) NSLayoutConstraint *viewTopConstraint; // @synthesize viewTopConstraint=_viewTopConstraint;
@property(retain) NSLayoutConstraint *profileLabelLeadingConstraint; // @synthesize profileLabelLeadingConstraint=_profileLabelLeadingConstraint;
@property(retain) NSLayoutConstraint *profilePopUpWidthConstraint; // @synthesize profilePopUpWidthConstraint=_profilePopUpWidthConstraint;
@property(retain) NSLayoutConstraint *profilePopUpLeadingConstraint; // @synthesize profilePopUpLeadingConstraint=_profilePopUpLeadingConstraint;
@property(retain) NSLayoutConstraint *infoButtonProfileLabelHorizontalSpaceConstraint; // @synthesize infoButtonProfileLabelHorizontalSpaceConstraint=_infoButtonProfileLabelHorizontalSpaceConstraint;
@property(retain) NSLayoutConstraint *infoButtonProfilePopUpButtonHorizontalSpaceConstraint; // @synthesize infoButtonProfilePopUpButtonHorizontalSpaceConstraint=_infoButtonProfilePopUpButtonHorizontalSpaceConstraint;
@property(retain) NSButton *profileInfoButton; // @synthesize profileInfoButton=_profileInfoButton;
@property(retain) NSTextField *profileLabelLabel; // @synthesize profileLabelLabel=_profileLabelLabel;
@property(retain) NSTextField *profileLabel; // @synthesize profileLabel=_profileLabel;
@property(retain) NSPopUpButton *profilePopUpButton; // @synthesize profilePopUpButton=_profilePopUpButton;
@property(retain, nonatomic) id <IDESigningEditorProfileDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)primitiveInvalidate;
- (void)menuNeedsUpdate:(id)arg1;
- (void)clickedImportProfileButton:(id)arg1;
- (void)clickedProfileInfoButton:(id)arg1;
- (void)profileSelectionDidChangeOnPopUpButton:(id)arg1;
- (void)downloadProfile;
- (void)importProfile;
- (void)displayImportProfileAlertForError:(id)arg1;
- (void)updateProvisioningProfileSelection;
- (void)selectUnknownProvisioningItemForDisplayName:(id)arg1 showWithRedText:(BOOL)arg2;
- (void)updateProvisioningProfiles;
- (void)updateElementVisibility;
- (void)startObservations;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

