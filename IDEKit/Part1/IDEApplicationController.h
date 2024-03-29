//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSApplicationDelegate-Protocol.h>
#import <IDEKit/NSMenuDelegate-Protocol.h>
#import <IDEKit/UNUserNotificationCenterDelegate-Protocol.h>

@class DVTDelayedInvocation, DVTNotificationToken, DVTObservingToken, IDEBuildTimeStatistics, IDERemoteNotificationRegistration, IDEUserNotificationCenter, NSArray, NSDictionary, NSMenuItem, NSMutableDictionary, NSString;
@protocol NSMenuDelegate;

@interface IDEApplicationController : NSObject <UNUserNotificationCenterDelegate, NSApplicationDelegate, NSMenuDelegate>
{
    BOOL _haveScannedForPlugins;
    NSDictionary *_extensionIdToMenuDict;
    BOOL _closeKeyEquivalentClosesTab;
    NSString *_extensionIdForCurrentEditorAndNavigateMenus;
    NSString *_currentEditorMenuExtensionId;
    id <NSMenuDelegate> _editorMenuDelegate;
    NSString *_currentNavigateMenuExtensionId;
    long long _originalNavigateMenuItemCount;
    NSArray *_currentDebuggingAdditonUIExtensions;
    NSMenuItem *_shiftedCloseMenuItem;
    NSMenuItem *_shiftedCloseAllMenuItem;
    DVTDelayedInvocation *_tabStateContextDelayedSaveInvocation;
    NSMutableDictionary *_tabStateContextForTabNameMap;
    IDEBuildTimeStatistics *_buildTimeStatistics;
    DVTObservingToken *_lastActiveEditorToken;
    DVTNotificationToken *_lastActiveEditorContextNotificationToken;
    id _keyBindingSetWillActivateObserver;
    id _keyBindingSetDidActivateObserver;
    BOOL _isSafeToLoadMobileDevice;
    BOOL _hasScheduledMobileDeviceLoadBlock;
    BOOL _applicationIsTerminatingDuringLaunch;
    BOOL _applicationShouldTerminateRecursionGuard;
    BOOL _forceUpdateOfEditorAndNavigateMenus;
    BOOL _currentEditorAndNavigatorMenusAreBackstop;
    IDERemoteNotificationRegistration *_remoteNotificationRegistration;
    IDEUserNotificationCenter *__userNotificationCenterDelegate;
}

+ (id)sharedAppController;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) IDEBuildTimeStatistics *buildTimeStatistics; // @synthesize buildTimeStatistics=_buildTimeStatistics;
@property(readonly) BOOL currentEditorAndNavigatorMenusAreBackstop; // @synthesize currentEditorAndNavigatorMenusAreBackstop=_currentEditorAndNavigatorMenusAreBackstop;
@property(retain) IDEUserNotificationCenter *_userNotificationCenterDelegate; // @synthesize _userNotificationCenterDelegate=__userNotificationCenterDelegate;
@property(retain) IDERemoteNotificationRegistration *remoteNotificationRegistration; // @synthesize remoteNotificationRegistration=_remoteNotificationRegistration;
@property BOOL forceUpdateOfEditorAndNavigateMenus; // @synthesize forceUpdateOfEditorAndNavigateMenus=_forceUpdateOfEditorAndNavigateMenus;
@property BOOL applicationIsTerminatingDuringLaunch; // @synthesize applicationIsTerminatingDuringLaunch=_applicationIsTerminatingDuringLaunch;
@property BOOL haveScannedForPlugins; // @synthesize haveScannedForPlugins=_haveScannedForPlugins;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)batchFind:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (void)openQuickly:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (void)_setTabStateContext:(id)arg1 forTabNamed:(id)arg2;
- (id)_tabStateContextForTabNamed:(id)arg1;
- (id)_tabStateContextForTabNameMapByInstantiatingIfNeeded;
- (id)_tabStateContextForTabNameMapFromFilePath:(id)arg1;
- (BOOL)_saveTabStateContextForTabNameMapToFilePath:(id)arg1;
- (id)licenseAgreementFilePathForFileType:(id)arg1;
@property(readonly) NSString *formattedApplicationVersion;
- (void)updateDebugMenuIfNeeded;
- (void)editorMenuWillOpen:(id)arg1;
- (void)_modifyMenu:(id)arg1 withItemsFromMenu:(id)arg2 replace:(BOOL)arg3;
- (void)_updateEditorAndNavigateMenusIfNeeded;
- (void)_activateMenuKeyBindingSetWithMenuDefinitionExtensionIdentifiers:(id)arg1;
- (void)_pruneNavigateMenu;
- (void)_pruneEditorMenu;
- (id)_debugMenu;
- (id)_navigateMenu;
- (id)_editorMenu;
- (id)_editorMenuProviderExtension;
- (id)_editorForMenuContent;
- (void)_updateInspectorsMenusIfNeeded;
- (void)_updateEditMenuIfNeeded;
- (id)_inspectorsMenu;
- (id)_viewMenu;
- (id)_editMenu;
- (id)_closeMenuItem;
- (id)_closeWindowAsTabMenuItem;
- (id)_fileMenu;
- (id)_cachedMenuForDefinitionExtensionIdentifier:(id)arg1;
- (id)_cachedMenuDefinitionExtensionIdentifiers;
- (void)_setKeyEquivalentForMenuItem:(id)arg1 toIncludeShiftKey:(BOOL)arg2;
- (void)_updateCloseKeyEquivalents;
- (void)_updateCloseKeyEquivalentsIfNeeded;
- (id)applicationDockMenu:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (unsigned long long)ide_applicationShouldTerminate:(id)arg1;
- (unsigned long long)_shouldTerminateClosingDocuments;
- (void)menuNeedsUpdate:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)viewMenuWillOpen:(id)arg1;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationIsTerminating:(id)arg1;
- (void)_incrementCountForKey:(id)arg1 in:(id)arg2;
- (void)handleURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleGetURLEvent:(id)arg1 withReplyEvent:(id)arg2;
- (BOOL)applicationOpenUntitledFile:(id)arg1;
- (void)_setUpGetURLAppleEventHandler;
- (void)_setUpMainMenu;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)_setUpOpenDocumentAppleEventHandler;
- (BOOL)application:(id)arg1 openFile:(id)arg2;
- (void)application:(id)arg1 openFiles:(id)arg2;
- (void)openURLs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_terminateDueToFailureDuringLaunch:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

