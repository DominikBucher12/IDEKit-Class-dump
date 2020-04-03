//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTLayoutView_ML.h>

#import <IDEKit/DVTWindowActivationStateObserver-Protocol.h>

@class DVTStackView_ML, NSArray, NSDictionary, NSImage, NSPopUpButton, NSString;
@protocol DVTCancellable, IDEFindNavigatorPathControlDelegate;

@interface IDEFindNavigatorPathControl : DVTLayoutView_ML <DVTWindowActivationStateObserver>
{
    DVTStackView_ML *_stackView;
    NSDictionary *_segmentValues;
    NSDictionary *_segmentPopUpInsetViews;
    NSArray *_dividerImageViews;
    NSImage *_activeDividerImage;
    NSImage *_inactiveDividerImage;
    id <DVTCancellable> _windowActivationObservation;
    NSPopUpButton *_popUpButtonForMeasuring;
    id <IDEFindNavigatorPathControlDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain) id <IDEFindNavigatorPathControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void)userChoseSegmentValue:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)window:(id)arg1 didChangeActivationState:(long long)arg2;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)refresh;
- (CDStruct_bf6d4a14)popUpButtonInset;
- (void)synchronizePopUp:(id)arg1 forSegment:(id)arg2;
- (struct CGSize)popUpSizeForTitle:(id)arg1;
- (id)makePopUpButtonInsetView;
- (id)makePopUpButton;
- (void)scheduleRefresh;
- (id)segmentForPopUpButton:(id)arg1;
- (id)popUpInsetViewForSegment:(id)arg1;
- (id)valueForSegment:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

