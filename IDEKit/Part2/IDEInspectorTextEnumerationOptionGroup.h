//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEInspectorKeyPath, NSArray, NSString;

@interface IDEInspectorTextEnumerationOptionGroup : NSObject
{
    BOOL _dynamic;
    NSString *_title;
    IDEInspectorKeyPath *_valuesKeyPath;
    IDEInspectorKeyPath *_displayValueKeyPath;
    IDEInspectorKeyPath *_displayImagesKeyPath;
    IDEInspectorKeyPath *_visibleKeyPath;
    NSArray *_options;
}

+ (id)optionGroupsForInspectorProperty:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSArray *options; // @synthesize options=_options;
@property(readonly, getter=isDynamic) BOOL dynamic; // @synthesize dynamic=_dynamic;
@property(readonly) IDEInspectorKeyPath *visibleKeyPath; // @synthesize visibleKeyPath=_visibleKeyPath;
@property(readonly) IDEInspectorKeyPath *displayImagesKeyPath; // @synthesize displayImagesKeyPath=_displayImagesKeyPath;
@property(readonly) IDEInspectorKeyPath *displayValueKeyPath; // @synthesize displayValueKeyPath=_displayValueKeyPath;
@property(readonly) IDEInspectorKeyPath *valuesKeyPath; // @synthesize valuesKeyPath=_valuesKeyPath;
@property(readonly) NSString *title; // @synthesize title=_title;
- (id)initWithXMLElement:(id)arg1 targetingInspectorProperty:(id)arg2;

@end
