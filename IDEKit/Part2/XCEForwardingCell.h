//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSCell.h>

@class IDEConfigurableDataNode;

@interface XCEForwardingCell : NSCell
{
    IDEConfigurableDataNode *_dataNode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IDEConfigurableDataNode *dataNode; // @synthesize dataNode=_dataNode;
- (void)clear;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

