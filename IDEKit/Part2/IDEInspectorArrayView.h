//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTLayoutView_ML.h>

@class DVTTableView, NSScrollView, NSView;

@interface IDEInspectorArrayView : DVTLayoutView_ML
{
    NSView *_bottomBar;
    DVTTableView *_tableView;
    NSScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(retain) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain) DVTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain) NSView *bottomBar; // @synthesize bottomBar=_bottomBar;
- (void)layoutBottomUp;
- (BOOL)isFlipped;
- (void)layoutTopDown;
- (void)awakeFromNib;

@end

