//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class NSImageView, NSLayoutConstraint, NSTextField, NSView;
@protocol IDEDebugGaugeReportTopSectionContentDelegate;

@interface IDEDebugGaugeReportTopSection : IDEViewController
{
    id <IDEDebugGaugeReportTopSectionContentDelegate> _contentDelegate;
    NSImageView *_imageView;
    NSTextField *_titleLabel;
    NSView *_titleAccessoryContainer;
    NSLayoutConstraint *_titleAccessoryContainerWidthConstraintToBeDeleted;
    NSView *_centerTitleAccessoryContainer;
    NSLayoutConstraint *_centerTitleAccessoryContainerWidthConstraintToBeDeleted;
    NSTextField *_shortDescriptionLabel;
    NSView *_shortDescriptionContainer;
    NSView *_descriptionContainer;
    NSView *_accessoryContainer;
    NSView *_contentContainer;
    NSView *_v2Look;
    NSView *_v1Look;
}

+ (id)descriptionFont;
- (void).cxx_destruct;
@property __weak NSView *v1Look; // @synthesize v1Look=_v1Look;
@property __weak NSView *v2Look; // @synthesize v2Look=_v2Look;
@property __weak NSView *contentContainer; // @synthesize contentContainer=_contentContainer;
@property __weak NSView *accessoryContainer; // @synthesize accessoryContainer=_accessoryContainer;
@property __weak NSView *descriptionContainer; // @synthesize descriptionContainer=_descriptionContainer;
@property __weak NSView *shortDescriptionContainer; // @synthesize shortDescriptionContainer=_shortDescriptionContainer;
@property __weak NSTextField *shortDescriptionLabel; // @synthesize shortDescriptionLabel=_shortDescriptionLabel;
@property __weak NSLayoutConstraint *centerTitleAccessoryContainerWidthConstraintToBeDeleted; // @synthesize centerTitleAccessoryContainerWidthConstraintToBeDeleted=_centerTitleAccessoryContainerWidthConstraintToBeDeleted;
@property __weak NSView *centerTitleAccessoryContainer; // @synthesize centerTitleAccessoryContainer=_centerTitleAccessoryContainer;
@property __weak NSLayoutConstraint *titleAccessoryContainerWidthConstraintToBeDeleted; // @synthesize titleAccessoryContainerWidthConstraintToBeDeleted=_titleAccessoryContainerWidthConstraintToBeDeleted;
@property __weak NSView *titleAccessoryContainer; // @synthesize titleAccessoryContainer=_titleAccessoryContainer;
@property __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property __weak NSImageView *imageView; // @synthesize imageView=_imageView;
- (void)loadView;
- (void)_addContentSubviews;
- (BOOL)useV2Look;
- (void)_addAccessoryView;
- (id)_createLabel:(id)arg1 selectable:(BOOL)arg2;
- (void)_addDescription;
- (void)_addShortDescription;
- (void)_addTopSectionCenterTitleAccessoryView;
- (void)_addTopSectionTitleAccessoryView;
- (void)_addSubView:(id)arg1 toContainerView:(id)arg2 subviewProvidesWidth:(BOOL)arg3;
- (id)initWithContentDelegate:(id)arg1;

@end

