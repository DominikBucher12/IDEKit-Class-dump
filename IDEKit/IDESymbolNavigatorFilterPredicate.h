//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSPredicate.h>

#import <IDEKit/NSCopying-Protocol.h>

@class NSSet;

@interface IDESymbolNavigatorFilterPredicate : NSPredicate <NSCopying>
{
    NSSet *_symbolIDs;
}

- (void).cxx_destruct;
- (BOOL)evaluateWithObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSymbolIdentifers:(id)arg1;

@end
