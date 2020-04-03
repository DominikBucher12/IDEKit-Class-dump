//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEAssistantContext.h>

@class IDETemplateInstantiationContext, IDEWorkspaceDocument, NSArray;

@interface IDETemplateAssistantContext : IDEAssistantContext
{
    BOOL _alwaysShowProjectNavigator;
    BOOL _skipFileChooser;
    BOOL _preventDestinationChoice;
    IDETemplateInstantiationContext *_instantiationContext;
    IDEWorkspaceDocument *_createdDocument;
}

- (void).cxx_destruct;
@property BOOL preventDestinationChoice; // @synthesize preventDestinationChoice=_preventDestinationChoice;
@property BOOL skipFileChooser; // @synthesize skipFileChooser=_skipFileChooser;
@property(readonly) BOOL alwaysShowProjectNavigator; // @synthesize alwaysShowProjectNavigator=_alwaysShowProjectNavigator;
@property(retain) IDEWorkspaceDocument *createdDocument; // @synthesize createdDocument=_createdDocument;
@property(retain, nonatomic) IDETemplateInstantiationContext *instantiationContext; // @synthesize instantiationContext=_instantiationContext;
- (void)_asyncFinishTemplateInstantiationAfterCreatingWorkspaceDocumentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)asyncFinishTemplateInstantiationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setWorkspaceTabController:(id)arg1;
@property(readonly, copy) NSArray *targetWorkspaces;
- (struct CGSize)windowSize;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

