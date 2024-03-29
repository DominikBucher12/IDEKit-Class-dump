//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEDistributionStepViewController.h>

@class DVTDelayedInvocation, NSString;

@interface IDEDistributionPackagingStepViewController : IDEDistributionStepViewController
{
    NSString *_currentMessage;
    DVTDelayedInvocation *_delayedMessageUpdate;
    BOOL _cancelled;
    double _startTime;
}

+ (BOOL)skipStepForContext:(id)arg1 assistantDirection:(int)arg2;
- (void).cxx_destruct;
- (void)setCancelled:(BOOL)arg1;
- (void)_pipelineFailedWithError:(id)arg1;
- (void)_pipelineSucceeded;
- (void)_updateMessage;
- (void)_runPipeline;
- (void)viewDidInstall;
- (BOOL)canGoPrevious;
- (BOOL)canGoNext;
- (id)title;
- (id)nibName;
- (void)primitiveInvalidate;

@end

