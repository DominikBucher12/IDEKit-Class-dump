//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDECommandHandler-Protocol.h>
#import <IDEKit/IDECommandHandlerVendor-Protocol.h>

@class NSString;
@protocol IDESelectionSource;

@interface IDESingleFileCommandHandler : NSObject <IDECommandHandlerVendor, IDECommandHandler>
{
    id <IDESelectionSource> _selectionSource;
}

+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
- (void).cxx_destruct;
- (void)compileFile:(id)arg1;
- (void)analyzeFile:(id)arg1;
- (void)preprocessFile:(id)arg1;
- (void)showAssemblyCodeForFile:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)_editor;
- (id)initWithSelectionSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

