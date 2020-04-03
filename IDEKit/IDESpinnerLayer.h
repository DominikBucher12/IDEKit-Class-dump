//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSColor;

@interface IDESpinnerLayer : CALayer
{
    NSColor *_color;
    unsigned long long _animationStyle;
    CALayer *_containerLayer;
    double _centerMagnitude;
    double _spokeWidth;
    double _spokeHeight;
    double _bottomRadiusToWidthFactor;
    double _topRadiusToWidthFactor;
    double _speedMultiplier;
    double _dimPercent;
}

- (void).cxx_destruct;
@property double dimPercent; // @synthesize dimPercent=_dimPercent;
@property double speedMultiplier; // @synthesize speedMultiplier=_speedMultiplier;
@property double topRadiusToWidthFactor; // @synthesize topRadiusToWidthFactor=_topRadiusToWidthFactor;
@property double bottomRadiusToWidthFactor; // @synthesize bottomRadiusToWidthFactor=_bottomRadiusToWidthFactor;
@property double spokeHeight; // @synthesize spokeHeight=_spokeHeight;
@property double spokeWidth; // @synthesize spokeWidth=_spokeWidth;
@property double centerMagnitude; // @synthesize centerMagnitude=_centerMagnitude;
@property(retain) CALayer *containerLayer; // @synthesize containerLayer=_containerLayer;
@property unsigned long long animationStyle; // @synthesize animationStyle=_animationStyle;
@property(copy, nonatomic) NSColor *color; // @synthesize color=_color;
- (id)_generateSpokeLayer;
- (id)_mutableColorsArray:(struct CGColor *)arg1 stops:(unsigned long long)arg2;
- (void)_addBrightnessAnimationToContainerLayer;
- (void)_addRotationAnimationToContainerLayer;
- (void)_addAnimationToContainerLayer;
- (void)_positionAndRotateSpokeLayers;
- (void)_generatePathsOnLayers;
- (void)_addAndRemoveSpokeLayersForSize:(struct CGSize)arg1;
- (void)_prepareLayersForAnimation;
- (void)setHidden:(BOOL)arg1;
- (void)layoutSublayers;
- (id)init;

@end
