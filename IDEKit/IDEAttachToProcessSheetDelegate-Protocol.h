//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DVTProcessInformation, DVTToolchain, IDEDebuggerSpecifier, NSString;

@protocol IDEAttachToProcessSheetDelegate
- (void)processIDEntered:(int)arg1 debuggerSpecifier:(IDEDebuggerSpecifier *)arg2 debugProcessAsUID:(unsigned int)arg3 toolchain:(DVTToolchain *)arg4 enableMallocStackLogging:(BOOL)arg5;
- (void)processNameEntered:(NSString *)arg1 debuggerSpecifier:(IDEDebuggerSpecifier *)arg2 debugProcessAsUID:(unsigned int)arg3 toolchain:(DVTToolchain *)arg4 enableMallocStackLogging:(BOOL)arg5;
- (void)processInformationSelected:(DVTProcessInformation *)arg1 debuggerSpecifier:(IDEDebuggerSpecifier *)arg2 debugProcessAsUID:(unsigned int)arg3 toolchain:(DVTToolchain *)arg4 enableMallocStackLogging:(BOOL)arg5;
@end
