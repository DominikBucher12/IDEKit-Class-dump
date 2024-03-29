//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class DVTObservingToken, IDEActivityActionButtonLayer, IDEActivityProgressIndicatorLayer, IDEActivityReport, IDEActivityScrollingTextLayer, NSMutableArray;

@interface IDEActivityPopUpReportLayer : CALayer
{
    IDEActivityProgressIndicatorLayer *_progressIndicatorLayer;
    IDEActivityScrollingTextLayer *_scrollingTextLayer;
    IDEActivityActionButtonLayer *_cancelButtonLayer;
    NSMutableArray *_stringSegments;
    BOOL _paused;
    DVTObservingToken *_kvoActivityReportTitleSegmentsToken;
    DVTObservingToken *_kvoActivityReportProgressToken;
    DVTObservingToken *_kvoActivityReportTitleToken;
    DVTObservingToken *_kvoActivityReportThrottleFactorToken;
    BOOL _isActiveWindowStyle;
    BOOL _makeSpaceForIndeterminateProgressIndicator;
    IDEActivityReport *_activityReport;
    double _spaceNeededForMultiActionIndicator;
}

+ (id)keyPathsForValuesAffectingIndeterminateReportInProgress;
+ (id)createActivityReportLayer;
+ (struct CGSize)defaultSizeForPopUpStyle;
- (void).cxx_destruct;
@property(nonatomic) BOOL makeSpaceForIndeterminateProgressIndicator; // @synthesize makeSpaceForIndeterminateProgressIndicator=_makeSpaceForIndeterminateProgressIndicator;
@property(nonatomic) double spaceNeededForMultiActionIndicator; // @synthesize spaceNeededForMultiActionIndicator=_spaceNeededForMultiActionIndicator;
@property(nonatomic) BOOL isActiveWindowStyle; // @synthesize isActiveWindowStyle=_isActiveWindowStyle;
@property(retain, nonatomic) IDEActivityReport *activityReport; // @synthesize activityReport=_activityReport;
- (double)spaceNeededForCancelButtonLayer;
- (BOOL)shouldShowCancelButtonLayer;
@property(readonly) BOOL indeterminateReportInProgress;
- (void)updateVisibilityForCancelButtonAndAdjustLayoutIfNeeded;
- (void)updateVisibilityForTextFieldAndAdjustLayoutIfNeeded;
- (BOOL)shouldHideProgress;
- (void)startObservingActivityReport;
- (void)stopObservingActivityReport;
- (void)updateScrollingTextFieldStringValue;
- (void)_updateStringSegments:(id)arg1;
- (id)_pausedAttributes;
- (id)defaultIdleActionString;
- (id)nonFailedBuildTextAttributes;
- (id)defaultIdleTitle;
- (id)defaultReportTitle;
- (id)defaultCompletionSummary;
- (void)sizeToFit;
- (struct CGPoint)imageLayerPosition;
- (void)updateConstraints;
- (id)description;
- (id)init;
- (void)tearDownLayer;

@end

