//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDETemplate.h>

#import <IDEKit/NSPasteboardReading-Protocol.h>
#import <IDEKit/NSPasteboardWriting-Protocol.h>

@class NSImage, NSString;

@interface IDETemplate (IDEKitAdditions) <NSPasteboardWriting, NSPasteboardReading>
+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (id)cachedBasicPasteboardTypeAsArray;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (BOOL)_iconRequiresInversion;
@property(readonly, copy) NSImage *templateIcon;
@property(readonly) NSImage *fallbackTemplateIcon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
