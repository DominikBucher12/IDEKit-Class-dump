//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class IDEAlertEvent, NSArray, NSMutableArray;

@interface IDEAlertsView : NSView
{
    IDEAlertEvent *_alertEvent;
    NSArray *_alerts;
    NSMutableArray *_alertViewControllers;
    NSMutableArray *_dividers;
    BOOL _isTiling;
}

- (void).cxx_destruct;
@property(readonly) NSArray *alertViewControllers; // @synthesize alertViewControllers=_alertViewControllers;
@property(retain, nonatomic) IDEAlertEvent *alertEvent; // @synthesize alertEvent=_alertEvent;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)tile;
- (double)_tile;
@property(readonly) NSArray *alerts; // @synthesize alerts=_alerts;
- (void)uninstallView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
