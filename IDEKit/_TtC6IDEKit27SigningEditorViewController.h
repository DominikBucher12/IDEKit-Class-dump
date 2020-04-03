//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/_TtP13IDEFoundation43SigningEditorConfigurationSelectionProtocol_-Protocol.h>

@class DVTBorderedView, IDECapsuleListView, MISSING_TYPE, NSTextField, NSView, _TtC13IDEFoundation26SigningEditorConfiguration, _TtC6IDEKit32SigningEditorAddCapabilityButton;
@protocol IDESigningEditorCapabilityItemLibraryAssetManagerContextProvider, _TtP13IDEFoundation51SigningEditorConfigurationSelectionProtocolDelegate_;

@interface _TtC6IDEKit27SigningEditorViewController : IDEViewController <_TtP13IDEFoundation43SigningEditorConfigurationSelectionProtocol_>
{
    MISSING_TYPE *manager;
    MISSING_TYPE *capabilityEditingItemViewControllersManager;
    MISSING_TYPE *contextProviderSubscription;
    MISSING_TYPE *signingViewControllersObservation;
    MISSING_TYPE *selectedConfigurationObservation;
    MISSING_TYPE *configurationsViewController;
    MISSING_TYPE *viewControllersToInvalidate;
    MISSING_TYPE *stateRestorationManager;
    MISSING_TYPE *delayedInvocation;
    MISSING_TYPE *scrollToProjectItemModel;
    MISSING_TYPE *capsuleListView;
    MISSING_TYPE *configurationsView;
    MISSING_TYPE *addCapabilityButtonContainerView;
    MISSING_TYPE *addCapabilityButton;
    MISSING_TYPE *footerTextField;
    MISSING_TYPE *contextProvider;
    MISSING_TYPE *context;
    MISSING_TYPE *footerText;
    MISSING_TYPE *configuration;
    MISSING_TYPE *delegate;
    MISSING_TYPE *capabilityViewControllers;
    MISSING_TYPE *signingViewControllers;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)primitiveInvalidate;
- (void)clickedAddCapabilityButton:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1;
@property(nonatomic, retain) id <_TtP13IDEFoundation51SigningEditorConfigurationSelectionProtocolDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, retain) _TtC13IDEFoundation26SigningEditorConfiguration *configuration; // @synthesize configuration;
@property(nonatomic) __weak id <IDESigningEditorCapabilityItemLibraryAssetManagerContextProvider> contextProvider; // @synthesize contextProvider;
@property(nonatomic) __weak NSTextField *footerTextField; // @synthesize footerTextField;
@property(nonatomic) __weak _TtC6IDEKit32SigningEditorAddCapabilityButton *addCapabilityButton; // @synthesize addCapabilityButton;
@property(nonatomic) __weak DVTBorderedView *addCapabilityButtonContainerView; // @synthesize addCapabilityButtonContainerView;
@property(nonatomic) __weak NSView *configurationsView; // @synthesize configurationsView;
@property(nonatomic) __weak IDECapsuleListView *capsuleListView; // @synthesize capsuleListView;

@end

