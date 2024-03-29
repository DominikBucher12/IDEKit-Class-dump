//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextView.h>

#import <IDEKit/DVTFirstResponderShowingView-Protocol.h>

@class DVTFirstResponderDrawingStrategy, DVTNotificationToken, IDEAttributedStringControlTextViewFocusRingOverlay, NSString;
@protocol IDEAttributedStringControlTextViewDelegate;

@interface IDEAttributedStringControlTextView : NSTextView <DVTFirstResponderShowingView>
{
    IDEAttributedStringControlTextViewFocusRingOverlay *_focusRingOverlay;
    DVTFirstResponderDrawingStrategy *_firstResponderDrawingStrategy;
    DVTNotificationToken *_scrollViewFrameChangedToken;
    BOOL _didDrawPlaceholder;
    NSString *_placeholder;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void)didChangeText;
- (void)drawViewBackgroundInRect:(struct CGRect)arg1;
- (void)changeColor:(id)arg1;
- (void)setShowsFirstResponder:(BOOL)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)insertNewline:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)viewDidMoveToWindow;
- (void)scrollViewDidMove:(id)arg1;
- (void)repositionOverlay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property id <IDEAttributedStringControlTextViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

