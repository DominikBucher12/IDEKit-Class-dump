//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTBorderedView.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTGradientImageButton, DVTPathControl, DVTStackBacktrace, IDEComparisonEditor, IDEComparisonEditorChangesStepperView, NSString;
@protocol IDEComparisonEditorCollapsibleSourceList;

@interface IDEComparisonEditorTimelineNavBar : DVTBorderedView <DVTInvalidation>
{
    DVTGradientImageButton *_centerButton;
    DVTGradientImageButton *_collapseToggleButton;
    BOOL _hideSecondaryPathControl;
    BOOL _toggleStateIsCollapsed;
    IDEComparisonEditor *_comparisonEditor;
    DVTPathControl *_primaryPathControl;
    DVTPathControl *_secondaryPathControl;
    IDEComparisonEditorChangesStepperView *_changesStepperControl;
    id <IDEComparisonEditorCollapsibleSourceList> _delegate;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain) id <IDEComparisonEditorCollapsibleSourceList> delegate; // @synthesize delegate=_delegate;
@property(readonly) IDEComparisonEditorChangesStepperView *changesStepperControl; // @synthesize changesStepperControl=_changesStepperControl;
@property(retain) DVTPathControl *secondaryPathControl; // @synthesize secondaryPathControl=_secondaryPathControl;
@property(retain) DVTPathControl *primaryPathControl; // @synthesize primaryPathControl=_primaryPathControl;
@property(retain) IDEComparisonEditor *comparisonEditor; // @synthesize comparisonEditor=_comparisonEditor;
@property BOOL hideSecondaryPathControl;
- (void)primitiveInvalidate;
- (void)centerChangesStepperControl;
- (void)layoutTopDown;
- (void)selectDiff:(id)arg1;
@property BOOL toggleStateIsCollapsed; // @synthesize toggleStateIsCollapsed=_toggleStateIsCollapsed;
- (void)collapseToggle:(id)arg1;
- (void)_updateCollapseToggleImage;
- (void)_dvt_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
