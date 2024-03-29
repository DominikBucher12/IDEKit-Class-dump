//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSTrackingArea;

@interface IDEDownloadsPrefToolchainItemTableCellView : NSTableCellView
{
    BOOL _showContextButton;
    NSTrackingArea *_trackingArea;
}

+ (id)keyPathsForValuesAffectingShowWarningIcon;
- (void).cxx_destruct;
@property(retain) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property BOOL showContextButton; // @synthesize showContextButton=_showContextButton;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)showWarningIcon;
- (void)updateTrackingAreas;

@end

