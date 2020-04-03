//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

#import <IDEKit/NSTableViewDataSource-Protocol.h>
#import <IDEKit/NSTableViewDelegate-Protocol.h>

@class DVTBorderedView, DVTNotificationToken, DVTObservingToken, DVTRoundedRectTextField, DVTTableView, IDEProfileQualification, IDEProvisioningProfileInfoViewControllerConfiguration, NSArray, NSBox, NSLayoutConstraint, NSString, NSTextField, _IDEProvisioningProfileImageView;

@interface IDEProvisioningProfileInfoViewController : DVTViewController <NSTableViewDelegate, NSTableViewDataSource>
{
    NSArray *_items;
    BOOL _hasUpdatedPortalProfile;
    IDEProfileQualification *_qualification;
    _IDEProvisioningProfileImageView *_profileImageView;
    NSTextField *_profileTitleField;
    NSTextField *_profileSubtitleField;
    DVTTableView *_qualifierTable;
    DVTObservingToken *_qualifierObservation;
    DVTObservingToken *_hasUpdatedPortalProfileObservation;
    DVTNotificationToken *_frameChangeToken;
    IDEProvisioningProfileInfoViewControllerConfiguration *_configuration;
    DVTBorderedView *_headerBackgroundView;
    DVTRoundedRectTextField *_updatedLabel;
    NSLayoutConstraint *_updatedLabelWidthConstraint;
    NSLayoutConstraint *_updatedLabelLeadingConstraint;
    NSLayoutConstraint *_profileTitleTrailingConstraint;
    NSBox *_separatorLine;
}

- (void).cxx_destruct;
@property(retain) NSBox *separatorLine; // @synthesize separatorLine=_separatorLine;
@property __weak NSLayoutConstraint *profileTitleTrailingConstraint; // @synthesize profileTitleTrailingConstraint=_profileTitleTrailingConstraint;
@property __weak NSLayoutConstraint *updatedLabelLeadingConstraint; // @synthesize updatedLabelLeadingConstraint=_updatedLabelLeadingConstraint;
@property __weak NSLayoutConstraint *updatedLabelWidthConstraint; // @synthesize updatedLabelWidthConstraint=_updatedLabelWidthConstraint;
@property __weak DVTRoundedRectTextField *updatedLabel; // @synthesize updatedLabel=_updatedLabel;
@property __weak DVTBorderedView *headerBackgroundView; // @synthesize headerBackgroundView=_headerBackgroundView;
@property(retain, nonatomic) IDEProvisioningProfileInfoViewControllerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) DVTNotificationToken *frameChangeToken; // @synthesize frameChangeToken=_frameChangeToken;
@property(retain, nonatomic) DVTObservingToken *hasUpdatedPortalProfileObservation; // @synthesize hasUpdatedPortalProfileObservation=_hasUpdatedPortalProfileObservation;
@property(retain, nonatomic) DVTObservingToken *qualifierObservation; // @synthesize qualifierObservation=_qualifierObservation;
@property(retain, nonatomic) DVTTableView *qualifierTable; // @synthesize qualifierTable=_qualifierTable;
@property(retain, nonatomic) NSTextField *profileSubtitleField; // @synthesize profileSubtitleField=_profileSubtitleField;
@property(retain, nonatomic) NSTextField *profileTitleField; // @synthesize profileTitleField=_profileTitleField;
@property(retain, nonatomic) _IDEProvisioningProfileImageView *profileImageView; // @synthesize profileImageView=_profileImageView;
@property(nonatomic) BOOL hasUpdatedPortalProfile; // @synthesize hasUpdatedPortalProfile=_hasUpdatedPortalProfile;
@property(retain, nonatomic) IDEProfileQualification *qualification; // @synthesize qualification=_qualification;
- (void)primitiveInvalidate;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)_subtitle;
- (void)startObservations;
- (void)refreshView;
- (void)viewDidLoad;
- (id)_makeItems;
- (id)initWithQualification:(id)arg1 configuration:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

