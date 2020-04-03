//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEAssistantContext.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEMigrationContext, NSString;

@interface IDEMigrationAssistantContext : IDEAssistantContext <DVTInvalidation>
{
    IDEMigrationContext *_migrationContext;
}

+ (Class)migrationContextClass;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) IDEMigrationContext *migrationContext; // @synthesize migrationContext=_migrationContext;
- (void)setWorkspaceTabController:(id)arg1;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

