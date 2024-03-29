//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEAlert.h>

@interface IDEShowEditorAlert : IDEAlert
{
    unsigned long long _action;
    unsigned long long _visibility;
    unsigned long long _destination;
}

+ (id)_editorAreaSplitForDestination:(unsigned long long)arg1 workspaceTabController:(id)arg2;
+ (id)_createEditorAreaSplitForEditorArea:(id)arg1 lastActiveEditorAreaSplit:(id)arg2;
+ (id)_nextExistingEditorAreaSplitForEditorArea:(id)arg1 lastActiveEditorAreaSplit:(id)arg2;
@property(nonatomic) unsigned long long destination; // @synthesize destination=_destination;
@property(nonatomic) unsigned long long visibility; // @synthesize visibility=_visibility;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
- (void)runForEvent:(id)arg1 inWorkspace:(id)arg2 context:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithPropertyList:(id)arg1;
- (id)propertyList;
- (id)valuesForProperty:(id)arg1;
- (id)destinations;
- (id)visibilities;
- (id)actions;

@end

