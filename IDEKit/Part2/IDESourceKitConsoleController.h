//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/IDECommandHandler-Protocol.h>
#import <IDEKit/IDECommandHandlerVendor-Protocol.h>

@class NSString, NSTextField, NSTextView, _IDESourceKitConsoleCommandHandler;

@interface IDESourceKitConsoleController : NSWindowController <IDECommandHandlerVendor, IDECommandHandler>
{
    _IDESourceKitConsoleCommandHandler *_commandHandler;
    NSTextView *_logTextView;
    NSTextField *_inputTextField;
}

+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSTextField *inputTextField; // @synthesize inputTextField=_inputTextField;
@property(retain, nonatomic) NSTextView *logTextView; // @synthesize logTextView=_logTextView;
- (void)inputTextFieldDidChange:(id)arg1;
- (void)_scrollToBottom;
- (void)_appendCommandResult:(id)arg1;
- (void)_handleCommandString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadSourceKitConsole:(id)arg1;
- (void)_appendPrompt;
- (id)init;
- (BOOL)validateUserInterfaceItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

