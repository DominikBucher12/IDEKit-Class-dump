//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSOutlineViewDelegate-Protocol.h>

@class NSOutlineView;

@protocol IDEAbstractFindNavigatorOutlineViewDelegate <NSOutlineViewDelegate>
- (void)outlineView:(NSOutlineView *)arg1 batchSelectionDidChangeEventsDuring:(void (^)(void))arg2;
- (BOOL)outlineView:(NSOutlineView *)arg1 doCommandBySelector:(SEL)arg2;
@end
