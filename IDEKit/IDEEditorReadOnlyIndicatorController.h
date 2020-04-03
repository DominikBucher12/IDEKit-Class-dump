//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTGradientImageButton, DVTObservingToken, DVTStackBacktrace, IDEEditorContext, NSString;

@interface IDEEditorReadOnlyIndicatorController : NSObject <DVTInvalidation>
{
    IDEEditorContext *_editorContext;
    DVTGradientImageButton *_indicatorView;
    DVTObservingToken *_documentStatusObserver;
    int _indicatorStatus;
    BOOL _showReadOnlyIndicator;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) BOOL showReadOnlyIndicator; // @synthesize showReadOnlyIndicator=_showReadOnlyIndicator;
- (void)_updateReadOnlyIndicator;
- (void)primitiveInvalidate;
- (id)readOnlyIndicatorView;
- (id)initWithEditorContext:(id)arg1;
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

