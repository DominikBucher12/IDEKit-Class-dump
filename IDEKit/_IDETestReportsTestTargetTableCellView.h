//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import <IDEKit/IDETestsInTestableObserver-Protocol.h>

@class IDETest, NSButton, NSString;
@protocol IDETestReport_TestGroup;

@interface _IDETestReportsTestTargetTableCellView : NSTableCellView <IDETestsInTestableObserver>
{
    IDETest *_jumpToTest;
    NSButton *_jumpButton;
    id <IDETestReport_TestGroup> _testGroup;
}

- (void).cxx_destruct;
@property(retain) id <IDETestReport_TestGroup> testGroup; // @synthesize testGroup=_testGroup;
@property __weak NSButton *jumpButton; // @synthesize jumpButton=_jumpButton;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)viewDidMoveToSuperview;
- (void)fitViews;
- (void)testsChanged:(id)arg1;
- (void)allTestablesChanged;
- (void)testablesChanged:(id)arg1;
- (void)jumpToTestSourceCode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

