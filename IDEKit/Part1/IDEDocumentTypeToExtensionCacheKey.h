//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface IDEDocumentTypeToExtensionCacheKey : NSObject <NSCopying>
{
    NSString *_urlScheme;
    NSString *_documentType;
    NSArray *_editorCategories;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDocumentTypeToExtensionCacheKey:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURLScheme:(id)arg1 documentType:(id)arg2 editorCategories:(id)arg3;

@end

