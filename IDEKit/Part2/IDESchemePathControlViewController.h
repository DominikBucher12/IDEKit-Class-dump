//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/DVTPathCellDelegate-Protocol.h>
#import <IDEKit/NSMenuDelegate-Protocol.h>
#import <IDEKit/NSPathControlDelegate-Protocol.h>

@class DVTPathControl, DVTStackBacktrace, IDENavigableItem, IDENavigableItemCoordinator, IDESchemeManagerNavigable, IDEWorkspace, NSString;

@interface IDESchemePathControlViewController : NSViewController <NSPathControlDelegate, DVTPathCellDelegate, NSMenuDelegate, DVTInvalidation>
{
    IDENavigableItemCoordinator *_navigableItemCoordinator;
    unsigned long long _menusOpen;
    DVTPathControl *_pathControl;
    IDESchemeManagerNavigable *_rootNavigable;
    IDEWorkspace *_workspace;
}

+ (id)keyPathsForValuesAffectingSelectedNavigable;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(retain, nonatomic) IDESchemeManagerNavigable *rootNavigable; // @synthesize rootNavigable=_rootNavigable;
@property(readonly, nonatomic) DVTPathControl *pathControl; // @synthesize pathControl=_pathControl;
- (id)pathCell:(id)arg1 accessibilityDescriptionForPathComponentCell:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)didUpdateRunDestinationMenu:(id)arg1;
- (void)didUpdateSchemeMenu:(id)arg1;
- (void)pathCell:(id)arg1 didUpdateMenu:(id)arg2;
- (BOOL)pathCell:(id)arg1 shouldSeparateDisplayOfChildItemsForItem:(id)arg2;
@property(retain) IDENavigableItem *selectedNavigable;
- (void)loadView;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1 window:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
