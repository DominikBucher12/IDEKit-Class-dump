//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <IDEKit/DVTReplacementViewDelegate-Protocol.h>

@class IDEResultBundleDocument, NSString;

@interface IDEResultBundleEditor : IDEEditor <DVTReplacementViewDelegate>
{
}

@property(readonly) IDEResultBundleDocument *resultBundleDocument;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

