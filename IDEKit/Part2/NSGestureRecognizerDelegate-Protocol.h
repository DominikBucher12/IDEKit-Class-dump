//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSEvent, NSGestureRecognizer, NSTouch;

@protocol NSGestureRecognizerDelegate <NSObject>

@optional
- (BOOL)gestureRecognizer:(NSGestureRecognizer *)arg1 shouldReceiveTouch:(NSTouch *)arg2;
- (BOOL)gestureRecognizer:(NSGestureRecognizer *)arg1 shouldBeRequiredToFailByGestureRecognizer:(NSGestureRecognizer *)arg2;
- (BOOL)gestureRecognizer:(NSGestureRecognizer *)arg1 shouldRequireFailureOfGestureRecognizer:(NSGestureRecognizer *)arg2;
- (BOOL)gestureRecognizer:(NSGestureRecognizer *)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(NSGestureRecognizer *)arg2;
- (BOOL)gestureRecognizerShouldBegin:(NSGestureRecognizer *)arg1;
- (BOOL)gestureRecognizer:(NSGestureRecognizer *)arg1 shouldAttemptToRecognizeWithEvent:(NSEvent *)arg2;
@end

