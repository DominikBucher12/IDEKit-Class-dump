//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTDiffSession, DVTWeakInterposer, IDEComparisonEditor, IDEEditor;

@interface IDEComparisonEditorSubmode : IDEViewController
{
    DVTWeakInterposer *_comparisonEditor_dvtWeakInterposer;
}

+ (double)emptyEditorLoadingDelay;
- (void).cxx_destruct;
- (void)setCanSelectNext:(BOOL)arg1;
@property(readonly) BOOL canSelectNext;
- (void)setCanSelectPrevious:(BOOL)arg1;
@property(readonly) BOOL canSelectPrevious;
- (void)offsetCurrentSelectedIndexBy:(long long)arg1;
- (void)setDifferenceMenu:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)comparisonContextMenu_revertDiffDescriptor:(id)arg1;
- (void)comparisonContextMenu_revertSelectedDiffDescriptor:(id)arg1;
- (void)comparisonMenu_revertSelectedDiffDescriptor:(id)arg1;
- (BOOL)canRevertMenuItemDifference:(id)arg1;
- (BOOL)canRevertSelectedDifference;
- (void)copyDiff;
- (BOOL)canCopyDiff;
- (void)willBeRemovedFromComparisonEditor;
- (void)_willOpenSpecifier:(id)arg1;
- (void)revertComparisonEditorStateWithDictionary:(id)arg1;
- (void)commitComparisonEditorStateToDictionary:(id)arg1;
- (id)currentSelectedDocumentLocations;
- (id)currentSelectedItems;
- (void)showEmptySecondaryEditor:(id)arg1;
- (void)showEmptyPrimaryEditor:(id)arg1;
- (void)hideSecondaryPlaceholder;
- (void)showSecondaryPlaceholder;
- (void)hidePrimaryPlaceholder;
- (void)showPrimaryPlaceholder;
@property(readonly) IDEEditor *secondaryEditor;
@property(readonly) IDEEditor *primaryEditor;
@property(readonly) IDEEditor *keyEditor;
@property(readonly) __weak IDEComparisonEditor *comparisonEditor;
@property(readonly) DVTDiffSession *diffSession;

@end

