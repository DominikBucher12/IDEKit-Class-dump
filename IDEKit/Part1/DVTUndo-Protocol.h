//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/DVTInvalidation-Protocol.h>

@protocol DVTUndoManagerDelegate;

@protocol DVTUndo <DVTInvalidation>
@property(retain, nonatomic) id <DVTUndoManagerDelegate> delegate;
@property(readonly) BOOL willAutomaticallyUndoNextChangeGroup;
- (void)automaticallyUndoNextChangeGroup;
@end

