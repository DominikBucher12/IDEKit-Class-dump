//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class DVTFilterControlBar, IDEAssistantContext, NSString, NSView;

@interface IDEAssistant : DVTViewController
{
    IDEAssistantContext *_assistantContext;
    NSString *_nextAssistantIdentifier;
    BOOL _expandsAssistantView;
    BOOL _widthResizable;
    BOOL _preventGoNextOrFinish;
    NSString *_previousAssistantIdentifier;
    NSString *_helpButtonDestination;
}

+ (BOOL)wantsOverlayEffect;
+ (BOOL)wantsTransparentBackground;
- (void).cxx_destruct;
@property(nonatomic) BOOL preventGoNextOrFinish; // @synthesize preventGoNextOrFinish=_preventGoNextOrFinish;
@property(nonatomic) BOOL widthResizable; // @synthesize widthResizable=_widthResizable;
@property(nonatomic) BOOL expandsAssistantView; // @synthesize expandsAssistantView=_expandsAssistantView;
@property(readonly) NSString *helpButtonDestination; // @synthesize helpButtonDestination=_helpButtonDestination;
@property(retain) NSString *previousAssistantIdentifier; // @synthesize previousAssistantIdentifier=_previousAssistantIdentifier;
@property(retain) NSString *nextAssistantIdentifier; // @synthesize nextAssistantIdentifier=_nextAssistantIdentifier;
@property(retain) IDEAssistantContext *assistantContext; // @synthesize assistantContext=_assistantContext;
- (void)primitiveInvalidate;
- (void)helpAction;
- (void)willGoNextOrFinish;
- (void)willResignCurrentAssistantInAssistantWindowController:(id)arg1;
@property(readonly) BOOL showHelpButton;
@property(readonly) DVTFilterControlBar *filterControlBar;
@property(readonly) NSView *sourceListView;
- (id)finishButtonTitle;
@property(readonly, copy) NSString *assistantTitle;
- (void)finishWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly) BOOL alwaysShowFinish;
@property(readonly) BOOL askAreYouSureBeforeCancel;
@property(readonly) BOOL canCancel;
@property(readonly) BOOL canFinish;
@property(readonly) BOOL canGoBack;
@property(readonly) BOOL canGoForward;
- (BOOL)canBecomeMainViewController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

