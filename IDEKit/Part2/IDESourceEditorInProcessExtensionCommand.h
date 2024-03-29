//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDESourceEditorExtensionCommand.h>

@class NSObject;
@protocol OS_dispatch_queue, XCSourceEditorCommand;

@interface IDESourceEditorInProcessExtensionCommand : IDESourceEditorExtensionCommand
{
    id <XCSourceEditorCommand> _command;
    NSObject<OS_dispatch_queue> *_commandQueue;
}

+ (void)initialize;
+ (BOOL)shouldToggleCommentsCommandUseExtension;
+ (id)toggleCommentsCommand;
- (void).cxx_destruct;
- (id)performCommandWithParameters:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithCommandDefinition:(id)arg1 inExtension:(id)arg2;

@end

