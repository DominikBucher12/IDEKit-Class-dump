//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/NSToolbarDelegate-Protocol.h>

@class DVTStackBacktrace, NSArray, NSDictionary, NSMutableArray, NSSet, NSString, NSWindow;

@interface IDEToolbarDelegate : NSObject <NSToolbarDelegate, DVTInvalidation>
{
    NSMutableArray *_allToolbarControllers;
    NSString *_toolbarDefinitionIdentifier;
    NSWindow *_window;
    NSArray *_defaultItemIdentifiers;
    NSArray *_allowedItemIdentifiers;
    NSDictionary *_toolbarItemProviders;
    NSSet *_displayModes;
    NSSet *_sizeModes;
}

+ (unsigned long long)_sizeModeForString:(id)arg1 toolbarIdentifier:(id)arg2;
+ (unsigned long long)_displayModeForString:(id)arg1 toolbarIdentifier:(id)arg2;
+ (void)initialize;
- (void).cxx_destruct;
@property(copy) NSSet *sizeModes; // @synthesize sizeModes=_sizeModes;
@property(copy) NSSet *displayModes; // @synthesize displayModes=_displayModes;
@property(copy) NSDictionary *toolbarItemProviders; // @synthesize toolbarItemProviders=_toolbarItemProviders;
@property(copy) NSArray *allowedItemIdentifiers; // @synthesize allowedItemIdentifiers=_allowedItemIdentifiers;
@property(copy) NSArray *defaultItemIdentifiers; // @synthesize defaultItemIdentifiers=_defaultItemIdentifiers;
@property(retain) NSWindow *window; // @synthesize window=_window;
@property(copy) NSString *toolbarDefinitionIdentifier; // @synthesize toolbarDefinitionIdentifier=_toolbarDefinitionIdentifier;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (void)primitiveInvalidate;
- (id)initWithToolbarDefinitionIdentifier:(id)arg1 window:(id)arg2;
- (void)_initializeItemIdentifiersForToolbarDefinitionExtension:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
