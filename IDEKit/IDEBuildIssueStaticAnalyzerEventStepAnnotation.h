//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEBuildIssueAnnotation.h>

@interface IDEBuildIssueStaticAnalyzerEventStepAnnotation : IDEBuildIssueAnnotation
{
    BOOL _isCurrentStep;
}

+ (id)_nonCurrentStepTheme;
+ (id)_currentStepTheme;
+ (id)sidebarIconBorderMask;
+ (id)sidebarIcon;
+ (double)precedence;
@property BOOL isCurrentStep; // @synthesize isCurrentStep=_isCurrentStep;
- (BOOL)isHighlightedRangesVisible;
- (id)currentStateInTextView:(id)arg1;
- (id)init;

@end

