//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEAttributedStringControl, IDEInspectorKeyPath, NSString;

@interface IDEInspectorAttributedStringProperty : IDEInspectorProperty
{
    IDEAttributedStringControl *_attributedStringControl;
    NSString *_explicitPlaceholder;
    IDEInspectorKeyPath *_explicitPlaceholderKeyPath;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_fontDataSourceKeyPath;
    IDEInspectorKeyPath *_appearanceKeyPath;
    IDEInspectorKeyPath *_backgroundColorKeyPath;
    IDEInspectorKeyPath *_defaultTypingAttributesKeyPath;
}

- (void).cxx_destruct;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (double)baseline;
- (void)setupRefreshTriggersAndConfigure;
- (void)awakeFromNib;
- (void)userDidUpdateAttributedStringValue:(id)arg1;
- (void)refresh;
- (double)accessoryCenterAnchor;
- (void)primitiveInvalidate;

@end

