//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class DVTExpressionTextField, IDEInspectorKeyPath, NSString;

@interface IDEInspectorExpressionFieldProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_placeholderKeyPath;
    NSString *_placeholder;
    DVTExpressionTextField *_expressionField;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DVTExpressionTextField *expressionField; // @synthesize expressionField=_expressionField;
- (void)userDidChangeValue:(id)arg1;
- (void)primitiveInvalidate;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (id)view;
- (double)baseline;

@end

