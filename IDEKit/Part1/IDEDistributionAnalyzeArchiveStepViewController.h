//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEDistributionStepViewController.h>

@interface IDEDistributionAnalyzeArchiveStepViewController : IDEDistributionStepViewController
{
    double _startTime;
}

+ (BOOL)skipStepForContext:(id)arg1 assistantDirection:(int)arg2;
@property double startTime; // @synthesize startTime=_startTime;
- (void)_spinProgressIndicatorForMinimumDurationAndContinue;
- (void)_preloadTeamsWithCallback:(CDUnknownBlockType)arg1;
- (void)_analyzeArchive;
- (BOOL)canGoPrevious;
- (BOOL)canGoNext;
- (id)title;
- (void)viewDidLoad;

@end

