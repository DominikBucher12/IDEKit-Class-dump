//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDECodeCoverageOptionsViewControlsAlignment : NSObject
{
    long long _alignmentKind;
    double _constant;
}

+ (id)leftAlignmentWithConstant:(double)arg1;
+ (id)centerAlignment;
@property double constant; // @synthesize constant=_constant;
@property(readonly) long long alignmentKind; // @synthesize alignmentKind=_alignmentKind;
- (id)initWithAlignmentKind:(long long)arg1;

@end

