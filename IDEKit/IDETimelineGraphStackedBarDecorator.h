//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DTGraphKit/DTTimelineDecorator.h>

@class NSArray, NSMutableArray;

@interface IDETimelineGraphStackedBarDecorator : DTTimelineDecorator
{
    unsigned long long _stackCount;
    NSMutableArray *_tickPositions;
    NSMutableArray *_stackData;
    NSArray *_stackTitles;
    NSArray *_stackColors;
    BOOL _prefersMainThreadDecorations;
    unsigned long long _duration;
}

- (void).cxx_destruct;
@property BOOL prefersMainThreadDecorations; // @synthesize prefersMainThreadDecorations=_prefersMainThreadDecorations;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
- (id)decorateContainer:(struct DTTimelineDecorationContainer *)arg1;
- (id)stackDataAtTime:(unsigned long long)arg1;
- (void)addStackData:(id)arg1 atTime:(unsigned long long)arg2;
- (void)setDefaultsForPlane:(id)arg1;
@property(readonly, nonatomic) unsigned long long currentDataIndex;
- (id)initWithDuration:(unsigned long long)arg1 stackTitles:(id)arg2 stackColors:(id)arg3;
- (id)init;
- (BOOL)mustDecorateOnMainThread;

@end
