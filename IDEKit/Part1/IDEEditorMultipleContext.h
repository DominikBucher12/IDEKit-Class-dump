//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTReplacementViewDelegate-Protocol.h>
#import <IDEKit/NSSplitViewDelegate-Protocol.h>

@class IDEEditorContext, NSArray, NSMutableArray, NSString;
@protocol IDEEditorContextDelegate, IDEEditorMultipleContextDelegate;

@interface IDEEditorMultipleContext : IDEViewController <NSSplitViewDelegate, DVTReplacementViewDelegate>
{
    NSMutableArray *_editorContexts;
    IDEEditorContext *_selectedEditorContext;
    id _viewFrameDidChangeNotificationObserver;
    id _lastActiveEditorContextDidChangeNotificationObserver;
    id <IDEEditorMultipleContextDelegate> _delegate;
    int _layout;
    id <IDEEditorContextDelegate> _editorContextDelegate;
    NSArray *_defaultEditorCategories;
    NSArray *_validEditorCategories;
    NSString *_emptyContentString;
    BOOL _showRelatedItemsControl;
    BOOL _showNavBarHistoryStepperControls;
    BOOL _showSiblingStepperControls;
    BOOL _showMiniIssueNavigators;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(copy) NSArray *validEditorCategories; // @synthesize validEditorCategories=_validEditorCategories;
@property(copy) NSArray *defaultEditorCategories; // @synthesize defaultEditorCategories=_defaultEditorCategories;
@property(nonatomic) BOOL showMiniIssueNavigators; // @synthesize showMiniIssueNavigators=_showMiniIssueNavigators;
@property(nonatomic) BOOL showSiblingStepperControls; // @synthesize showSiblingStepperControls=_showSiblingStepperControls;
@property(nonatomic) BOOL showNavBarHistoryStepperControls; // @synthesize showNavBarHistoryStepperControls=_showNavBarHistoryStepperControls;
@property(nonatomic) BOOL showRelatedItemsControl; // @synthesize showRelatedItemsControl=_showRelatedItemsControl;
@property(retain, nonatomic) id <IDEEditorContextDelegate> editorContextDelegate; // @synthesize editorContextDelegate=_editorContextDelegate;
@property(nonatomic) int layout; // @synthesize layout=_layout;
@property(retain) id <IDEEditorMultipleContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) IDEEditorContext *selectedEditorContext; // @synthesize selectedEditorContext=_selectedEditorContext;
- (void)replacementView:(id)arg1 willInstallViewController:(id)arg2;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (void)_splitView:(id)arg1 resizeVerticalSubviewsWithOldSize:(struct CGSize)arg2;
- (id)_splitViewResizingLogAspect;
- (void)_splitView:(id)arg1 resizeHorizontalSubviewsWithOldSize:(struct CGSize)arg2;
- (struct CGSize)minimumSizeForView:(id)arg1;
- (struct CGRect)splitView:(id)arg1 additionalEffectiveRectOfDividerAtIndex:(long long)arg2;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)discardEditing;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
- (void)_setStateSavingStateDictionaries:(id)arg1 selected:(id)arg2 geometry:(id)arg3;
- (void)_setStateSavingStateDictionaries:(id)arg1 selected:(id)arg2 geometry:(id)arg3 excludingEditorContext:(id)arg4;
- (BOOL)_getStateSavingStateDictionaries:(id *)arg1 selected:(id *)arg2 geometry:(id *)arg3;
- (void)_setEditorHistoryStacks:(id)arg1 selected:(id)arg2 geometry:(id)arg3;
- (BOOL)_getEditorHistoryStacks:(id *)arg1 selected:(id *)arg2 geometry:(id *)arg3;
- (void)_setEditorContextProperties:(id)arg1 selectedProperty:(id)arg2 geometry:(id)arg3 propertySetterBlock:(CDUnknownBlockType)arg4;
- (BOOL)_getEditorContextProperties:(id *)arg1 selectedProperty:(id *)arg2 geometry:(id *)arg3 propertyGetterBlock:(CDUnknownBlockType)arg4;
- (struct CGRect)grabRect;
- (void)setEmptyContentString:(id)arg1;
- (BOOL)_removeEditorContextAtIndex:(unsigned long long)arg1;
- (BOOL)_splitEditorContextAtIndex:(unsigned long long)arg1 actuallySplit:(BOOL)arg2 splitEditorContext:(id *)arg3 newEditorContext:(id *)arg4;
- (void)_updateCanAddOrRemoveSplitStatus;
- (void)closeAllEditorContextsKeeping:(id)arg1;
- (void)closeEditorContext:(id)arg1;
- (BOOL)canCloseEditorContexts;
- (id)addEditorContext;
- (void)splitEditorContext:(id)arg1;
- (BOOL)canCreateAdditionalEditorContexts;
- (id)_addSplitAtIndex:(unsigned long long)arg1;
- (id)secondEditorContext;
- (id)firstEditorContext;
- (void)_adjustEditorBorders;
- (BOOL)_editorsAreStackedVertically;
- (id)_splitView;
- (void)loadView;
- (void)primitiveInvalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSArray *editorContexts; // @dynamic editorContexts;
@property(readonly) unsigned long long hash;
@property(readonly) NSMutableArray *mutableEditorContexts; // @dynamic mutableEditorContexts;
@property(readonly) Class superclass;

@end
