//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTLayoutView_ML.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEInspectorLayoutGroup, NSMutableArray, NSString;

@interface IDEInspectorContentView : DVTLayoutView_ML <DVTInvalidation>
{
    NSMutableArray *_borderViews;
    BOOL _drawBackground;
    IDEInspectorLayoutGroup *_layoutStack;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) BOOL drawBackground; // @synthesize drawBackground=_drawBackground;
@property(readonly, nonatomic) IDEInspectorLayoutGroup *layoutStack; // @synthesize layoutStack=_layoutStack;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)updateBorderViews;
- (struct CGRect)bottomBorderRectForSubgroup:(id)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)enumeratePropertiesInLayoutGroup:(id)arg1 outStop:(char *)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)visualElementDidTriggerRefresh:(id)arg1;
- (void)didUninstallLayoutGroup:(id)arg1;
- (void)didInstallLayoutGroup:(id)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (BOOL)isFlipped;
- (void)primitiveInvalidate;
- (id)initWithFrame:(struct CGRect)arg1 layoutStack:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

