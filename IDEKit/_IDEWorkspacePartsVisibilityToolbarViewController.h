//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTToolbarViewController.h>

@class DVTObservingToken;

@interface _IDEWorkspacePartsVisibilityToolbarViewController : DVTToolbarViewController
{
    DVTObservingToken *_navigatorVisibilityObservationToken;
    DVTObservingToken *_debuggerVisibilityObservationToken;
    DVTObservingToken *_inspectorsVisibilityObservationToken;
}

- (void).cxx_destruct;
- (BOOL)validateMenuItem:(id)arg1;
- (id)_menuItemTitleForSplitViewWithTag:(unsigned long long)arg1 state:(BOOL)arg2;
- (void)_menuItemAction:(id)arg1;
- (void)_segmentStateDidChange:(id)arg1;
- (void)_toggleStateForSplitViewWithTag:(unsigned long long)arg1;
- (id)_propertyNameForSplitViewWithTag:(unsigned long long)arg1;
- (id)menuForMenuFormRepresentation;
- (id)_create1010AndLaterControl;
- (void)primitiveInvalidate;
- (id)initWithToolbarItemIdentifier:(id)arg1 window:(id)arg2;

@end

