//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSButton, NSStepper, NSString, NSTextField;

@interface IDEInspectorRangeProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_nonNilValueKeyPath;
    IDEInspectorKeyPath *_nonNilValueObjectKeyPath;
    NSString *_nilPlaceholder;
    BOOL _allowsNilValues;
    long long _checkStateForNonNil;
    long long _checkStateForNil;
    NSTextField *_locationTextField;
    NSTextField *_lengthTextField;
    NSStepper *_locationStepper;
    NSStepper *_lengthStepper;
    NSTextField *_locationLabel;
    NSTextField *_lengthLabel;
    NSButton *_hasValueCheckBox;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSButton *hasValueCheckBox; // @synthesize hasValueCheckBox=_hasValueCheckBox;
@property(retain, nonatomic) NSTextField *lengthLabel; // @synthesize lengthLabel=_lengthLabel;
@property(retain, nonatomic) NSTextField *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) NSStepper *lengthStepper; // @synthesize lengthStepper=_lengthStepper;
@property(retain, nonatomic) NSStepper *locationStepper; // @synthesize locationStepper=_locationStepper;
@property(retain, nonatomic) NSTextField *lengthTextField; // @synthesize lengthTextField=_lengthTextField;
@property(retain, nonatomic) NSTextField *locationTextField; // @synthesize locationTextField=_locationTextField;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)refresh;
- (void)toggleNilValue:(id)arg1;
- (void)userDidEnterLength:(id)arg1;
- (void)userDidEnterLocation:(id)arg1;
- (void)userDidIncrementLength:(id)arg1;
- (void)userDidIncrementLocation:(id)arg1;
- (void)_applyUserRangeFromSender:(id)arg1 byMappingValues:(CDUnknownBlockType)arg2;
- (double)baseline;
- (id)nibName;
- (void)loadView;
- (void)setupRefreshTriggersAndConfigure;
- (BOOL)allowsNilValues;

@end

