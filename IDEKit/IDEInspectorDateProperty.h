//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSDatePicker;

@interface IDEInspectorDateProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    NSDatePicker *_datePicker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)userDidChangeValue:(id)arg1;
- (double)baseline;

@end

