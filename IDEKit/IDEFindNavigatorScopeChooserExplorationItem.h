//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEFindNavigatorGroupScopeOutlineItem;

@interface IDEFindNavigatorScopeChooserExplorationItem : NSObject
{
    NSObject *_source;
    IDEFindNavigatorScopeChooserExplorationItem *_parent;
    IDEFindNavigatorGroupScopeOutlineItem *_outlineItem;
}

- (void).cxx_destruct;
@property(retain) IDEFindNavigatorGroupScopeOutlineItem *outlineItem; // @synthesize outlineItem=_outlineItem;
@property(readonly) IDEFindNavigatorScopeChooserExplorationItem *parent; // @synthesize parent=_parent;
@property(readonly) NSObject *source; // @synthesize source=_source;
- (id)initWithSource:(id)arg1 parent:(id)arg2;
- (id)initWithSource:(id)arg1 parent:(id)arg2 outlineItem:(id)arg3;

@end

