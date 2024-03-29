//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class DVTStepperTextField, IDEInspectorKeyPath, NSString, NSTextField;

@interface IDEInspectorScrubberProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    NSString *_nilPlaceholder;
    DVTStepperTextField *_scrubber;
    NSTextField *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTextField *label; // @synthesize label=_label;
@property(retain, nonatomic) DVTStepperTextField *scrubber; // @synthesize scrubber=_scrubber;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (BOOL)canTileIntoColumnsWithMinimumWidth:(double)arg1;
- (void)userDidChangeValue:(id)arg1;
- (BOOL)roundPrecisionValue;
- (float)precisionValue;
- (float)incrementValue;
- (BOOL)integerValues;
- (BOOL)hasButtons;
- (float)maxValue;
- (float)minValue;
- (double)baseline;
- (id)nibName;

@end

