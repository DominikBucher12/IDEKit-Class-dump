//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class IDEDebugGaugeReportContentBackground, NSLayoutConstraint, NSTextField, NSView;

@interface IDEDebugGaugeReportSection : IDEViewController
{
    NSView *_headerContainer;
    NSTextField *_titleLabel;
    NSView *_accessoryContainerView;
    IDEDebugGaugeReportContentBackground *_contentContainer;
    NSLayoutConstraint *_widthConstraintToRemoveAtRuntime;
}

+ (id)labelFont;
- (void).cxx_destruct;
@property __weak NSLayoutConstraint *widthConstraintToRemoveAtRuntime; // @synthesize widthConstraintToRemoveAtRuntime=_widthConstraintToRemoveAtRuntime;
@property __weak IDEDebugGaugeReportContentBackground *contentContainer; // @synthesize contentContainer=_contentContainer;
@property __weak NSView *accessoryContainerView; // @synthesize accessoryContainerView=_accessoryContainerView;
@property __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property __weak NSView *headerContainer; // @synthesize headerContainer=_headerContainer;
- (void)_installTitleAccessoryView:(id)arg1;
- (void)addContentView:(id)arg1;
- (void)_addContentView:(id)arg1 topSpaceOffset:(long long)arg2 bottomSpaceOffset:(long long)arg3;
- (id)initWithTitle:(id)arg1 contentView:(id)arg2;
- (id)initWithTitle:(id)arg1 accessoryView:(id)arg2 contentView:(id)arg3 topSpaceOffset:(long long)arg4 bottomSpaceOffset:(long long)arg5 hasBottomBorder:(BOOL)arg6;

@end

