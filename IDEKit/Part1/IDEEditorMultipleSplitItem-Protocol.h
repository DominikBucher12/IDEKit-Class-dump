//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEEditorArea, IDEEditorMultipleSplit, NSArray;

@protocol IDEEditorMultipleSplitItem <NSObject>
@property(nonatomic, readonly) struct CGSize minimumContentViewFrameSize;
@property(nonatomic, readonly) NSArray *editorAreaSplits;
@property(nonatomic, readonly) IDEEditorArea *editorArea;
@property(nonatomic, readonly) IDEEditorMultipleSplit *parentEditorMultipleSplit;
- (void)resetEditorSizes;
- (BOOL)canResetEditorSizes;
@end
