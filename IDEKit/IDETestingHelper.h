//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDETestingHelper : NSObject
{
}

+ (id)selectionDescriptionForTestCollection:(id)arg1;
+ (BOOL)canRecordUITestForSelectionSource:(id)arg1 test:(id *)arg2 selectedDocumentLocation:(id *)arg3 outError:(id *)arg4;
+ (BOOL)isFilePathBuiltInUITestingBundle:(id)arg1 workspace:(id)arg2;
+ (BOOL)isTestableBuiltInUITestingBundle:(id)arg1;
+ (void)profileTestCollection:(id)arg1 testPlanConfigurations:(id)arg2 forWorkspaceTabController:(id)arg3;
+ (void)profileTestCollection:(id)arg1 forWorkspaceTabController:(id)arg2;
+ (void)runTestCollection:(id)arg1 testPlanConfigurations:(id)arg2 forWorkspaceTabController:(id)arg3 contextString:(id)arg4;
+ (void)runTestCollection:(id)arg1 forWorkspaceTabController:(id)arg2 contextString:(id)arg3;
+ (void)_executeTestCollection:(id)arg1 testPlanConfigurations:(id)arg2 forWorkspaceTabController:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
+ (id)testingSpecifierGroupsForTestCollection:(id)arg1 testPlanConfigurations:(id)arg2 testPlan:(id)arg3;
+ (id)testingSpecifierForTestable:(id)arg1 selectedTestsAndTestables:(id)arg2 testPlanConfiguration:(id)arg3 testPlan:(id)arg4;
+ (id)_skippedTestsForTestable:(id)arg1 withSelectedTestsAndTestables:(id)arg2 inTestPlan:(id)arg3;
+ (void)_addIdentifiers:(id)arg1 forTestMethodsIn:(id)arg2 ignoreSkippedTests:(BOOL)arg3 inTestPlan:(id)arg4;
+ (id)filterButtonMenuItemsForContext:(id)arg1;
+ (id)contextMenuItemsForContext:(id)arg1;
+ (id)_newTestClassAndTestBundleAndTestPlanMenuItemsForContext:(id)arg1;
+ (id)_menuItemWithForContext:(id)arg1 titleKey:(id)arg2 action:(SEL)arg3;
+ (void)_validateMenuItems:(id)arg1 forContext:(id)arg2;
+ (void)_validateMenuItem:(id)arg1 forTestCollection:(id)arg2 inWorkspace:(id)arg3;
+ (void)_updateRevealTestInReportEditorMenuItem:(id)arg1 forTestCollection:(id)arg2 inWorkspace:(id)arg3;
+ (void)_updateProfileTestMenuItem:(id)arg1 forTestCollection:(id)arg2 testPlan:(id)arg3;
+ (void)_updateRunTestMenuItem:(id)arg1 forTestCollection:(id)arg2 testPlan:(id)arg3;
+ (void)_updateEnableDisableTestsMenuItem:(id)arg1 enableMenu:(BOOL)arg2 forTestCollection:(id)arg3 testPlan:(id)arg4;
+ (id)topLevelTestCollectionForTestCollection:(id)arg1;
+ (id)topLevelTestCollectionForTestContainers:(id)arg1;
+ (void)_removeRedundantChildItemsInTestContainers:(id)arg1 fromMutableCopy:(id)arg2;
+ (id)_localizedString:(id)arg1;
+ (id)_selectionStringForTestContainer:(id)arg1;
+ (id)_selectionStringForTestCollection:(id)arg1;
+ (id)profileStringForTest:(id)arg1;
+ (id)profileStringForTestCollection:(id)arg1;
+ (id)testStringForTest:(id)arg1;
+ (id)enabledDisableStringForTest:(id)arg1 prefix:(id)arg2;
+ (id)testStringForTestCollection:(id)arg1;
+ (id)enabledDisableStringForTestCollection:(id)arg1 enabledState:(long long)arg2 prefix:(id)arg3;
+ (long long)_enabledStateForTestCollection:(id)arg1 inSchemeAction:(id)arg2;
+ (long long)_itemTypeForSelection:(id)arg1;
+ (void)contextMenu_revealInTestNavigator:(id)arg1;
+ (void)contextMenu_revealInSymbolNavigator:(id)arg1;
+ (void)contextMenu_revealInProjectNavigator:(id)arg1;
+ (void)contextMenu_revealTestInReportEditor:(id)arg1;
+ (id)testReportDocumentLocationForTest:(id)arg1 workspace:(id)arg2;
+ (id)testReportDocumentLocationForWorkspace:(id)arg1;
+ (id)urlForMostRecentTestReportInWorkspace:(id)arg1;
+ (void)contextMenu_profileTest:(id)arg1;
+ (void)contextMenu_runTest:(id)arg1;
+ (void)contextMenu_newTestPlanFile:(id)arg1;
+ (void)contextMenu_newUITestBundle:(id)arg1;
+ (void)contextMenu_newTestBundle:(id)arg1;
+ (void)contextMenu_newUITestClass:(id)arg1;
+ (void)contextMenu_newTestClass:(id)arg1;
+ (void)contextMenu_disableTests:(id)arg1;
+ (void)contextMenu_enableTests:(id)arg1;
+ (void)_enableDisableContextMenuSelectedItemsForSender:(id)arg1 enable:(BOOL)arg2;
+ (void)launchAssistantForTemplateKind:(id)arg1;
+ (id)fileNameForTemplateOption:(long long)arg1;
+ (void)presentTemplateAssistantWithTemplateKind:(id)arg1 templateOption:(long long)arg2 forMenuItem:(id)arg3;
+ (id)subMenuForSelectingConfigurationForTestPlan:(id)arg1 testCollection:(id)arg2 excludeAllOption:(BOOL)arg3 target:(id)arg4 action:(SEL)arg5 tag:(long long)arg6;
+ (id)_getSelectionUIContextForMenuItem:(id)arg1;
+ (id)_testPlanConfigurationsForMenuItem:(id)arg1;
+ (id)_testCollectionForMenuItem:(id)arg1;
+ (BOOL)shouldAllowLaunchingTests:(id)arg1;
+ (void)initialize;

@end
