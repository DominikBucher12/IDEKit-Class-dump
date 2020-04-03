//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IDETimelineGraphDecoratorTickIterator : NSObject
{
    NSArray *_ticks;
    unsigned long long _currentDataIndex;
}

+ (id)iteratorWithTicks:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long currentDataIndex; // @synthesize currentDataIndex=_currentDataIndex;
- (void)advanceToTime:(unsigned long long)arg1;
- (void)resetToTime:(unsigned long long)arg1;
- (unsigned long long)_findIndexOfTime:(unsigned long long)arg1 startingAtIndex:(unsigned long long)arg2;
- (id)initWithTicks:(id)arg1;

@end
