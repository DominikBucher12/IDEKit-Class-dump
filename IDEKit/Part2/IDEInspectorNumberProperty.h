//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSButton, NSNumber, NSNumberFormatter, NSStepper, NSString, NSTextField;

@interface IDEInspectorNumberProperty : IDEInspectorProperty
{
    double _increment;
    double _incrementMagnitude;
    BOOL _allowsNilValues;
    BOOL _enabled;
    BOOL _showsNilValueControl;
    BOOL _allowsFloats;
    BOOL _hasTitle;
    BOOL _isIncremental;
    long long _checkStateForNil;
    long long _checkStateForNonNil;
    IDEInspectorKeyPath *_nonNilValueKeyPath;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_enabledKeyPath;
    IDEInspectorKeyPath *_minValueKeyPath;
    IDEInspectorKeyPath *_maxValueKeyPath;
    IDEInspectorKeyPath *_nilPlaceholderKeyPath;
    NSString *_nilPlaceholder;
    NSString *_title;
    NSString *_nonNilValueLabel;
    NSNumberFormatter *_numberFormatter;
    NSNumber *_maxValue;
    NSNumber *_minValue;
    NSNumber *_minimumSignificantDigits;
    NSNumber *_maximumSignificantDigits;
    NSTextField *_textField;
    NSStepper *_stepper;
    NSTextField *_label;
    NSButton *_checkbox;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSButton *checkbox; // @synthesize checkbox=_checkbox;
@property(retain, nonatomic) NSTextField *label; // @synthesize label=_label;
@property(retain, nonatomic) NSStepper *stepper; // @synthesize stepper=_stepper;
@property(retain, nonatomic) NSTextField *textField; // @synthesize textField=_textField;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)refresh;
- (void)refreshTextField;
- (void)refreshStepper;
- (void)refreshCheckbox;
- (void)toggleNilValue:(id)arg1;
- (void)incrementValue:(id)arg1;
- (void)userDidChangeValue:(id)arg1;
- (id)nonNilValueForObject:(id)arg1;
- (void)clipAndApplyValue:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3;
- (id)clipValue:(id)arg1 forObject:(id)arg2;
- (double)baseline;
- (BOOL)canTileIntoColumnsWithMinimumWidth:(double)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (id)nibName;
- (void)loadView;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;

@end

