//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSToolbar.h>

@class NSSet;

@interface IDECustomToolbar : NSToolbar
{
    NSSet *_allowedDisplayModes;
    NSSet *_allowedSizeModes;
}

- (void).cxx_destruct;
@property(copy) NSSet *allowedSizeModes; // @synthesize allowedSizeModes=_allowedSizeModes;
@property(copy) NSSet *allowedDisplayModes; // @synthesize allowedDisplayModes=_allowedDisplayModes;
- (void)setVisible:(BOOL)arg1;
- (BOOL)_allowsSizeMode:(unsigned long long)arg1;
- (BOOL)_allowsDisplayMode:(unsigned long long)arg1;
- (BOOL)isFullScreen;

@end

