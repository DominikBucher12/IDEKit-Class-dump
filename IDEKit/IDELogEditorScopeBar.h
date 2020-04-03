//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

#import <IDEKit/DVTScopeBarContentController-Protocol.h>

@class DVTBorderedView, DVTScopeBarButton, DVTSearchField, NSButton, NSLayoutConstraint, NSPopUpButton, NSString, NSView;
@protocol IDELogEditorScopeBarDelegate;

@interface IDELogEditorScopeBar : DVTViewController <DVTScopeBarContentController>
{
    NSView *_scopeLogPickerWrapperView;
    NSPopUpButton *_logPickerPopUp;
    NSView *_scopeAllLatestWrapperView;
    DVTScopeBarButton *_scopeLatestResultsButton;
    DVTScopeBarButton *_scopeAllResultsButton;
    DVTScopeBarButton *_scopeAllMessagesButton;
    DVTScopeBarButton *_scopeAllIssuesButton;
    DVTScopeBarButton *_scopeErrorsOnlyButton;
    DVTSearchField *_scopeSearchField;
    NSButton *_scopeBarSaveButton;
    id <IDELogEditorScopeBarDelegate> _delegate;
    double _preferredViewHeight;
    NSLayoutConstraint *_scopeBarHeight;
    NSLayoutConstraint *_filterFieldHeight;
    DVTBorderedView *_containerView;
}

+ (id)defaultViewNibName;
- (void).cxx_destruct;
@property __weak DVTBorderedView *containerView; // @synthesize containerView=_containerView;
@property __weak NSLayoutConstraint *filterFieldHeight; // @synthesize filterFieldHeight=_filterFieldHeight;
@property __weak NSLayoutConstraint *scopeBarHeight; // @synthesize scopeBarHeight=_scopeBarHeight;
@property double preferredViewHeight; // @synthesize preferredViewHeight=_preferredViewHeight;
@property(retain) id <IDELogEditorScopeBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)saveButtonAction:(id)arg1;
- (void)searchFieldAction:(id)arg1;
- (void)showErrorsOnly:(id)arg1;
- (void)showAllIssues:(id)arg1;
- (void)showAllMessages:(id)arg1;
- (void)showLatestResults:(id)arg1;
- (void)showAllResults:(id)arg1;
- (void)loadSelectedLog:(id)arg1;
- (void)updateLogsPopUpWithItems:(id)arg1 currentItem:(id)arg2;
- (void)setScopeBarState:(int)arg1 showAllResults:(BOOL)arg2;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

