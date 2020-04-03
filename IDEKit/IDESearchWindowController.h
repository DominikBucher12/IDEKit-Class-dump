//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class DVTBorderedView, DVTSearchField, IDESearchWindowLocation, IDESearchWindowSearchField, NSAppearance, NSArray, NSEvent, NSImage, NSImageView, NSNumber, NSString, NSView, NSVisualEffectView;
@protocol DVTCancellable, DVTInvalidation;

@interface IDESearchWindowController : NSWindowController
{
    NSView *_contentViewContainer;
    IDESearchWindowSearchField *_searchField;
    NSImageView *_magnifyingGlassImageView;
    NSVisualEffectView *_visualEffectView;
    NSArray *_searchAccessories;
    DVTBorderedView *_separatorView;
    id <DVTInvalidation> _terminationDisablingToken;
    id <DVTInvalidation> _dismissalObservations;
    NSNumber *_explicitContentWidth;
    NSNumber *_explicitContentHeight;
    IDESearchWindowLocation *_windowLocation;
    double _originalSearchRightPadding;
    double _originalSearchLeftPadding;
    double _originalWindowMinimumWidth;
    id <DVTCancellable> _appAppearanceObservation;
    BOOL _pinned;
    BOOL _isWindowOpen;
    NSString *_searchText;
    NSAppearance *_explicitContentAppearance;
    NSView *_contentView;
    NSEvent *_lastLeftMouseDownCausingImplicitDismiss;
}

+ (id)preferenceNameForBaseName:(id)arg1 suffix:(id)arg2;
+ (id)locationPreferenceSuffix;
+ (id)heightPreferenceSuffix;
+ (id)widthPreferenceSuffix;
+ (id)makeAccessoryButtonWithImage:(id)arg1 alternateImage:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (BOOL)isSystemInDarkMode;
- (void).cxx_destruct;
@property(readonly) __weak NSEvent *lastLeftMouseDownCausingImplicitDismiss; // @synthesize lastLeftMouseDownCausingImplicitDismiss=_lastLeftMouseDownCausingImplicitDismiss;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSAppearance *explicitContentAppearance; // @synthesize explicitContentAppearance=_explicitContentAppearance;
@property(readonly) DVTSearchField *searchField; // @synthesize searchField=_searchField;
@property(readonly) NSString *searchText; // @synthesize searchText=_searchText;
@property(readonly) BOOL isWindowOpen; // @synthesize isWindowOpen=_isWindowOpen;
@property(nonatomic) BOOL pinned; // @synthesize pinned=_pinned;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (void)windowDidResignKey:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidChange:(id)arg1;
- (long long)minimumInstantQueryLength;
- (void)openSelectedContent;
- (void)searchAction:(id)arg1;
- (void)updateSearchWithText:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)okAction:(id)arg1;
- (void)prepareToShowWindow;
- (void)pushAppearance;
- (id)effectiveContentAppearance;
- (id)defaultContentAppearance;
- (BOOL)supportsVibrantContent;
- (id)effectiveChromeAppearance;
- (double)minimumWidth;
- (double)minimumContentHeight;
- (double)initialContentHeight;
- (double)defaultContentHeight;
- (BOOL)isVerticallyResizable;
- (id)contentViewNibName;
- (void)showWindow;
- (void)inferContextBeforeShowing;
- (void)registerWindowDismissalObservers;
- (void)windowWillClose:(id)arg1;
- (id)openWindowTerminationDisablingReason;
- (void)layoutWindowFromPreferencesPinningTopCenter:(BOOL)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readLayoutPreferences;
- (void)sizeWindowForContentHeight:(double)arg1 animate:(BOOL)arg2 display:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)updateWindowMinimumSizeForContentHeight:(double)arg1;
- (struct CGRect)frameForContentHeight:(double)arg1;
@property(readonly) NSImage *searchFieldIcon;
- (void)windowDidLoad;
- (struct CGRect)unexpandedFrame;
- (id)targetScreen;
- (void)windowDidChangeScreen:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)captureWindowSizePreference;
- (void)captureWindowLocationPreference;
- (id)userDefaultsHeightName;
- (id)userDefaultsWidthName;
- (id)userDefaultsLocationName;
- (id)userDefaultsBaseName;
- (struct CGSize)unexpandedContentSize;
- (double)searchAccessoryYAdjustment;
- (void)setSearchAccessories:(id)arg1;
- (void)setSearchFieldPlaceholder:(id)arg1;
- (id)effectivePlaceholderStringForegroundColor;
@property(readonly) BOOL isWindowInDarkMode;
@property(readonly) BOOL isSystemInDarkMode;
- (id)window;
- (void)dealloc;
- (id)init;

@end

