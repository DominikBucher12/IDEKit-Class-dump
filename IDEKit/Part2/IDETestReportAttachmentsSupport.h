//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/QLPreviewPanelDataSource-Protocol.h>
#import <IDEKit/QLPreviewPanelDelegate-Protocol.h>

@class IDETestReportViewController, IDEWorkspace, NSArray, NSOutlineView, NSString, NSView;

@interface IDETestReportAttachmentsSupport : NSObject <QLPreviewPanelDataSource, QLPreviewPanelDelegate>
{
    NSArray *_quickLookURLs;
    NSView *_quickLookPanelOriginView;
    NSOutlineView *_testsOutlineView;
    IDEWorkspace *_workspace;
    IDETestReportViewController *_reportViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak IDETestReportViewController *reportViewController; // @synthesize reportViewController=_reportViewController;
@property(nonatomic) __weak IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(nonatomic) __weak NSOutlineView *testsOutlineView; // @synthesize testsOutlineView=_testsOutlineView;
- (BOOL)previewPanel:(id)arg1 handleEvent:(id)arg2;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (void)quickLookRow:(id)arg1;
- (void)_quickLookNextRow;
- (void)_quickLookPreviousRow;
- (void)quickLookAttachment:(id)arg1 activity:(id)arg2 test:(id)arg3 relativeToView:(id)arg4 loadingHandler:(CDUnknownBlockType)arg5;
- (void)quickLookAttachmentsInActivity:(id)arg1 relativeToView:(id)arg2;
- (void)_showQuickLook:(id)arg1 relativeToView:(id)arg2;
- (void)showCrashLogForTestActivity:(id)arg1 withDataFromURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

