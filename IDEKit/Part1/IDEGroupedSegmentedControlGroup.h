//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface IDEGroupedSegmentedControlGroup : NSObject <NSCopying>
{
    NSString *_identifier;
    NSArray *_items;
    unsigned long long _trackingMode;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long trackingMode; // @synthesize trackingMode=_trackingMode;
@property(readonly) NSArray *items; // @synthesize items=_items;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (id)debugDescription;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToGroupedSegmentedControlGroup:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 items:(id)arg2 trackingMode:(unsigned long long)arg3;

@end
