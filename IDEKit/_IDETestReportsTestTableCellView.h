//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import <IDEKit/IDETestsInTestableObserver-Protocol.h>

@class IDETest, NSButton, NSImageView, NSString;
@protocol IDETestReport_Common;

@interface _IDETestReportsTestTableCellView : NSTableCellView <IDETestsInTestableObserver>
{
    IDETest *_jumpToTest;
    BOOL _selected;
    NSImageView *_statusImageView;
    NSButton *_jumpButton;
    id <IDETestReport_Common> _item;
}

- (void).cxx_destruct;
@property(retain) id <IDETestReport_Common> item; // @synthesize item=_item;
@property __weak NSButton *jumpButton; // @synthesize jumpButton=_jumpButton;
@property __weak NSImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)viewDidMoveToSuperview;
- (void)fitViews;
- (void)testsChanged:(id)arg1;
- (void)allTestablesChanged;
- (void)setBackgroundStyle:(long long)arg1;
- (void)testablesChanged:(id)arg1;
- (void)jumpToTestSourceCode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

