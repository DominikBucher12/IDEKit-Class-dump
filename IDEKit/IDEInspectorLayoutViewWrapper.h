//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorLayoutGroup.h>

@class NSView;

@interface IDEInspectorLayoutViewWrapper : IDEInspectorLayoutGroup
{
    NSView *_view;
}

- (void).cxx_destruct;
- (void)insertSubgroup:(id)arg1 atIndex:(long long)arg2;
- (void)uninstallFromInspectorContentView;
- (void)installIntoInspectorContentView:(id)arg1;
- (void)pushFrameOriginsToViews;
- (void)layoutGroupsBottomUp;
- (void)layoutGroupsTopDown;
- (id)attributeDescription;
- (id)initWithView:(id)arg1;

@end

