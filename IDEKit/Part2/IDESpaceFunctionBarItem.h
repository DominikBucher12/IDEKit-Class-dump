//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSSpaceTouchBarItem.h>

@interface IDESpaceFunctionBarItem : NSSpaceTouchBarItem
{
    double _overriddenMaxWidth;
    double _overriddenMinWidth;
}

+ (id)buttonWidthSpace;
@property double overriddenMinWidth; // @synthesize overriddenMinWidth=_overriddenMinWidth;
@property double overriddenMaxWidth; // @synthesize overriddenMaxWidth=_overriddenMaxWidth;
- (double)maximumWidth;
- (double)minimumWidth;

@end
