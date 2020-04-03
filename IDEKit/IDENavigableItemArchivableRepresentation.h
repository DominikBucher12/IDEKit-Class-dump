//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSCoding-Protocol.h>
#import <IDEKit/NSCopying-Protocol.h>
#import <IDEKit/NSPasteboardReading-Protocol.h>
#import <IDEKit/NSPasteboardWriting-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTStackBacktrace, NSArray, NSString;

@interface IDENavigableItemArchivableRepresentation : NSObject <NSCopying, NSCoding, NSPasteboardWriting, NSPasteboardReading>
{
    id _domainIdentifier;
    NSArray *_identifierPath;
    unsigned long long _indexOfDocumentIdentifier;
    DVTFileDataType *_contextualDocumentType;
    DVTDocumentLocation *_documentLocation;
    NSString *_geniusCategoryIdentifier;
    DVTStackBacktrace *_creationBacktrace;
}

+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) DVTStackBacktrace *creationBacktrace; // @synthesize creationBacktrace=_creationBacktrace;
@property(copy) NSString *geniusCategoryIdentifier; // @synthesize geniusCategoryIdentifier=_geniusCategoryIdentifier;
@property(readonly) DVTDocumentLocation *documentLocation; // @synthesize documentLocation=_documentLocation;
@property(readonly) DVTFileDataType *contextualDocumentType; // @synthesize contextualDocumentType=_contextualDocumentType;
@property(readonly) unsigned long long indexOfDocumentIdentifier; // @synthesize indexOfDocumentIdentifier=_indexOfDocumentIdentifier;
@property(readonly) NSArray *identifierPath; // @synthesize identifierPath=_identifierPath;
@property(readonly) id domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToArchivableRepresentation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithNavigableItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

