//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextView.h>

#import <IDEKit/IDEApplicationEventDelegate-Protocol.h>

@class DVTNotificationToken, IDEKeyBindingFieldCell, NSButton, NSColor, NSString;

@interface IDEKeyBindingFieldEditor : NSTextView <IDEApplicationEventDelegate>
{
    unsigned int _savedHotKeyOperatingMode;
    BOOL _needsToRestoreSavedHotKeyOperatingMode;
    DVTNotificationToken *_windowDidBecomeKeyObserverToken;
    DVTNotificationToken *_windowDidResignKeyObserverToken;
    IDEKeyBindingFieldCell *_editingCell;
    NSButton *_addKeyboardShortcutButton;
    NSButton *_deleteKeyboardShortcutButton;
    NSColor *_borderColor;
    struct CGSize _buttonOffset;
    struct CGSize _buttonOffet;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize buttonOffet; // @synthesize buttonOffet=_buttonOffet;
@property(retain, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(readonly) IDEKeyBindingFieldCell *editingCell; // @synthesize editingCell=_editingCell;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)shouldDrawInsertionPoint;
- (void)drawRect:(struct CGRect)arg1;
- (id)acceptableDragTypes;
- (id)writablePasteboardTypes;
- (id)readablePasteboardTypes;
- (void)endEditingKeyboardShortcut;
- (void)deleteKeyboardShortcut:(id)arg1;
- (void)addKeyboardShortcut:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)resetCursorRects;
- (BOOL)application:(id)arg1 shouldSendEvent:(id)arg2;
- (void)beginEditingKeyboardShortcutForCell:(id)arg1;
- (void)_setSelectionFromEvent:(id)arg1;
- (void)_syncDisplay;
- (void)viewDidMoveToWindow;
- (void)_restoreHotKeyOperationMode;
- (void)_disableHotKeyOperationMode;
- (void)setFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

