//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDELogNavigatorGroupedSchemeItemsCache : NSObject
{
    NSMutableDictionary *_cachedItems;
}

- (void).cxx_destruct;
- (void)cacheLogItem:(id)arg1 using:(id)arg2;
- (id)cachedLogItemForURL:(id)arg1;
- (id)init;

@end

