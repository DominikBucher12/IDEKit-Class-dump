//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSWindow;

@protocol _TtP6IDEKit26IDENavigationOverlayTarget_
@property(nonatomic, readonly) NSString *navigationOverlayTargetAccessibilityTitle;
@property(nonatomic, readonly) BOOL wantsHighlightEdgeAdornments;
@property(nonatomic, readonly) double highlightFrameCornerRadius;
@property(nonatomic, readonly) double highlightFrameBorderWidth;
- (struct CGRect)hitTestFrameInWindow:(NSWindow *)arg1;
- (struct CGRect)highlightFrameInWindow:(NSWindow *)arg1;
@end

