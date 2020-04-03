//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTTableViewDelegate-Protocol.h>
#import <IDEKit/IDECIDataSourceSnapshotsChangedObserver-Protocol.h>
#import <IDEKit/NSTableViewDataSource-Protocol.h>
#import <IDEKit/NSTableViewDelegate-Protocol.h>

@class DVTBorderedView, DVTGradientImageButton, DVTGradientImagePopUpButton, DVTObservingToken, DVTReplacementView, DVTTableView, IDEControlGroup, IDESourceControlManager, NSArray, NSArrayController, NSLayoutConstraint, NSOperationQueue, NSString;
@protocol IDECIService, IDEContinuousIntegrationServiceManager;

@interface IDEAccountPrefsPaneController : IDEViewController <NSTableViewDataSource, NSTableViewDelegate, DVTTableViewDelegate, IDECIDataSourceSnapshotsChangedObserver>
{
    DVTObservingToken *_accountSelectionToken;
    NSOperationQueue *_multipeSelectionDeleteQueue;
    id <IDECIService> _newlyAddedService;
    NSArray *_knownXCSServices;
    DVTObservingToken *_developerAccountManagerObserver;
    DVTObservingToken *_sourceControlAccountManagerObserver;
    BOOL _hasLoadedDeveloperAccounts;
    DVTBorderedView *_accountListBorderView;
    DVTBorderedView *_accountGlassBarBorderView;
    NSLayoutConstraint *_accountBarHeight;
    IDEControlGroup *_accountControlGroup;
    DVTTableView *_accountTableView;
    DVTReplacementView *_detailReplacementView;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_removeButton;
    DVTGradientImagePopUpButton *_actionButton;
    NSArrayController *_contentArrayController;
    DVTBorderedView *_underDetailReplacementBorderedView;
}

+ (void)importAccountsFromFilePath:(id)arg1;
+ (id)accountProviders;
+ (id)accountPrefsHelpMenuItem;
- (void).cxx_destruct;
@property BOOL hasLoadedDeveloperAccounts; // @synthesize hasLoadedDeveloperAccounts=_hasLoadedDeveloperAccounts;
@property __weak DVTBorderedView *underDetailReplacementBorderedView; // @synthesize underDetailReplacementBorderedView=_underDetailReplacementBorderedView;
@property(retain) NSArrayController *contentArrayController; // @synthesize contentArrayController=_contentArrayController;
@property(retain) DVTGradientImagePopUpButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain) DVTGradientImageButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain) DVTGradientImageButton *addButton; // @synthesize addButton=_addButton;
@property(retain) DVTReplacementView *detailReplacementView; // @synthesize detailReplacementView=_detailReplacementView;
@property(retain) DVTTableView *accountTableView; // @synthesize accountTableView=_accountTableView;
@property(retain) IDEControlGroup *accountControlGroup; // @synthesize accountControlGroup=_accountControlGroup;
@property __weak NSLayoutConstraint *accountBarHeight; // @synthesize accountBarHeight=_accountBarHeight;
@property(retain) DVTBorderedView *accountGlassBarBorderView; // @synthesize accountGlassBarBorderView=_accountGlassBarBorderView;
@property(retain) DVTBorderedView *accountListBorderView; // @synthesize accountListBorderView=_accountListBorderView;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (BOOL)_isGroupItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)exportAccounts:(id)arg1;
- (void)importAccounts:(id)arg1;
- (void)importAccountsFromFilePath:(id)arg1;
- (void)_accountImportCompletedWithSuccess:(BOOL)arg1 numberOfIdentities:(unsigned long long)arg2 numberOfProfiles:(unsigned long long)arg3 numberOfAccounts:(unsigned long long)arg4 error:(id)arg5;
- (void)removeAction:(id)arg1;
- (void)_selectNewAccount:(id)arg1;
- (void)addButtonClick:(id)arg1;
- (void)beginObservingAccountStateChanges:(id)arg1;
- (void)_updateArrayControllerContents;
- (void)_removePasswordAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(id)arg3;
- (void)removeRepositoryAccount:(id)arg1 operation:(id)arg2;
@property(readonly) IDESourceControlManager *sourceControlManager;
- (id)developerAccountManager;
@property(readonly) id <IDEContinuousIntegrationServiceManager> xcsServiceManager;
- (id)accountTableViewContextMenu;
- (void)_updateReplacementView;
- (Class)hostedAccountDetailViewControllerClass;
- (Class)xcsServiceDetailViewControllerClass;
- (void)windowDidUpdate:(id)arg1;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)dataSource:(id)arg1 accountWasRemovedForService:(id)arg2;
- (void)dataSource:(id)arg1 accountWasAddedForService:(id)arg2;
- (void)dataSource:(id)arg1 didFinishInitialLoadForService:(id)arg2;
- (void)_loadAndObserveDeveloperAccounts;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
