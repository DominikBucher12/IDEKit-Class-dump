//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSString, NSTextField;

@interface IDEInspectorStaticStringProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    NSString *_staticText;
    NSTextField *_textField;
}

- (void).cxx_destruct;
@property __weak NSTextField *textField; // @synthesize textField=_textField;
- (void)setupRefreshTriggersAndConfigure;
- (long long)_textAlignmentFromString:(id)arg1;
- (void)refresh;
- (double)baseline;
- (id)view;

@end

