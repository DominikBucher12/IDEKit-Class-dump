//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTFileDataType, DVTStackBacktrace, NSMutableArray, NSString;
@protocol IDEEditorDocumentDerivedContentOwner, NSCopying;

@interface IDEEditorDocumentDerivedContentProvider : NSObject <DVTInvalidation>
{
    id <IDEEditorDocumentDerivedContentOwner> _owner;
    NSMutableArray *_registeredClients;
    DVTFileDataType *_derivedContentType;
    id <NSCopying> _derivedContent;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) id <NSCopying> derivedContent; // @synthesize derivedContent=_derivedContent;
@property(readonly) DVTFileDataType *derivedContentType; // @synthesize derivedContentType=_derivedContentType;
- (void)primitiveInvalidate;
- (void)setDerivedContent:(id)arg1 ofType:(id)arg2;
- (BOOL)hasClients;
- (void)unregisterClient:(id)arg1;
- (void)registerClient:(id)arg1;
- (id)owner;
- (id)init;
- (id)initWithOwner:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

