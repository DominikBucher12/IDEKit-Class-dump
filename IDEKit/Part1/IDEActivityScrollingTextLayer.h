//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <IDEKit/IDEActivityThemeableLayer-Protocol.h>

@class DVTWeakInterposer, NSArray, NSAttributedString, NSDictionary, NSMutableArray, NSString;

@interface IDEActivityScrollingTextLayer : CALayer <IDEActivityThemeableLayer>
{
    DVTWeakInterposer *_lastUpdateContext_dvtWeakInterposer;
    unsigned long long _activeTransactions;
    NSMutableArray *_textLayers;
    CALayer *_containerLayer;
    NSDictionary *_textAttributes;
    NSString *_textAlignmentMode;
    NSArray *_segments;
    BOOL _isLightBackground;
    BOOL _needsUpdateTextLayer;
    NSDictionary *_defaultAttributes;
}

- (void).cxx_destruct;
@property BOOL needsUpdateTextLayer; // @synthesize needsUpdateTextLayer=_needsUpdateTextLayer;
@property(retain) NSDictionary *defaultAttributes; // @synthesize defaultAttributes=_defaultAttributes;
@property(nonatomic) BOOL isLightBackground; // @synthesize isLightBackground=_isLightBackground;
@property(copy, nonatomic) NSString *textAlignmentMode; // @synthesize textAlignmentMode=_textAlignmentMode;
@property(copy, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)updateTheme;
- (void)setStringSegments:(id)arg1 context:(id)arg2 animateUpdate:(BOOL)arg3;
- (id)_overrideColorTextAttributesOnString:(id)arg1;
@property(readonly) NSString *stringValue;
- (id)attributedStringValueTruncatedToWidth:(double)arg1;
@property(readonly) NSAttributedString *attributedStringValue;
- (void)setHidden:(BOOL)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSublayers;
- (void)setupLayers;
- (void)updateTextLayer;
- (void)updateTextLayerWithContext:(id)arg1 animateUpdate:(BOOL)arg2;
- (void)pushTextLayer:(id)arg1 context:(id)arg2 animateUpdate:(BOOL)arg3;
- (void)_insertAndPositionTextLayer:(id)arg1;
- (void)clearTextLayerStack;
- (double)maximumTextWidth;
- (double)rowHeight;
@property(readonly) NSDictionary *currentTextAttributes;
- (id)effectiveAttributes;
@property __weak id lastUpdateContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
