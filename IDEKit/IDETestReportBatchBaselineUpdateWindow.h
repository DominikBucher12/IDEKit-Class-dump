//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSWindow;

@interface IDETestReportBatchBaselineUpdateWindow : NSWindowController
{
    NSWindow *_owningWindow;
    NSButton *_updateAllTestsButton;
    NSButton *_updateNewTestsButton;
    NSButton *_updateBetterTestsButton;
    NSButton *_updateWorseTestsButton;
    NSButton *_updateSelectedTestsButton;
}

+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
- (void).cxx_destruct;
@property __weak NSButton *updateSelectedTestsButton; // @synthesize updateSelectedTestsButton=_updateSelectedTestsButton;
@property __weak NSButton *updateWorseTestsButton; // @synthesize updateWorseTestsButton=_updateWorseTestsButton;
@property __weak NSButton *updateBetterTestsButton; // @synthesize updateBetterTestsButton=_updateBetterTestsButton;
@property __weak NSButton *updateNewTestsButton; // @synthesize updateNewTestsButton=_updateNewTestsButton;
@property __weak NSButton *updateAllTestsButton; // @synthesize updateAllTestsButton=_updateAllTestsButton;
@property(retain) NSWindow *owningWindow; // @synthesize owningWindow=_owningWindow;
- (void)updateSelectedTests:(id)arg1;
- (void)updateWorseTests:(id)arg1;
- (void)updateBetterTests:(id)arg1;
- (void)updateNewTests:(id)arg1;
- (void)updateAllTests:(id)arg1;
- (unsigned long long)selectedBaselineRecordBehavior;
@property(readonly, nonatomic) BOOL updateSelectedTestsInReport;
- (void)cancel:(id)arg1;
- (void)update:(id)arg1;
- (void)windowDidLoad;

@end
