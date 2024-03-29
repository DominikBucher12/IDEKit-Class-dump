//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSArray, NSButton, NSColorPicker, NSString;

@interface IDECanvasAppearanceSwitcherController : NSObject <DVTInvalidation>
{
    NSButton *_button;
    NSColorPicker *_canvasBackgroundColorPicker;
    NSArray *_affectedViews;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_changeCanvasBackgroundToDark:(id)arg1;
- (void)_changeCanvasBackgroundToLight:(id)arg1;
- (void)_changeCanvasBackgroundAutomatically:(id)arg1;
- (void)_updateAffectedViewsWithAppearance:(id)arg1;
- (void)setStateValueOffForItemsInCanvasBackgroundColorMenuExcept:(id)arg1;
- (void)_showCanvasColorPopUp:(id)arg1;
- (void)_createButton;
- (id)switcherButton;
- (void)primitiveInvalidate;
- (id)initWithViews:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

