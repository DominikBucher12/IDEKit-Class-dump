//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEWorkspaceWindow, NSAlert, NSButton, NSError, NSImageView, NSProgressIndicator, NSTextField, NSWindow;

@interface IDEExecutionHoldAlertHelper : NSObject
{
    IDEWorkspaceWindow *_window;
    NSError *_error;
    BOOL _alertShowing;
    NSWindow *_sheet;
    NSImageView *_appIconImageWell;
    NSTextField *_errMessageTextField;
    NSTextField *_errInformativeTextField;
    NSButton *_firstButton;
    NSProgressIndicator *_firstButtonSpinner;
    NSButton *_secondButton;
    NSProgressIndicator *_secondButtonSpinner;
    NSButton *_thirdButton;
    NSAlert *_alert;
}

- (void).cxx_destruct;
@property(retain) NSAlert *alert; // @synthesize alert=_alert;
@property __weak NSButton *thirdButton; // @synthesize thirdButton=_thirdButton;
@property __weak NSProgressIndicator *secondButtonSpinner; // @synthesize secondButtonSpinner=_secondButtonSpinner;
@property __weak NSButton *secondButton; // @synthesize secondButton=_secondButton;
@property __weak NSProgressIndicator *firstButtonSpinner; // @synthesize firstButtonSpinner=_firstButtonSpinner;
@property __weak NSButton *firstButton; // @synthesize firstButton=_firstButton;
@property __weak NSTextField *errInformativeTextField; // @synthesize errInformativeTextField=_errInformativeTextField;
@property __weak NSTextField *errMessageTextField; // @synthesize errMessageTextField=_errMessageTextField;
@property __weak NSImageView *appIconImageWell; // @synthesize appIconImageWell=_appIconImageWell;
@property(retain) NSWindow *sheet; // @synthesize sheet=_sheet;
@property BOOL alertShowing; // @synthesize alertShowing=_alertShowing;
- (void)dismissAlert:(id)arg1;
- (void)showAlert;
- (void)_showOnlyFirstButton;
- (id)initWithWindow:(id)arg1 error:(id)arg2;

@end

