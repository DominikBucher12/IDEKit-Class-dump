//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

@class IDETestReportDiagnosticAssistantNavigableItem;

@interface IDETestReportDiagnosticAssistantDocument : IDEEditorDocument
{
    IDETestReportDiagnosticAssistantNavigableItem *_navigableItem;
}

+ (BOOL)autosavesInPlace;
+ (BOOL)shouldUnlockFileURLBeforeMakingChanges;
- (void).cxx_destruct;
@property(retain) IDETestReportDiagnosticAssistantNavigableItem *navigableItem; // @synthesize navigableItem=_navigableItem;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (int)readOnlyStatus;
- (BOOL)canSave;

@end
