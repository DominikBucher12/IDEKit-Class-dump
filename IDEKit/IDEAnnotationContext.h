//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/DVTAnnotationContext.h>

@class IDEEditor, IDEWorkspace, IDEWorkspaceTabController, NSDocument;

@interface IDEAnnotationContext : DVTAnnotationContext
{
    IDEEditor *_editor;
    NSDocument *_document;
    IDEWorkspaceTabController *_workspaceTabController;
}

- (void).cxx_destruct;
@property(readonly) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(readonly) NSDocument *document; // @synthesize document=_document;
@property(readonly) IDEEditor *editor; // @synthesize editor=_editor;
- (id)description;
@property(readonly) IDEWorkspace *workspace;
- (id)initWithEditor:(id)arg1 document:(id)arg2 fileDataType:(id)arg3 workspaceTabController:(id)arg4;
- (id)initWithFileDataType:(id)arg1;

@end

