//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class NSNumber;

@interface IDESearchPanel : NSPanel
{
    NSNumber *_explicitLiveResizeDuration;
}

- (void).cxx_destruct;
@property(retain) NSNumber *explicitLiveResizeDuration; // @synthesize explicitLiveResizeDuration=_explicitLiveResizeDuration;
- (void)sendEvent:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (double)animationResizeTime:(struct CGRect)arg1;
- (BOOL)canBecomeKeyWindow;

@end

