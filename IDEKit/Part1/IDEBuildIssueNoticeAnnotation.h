//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEBuildIssueAnnotation.h>

@interface IDEBuildIssueNoticeAnnotation : IDEBuildIssueAnnotation
{
    BOOL _isCurrentNote;
}

+ (id)nonCurrentTheme;
+ (id)inactiveCurrentTheme;
+ (id)activeTheme;
+ (id)sidebarIconBorderMask;
+ (id)sidebarIcon;
+ (unsigned long long)severity;
+ (double)precedence;
@property BOOL isCurrentNote; // @synthesize isCurrentNote=_isCurrentNote;
- (BOOL)isHighlightedRangesVisible;
- (id)currentStateInTextView:(id)arg1;
- (id)annotationDisplayName;
- (id)init;

@end

