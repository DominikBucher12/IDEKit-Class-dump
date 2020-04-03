//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/NSTouchBarDelegate-Protocol.h>
#import <IDEKit/NSTouchBarProvider-Protocol.h>

@class DVTBorderedView, DVTFilterControlBar, IDEAssistant, IDEAssistantContext, NSBox, NSButton, NSMutableArray, NSString, NSTextField, NSTouchBar, NSView;

@interface IDEAssistantWindowController : NSWindowController <NSTouchBarProvider, NSTouchBarDelegate>
{
    NSBox *_box;
    DVTBorderedView *_outerBorderedView;
    DVTBorderedView *_borderedView;
    DVTBorderedView *_sourceListBorderedView;
    NSButton *_nextButton;
    NSButton *_backButton;
    NSButton *_cancelButton;
    NSTextField *_titleField;
    DVTFilterControlBar *_filterControlBar;
    NSButton *_helpButton;
    NSButton *_checkboxButton;
    IDEAssistant *_installedAssistant;
    CDUnknownBlockType _currentCompletionBlock;
    NSMutableArray *_assistantHistory;
    NSMutableArray *_allAnimations;
    NSView *_nextKeyView;
    double _lastAnimationDirection;
    _Bool _backtrackingFromOverlayAssistant;
    _Bool _closing;
    IDEAssistant *_currentAssistant;
    IDEAssistantContext *_assistantContext;
    NSString *_nextButtonTitle;
    NSString *_finishButtonTitle;
    NSMutableArray *_completionPreprocessors;
    NSMutableArray *_completionPreprocessorExecutionStack;
}

+ (id)keyPathsForValuesAffectingAssistantTitle;
+ (id)keyPathsForValuesAffectingForwardOrFinishButtonTitle;
+ (id)keyPathsForValuesAffectingCanCancel;
+ (id)keyPathsForValuesAffectingCanGoForwardOrFinish;
+ (id)keyPathsForValuesAffectingOnFirstAssistant;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *completionPreprocessorExecutionStack; // @synthesize completionPreprocessorExecutionStack=_completionPreprocessorExecutionStack;
@property(retain, nonatomic) NSMutableArray *completionPreprocessors; // @synthesize completionPreprocessors=_completionPreprocessors;
@property(retain, nonatomic) NSString *finishButtonTitle; // @synthesize finishButtonTitle=_finishButtonTitle;
@property(retain, nonatomic) NSString *nextButtonTitle; // @synthesize nextButtonTitle=_nextButtonTitle;
@property(readonly, nonatomic) IDEAssistantContext *assistantContext; // @synthesize assistantContext=_assistantContext;
@property(readonly, nonatomic) IDEAssistant *currentAssistant; // @synthesize currentAssistant=_currentAssistant;
- (void)configureAnimationImageViewWithDirection:(double)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (void)setupAccessoriesForAssistant:(id)arg1 animated:(BOOL)arg2;
- (void)helpAction:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)cancelSession;
- (void)goBack:(id)arg1;
- (void)_finishWithAction:(id)arg1;
- (void)goNextOrFinish:(id)arg1;
- (void)addAnimationForKey:(id)arg1 toView:(id)arg2;
- (id)skipAheadIfPossibleAndReturnAssistantIdentifier;
- (void)didInstallViewController:(id)arg1;
- (void)willInstallViewController:(id)arg1;
- (id)assistantTitle;
- (id)forwardOrFinishButtonTitle;
- (BOOL)canGoForwardOrFinish;
- (BOOL)canCancel;
- (BOOL)canGoBack;
- (BOOL)onFirstAssistant;
- (id)_popAssistantHistoryStackToIdentifier:(id)arg1;
- (id)_popAssistantHistoryStack;
- (void)_pushAssistantOntoHistoryStack:(id)arg1;
- (void)_clearAssistantHistoryStack;
- (void)drainPreprocessorOrContinueWithSender:(id)arg1;
- (void)addGoForwardPreprocessor:(CDUnknownBlockType)arg1;
- (void)endAssistantSessionWithResult:(int)arg1 error:(id)arg2;
- (void)beginSessionForWorkspaceWindow:(id)arg1;
- (void)beginSessionWithAssistantIdentifier:(id)arg1 context:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)assistantWithIdentifier:(id)arg1;
- (void)close;
- (void)windowDidLoad;
- (id)init;
- (void)setCurrentAssistant:(id)arg1 andInstallView:(BOOL)arg2;
- (void)setCurrentAssistant:(id)arg1;
@property(readonly) NSButton *checkboxButton;
@property(readonly) NSButton *cancelButton;
- (id)_nextItem;
- (id)_previousItem;
- (id)_cancelItem;
- (id)_constraintForAlertTypeButton:(id)arg1;
- (id)_nextPreviousGroupItem;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) NSTouchBar *touchBar;

@end

