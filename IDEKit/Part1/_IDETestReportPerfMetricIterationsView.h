//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class IDETestReportPerfMetricIterationsGraphView, _IDETestReportPerfMetricIterationNumberView;

@interface _IDETestReportPerfMetricIterationsView : NSView
{
    CDUnknownBlockType _numberClickedCallback;
    _IDETestReportPerfMetricIterationNumberView *_selectedView;
    NSView *_firstView;
    IDETestReportPerfMetricIterationsGraphView *_graphView;
    long long _iterationsCount;
}

- (void).cxx_destruct;
@property long long iterationsCount; // @synthesize iterationsCount=_iterationsCount;
@property __weak IDETestReportPerfMetricIterationsGraphView *graphView; // @synthesize graphView=_graphView;
@property(retain) NSView *firstView; // @synthesize firstView=_firstView;
@property(retain) _IDETestReportPerfMetricIterationNumberView *selectedView; // @synthesize selectedView=_selectedView;
@property(copy) CDUnknownBlockType numberClickedCallback; // @synthesize numberClickedCallback=_numberClickedCallback;
- (void)layoutViews;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;

@end

