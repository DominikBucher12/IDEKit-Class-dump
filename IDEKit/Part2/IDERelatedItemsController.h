//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSMenuDelegate-Protocol.h>

@class IDEWorkspace, IDEWorkspaceDocument, NSString;
@protocol IDERelatedItemsControllerDelegate;

@interface IDERelatedItemsController : NSObject <NSMenuDelegate>
{
    IDEWorkspace *_workspace;
    IDEWorkspaceDocument *_workspaceDocument;
    id <IDERelatedItemsControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IDERelatedItemsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IDEWorkspaceDocument *workspaceDocument; // @synthesize workspaceDocument=_workspaceDocument;
@property(readonly, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void)menuNeedsUpdate:(id)arg1;
- (void)navigateToRecentItem:(id)arg1;
- (id)makeRelatedItemsPopUpButtonWithTheme:(id)arg1;
- (id)initWithWorkspace:(id)arg1 workspaceDocument:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

