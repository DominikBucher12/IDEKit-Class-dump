//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/IDEBindableDeclarativeInspectorController-Protocol.h>

@class DVTStackBacktrace, IDEInspectorContentView, IDEWorkspaceTabController, NSArray, NSArrayController, NSBundle, NSString;
@protocol IDEParagraphStylePopoverControllerDelegate;

@interface IDEAttributedStringControlParagraphStylePopoverController : NSViewController <IDEBindableDeclarativeInspectorController, DVTInvalidation>
{
    NSArrayController *_inspectedObjectsController;
    NSArray *_inspectedObjects;
    IDEInspectorContentView *_inspectorView;
    id <IDEParagraphStylePopoverControllerDelegate> _delegate;
}

+ (id)inspectedArrayControllerKeys;
+ (void)initialize;
- (void).cxx_destruct;
@property __weak id <IDEParagraphStylePopoverControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IDEWorkspaceTabController *workspaceTabController;
- (void)valuesDidFinishChanging;
- (void)loadView;
@property(readonly) IDEInspectorContentView *inspectorContentView;
@property(readonly) id inspectedObject;
@property(copy) NSArray *inspectedObjects;
- (void)primitiveInvalidate;
@property(readonly) NSBundle *bundle;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

