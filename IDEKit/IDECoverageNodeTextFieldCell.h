//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSArray;

@interface IDECoverageNodeTextFieldCell : NSTextFieldCell
{
    NSArray *_highlightSubranges;
}

+ (id)_filterMatchAttributesForDarkBackground;
+ (id)_filterMatchAttributesForLightBackground;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *highlightSubranges; // @synthesize highlightSubranges=_highlightSubranges;
- (id)attributedStringValue;

@end

