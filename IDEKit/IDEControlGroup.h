//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTBorderedView.h>

@class NSArray, NSColor, NSMapTable;

@interface IDEControlGroup : DVTBorderedView
{
    unsigned long long _solidBorderSides;
    NSMapTable *_controlViewToBorderSidesTable;
    NSColor *_innerInactiveBorderColor;
}

- (void).cxx_destruct;
@property(copy) NSColor *innerInactiveBorderColor; // @synthesize innerInactiveBorderColor=_innerInactiveBorderColor;
@property unsigned long long solidBorderSides; // @synthesize solidBorderSides=_solidBorderSides;
- (void)setInactiveBackgroundGradient:(id)arg1;
- (void)setInactiveBackgroundColor:(id)arg1;
- (void)setBackgroundGradient:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderSides:(unsigned long long)arg1;
- (void)setAllInactiveBordersToColor:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)controlViewDidResize:(id)arg1;
- (unsigned long long)numberOfControlViews;
@property(readonly) NSArray *controlViews;
- (void)removeAllControlViews;
- (void)removeControlView:(id)arg1;
- (void)addControlViewLast:(id)arg1;
- (void)addControlViewFirst:(id)arg1;
- (void)_addControlView:(id)arg1 isFirst:(BOOL)arg2;
- (id)_borderedViewForControlView:(id)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)_propagateDrawingPropertiesToSubview:(id)arg1;
- (void)setBorderSides:(unsigned long long)arg1 forControlView:(id)arg2;
- (unsigned long long)borderSidesForControlView:(id)arg1;

@end

