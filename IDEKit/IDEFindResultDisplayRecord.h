//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFindResult, NSNumber;

@interface IDEFindResultDisplayRecord : NSObject
{
    BOOL _completedChildrenFault;
    BOOL _expandedWhileFiltered;
    BOOL _expandedWhileUnfiltered;
    NSNumber *_rowHeight;
    DVTFindResult *_replaceState;
}

- (void).cxx_destruct;
@property(retain) DVTFindResult *replaceState; // @synthesize replaceState=_replaceState;
@property(retain) NSNumber *rowHeight; // @synthesize rowHeight=_rowHeight;
@property BOOL expandedWhileUnfiltered; // @synthesize expandedWhileUnfiltered=_expandedWhileUnfiltered;
@property BOOL expandedWhileFiltered; // @synthesize expandedWhileFiltered=_expandedWhileFiltered;
@property BOOL completedChildrenFault; // @synthesize completedChildrenFault=_completedChildrenFault;
- (BOOL)wasExpandedWhileFilterIsActive:(BOOL)arg1;
- (void)setExpanded:(BOOL)arg1 filterIsActive:(BOOL)arg2;
- (id)description;

@end

