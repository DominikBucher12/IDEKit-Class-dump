//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTDisclosureHeaderView.h>

@class NSTrackingArea;

@interface IDEUtilityDisclosureHeaderView : DVTDisclosureHeaderView
{
    NSTrackingArea *_mouseTracking;
    BOOL _mouseInside;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didCompleteLayout;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setMouseInside:(BOOL)arg1;
- (void)refreshDisclosureButtonVisibility;
- (void)unregisterForMouseEvents;
- (void)registerForMouseEvents;
- (void)commonInit;
- (void)setDisclosed:(BOOL)arg1;
- (void)_updateDisclosureButtonAttributedTitle;
- (id)defaultDisclosureButton;

@end

