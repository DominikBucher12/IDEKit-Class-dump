//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/_IDENavigableItemFilterMatcher.h>

@class NSString;

@interface _IDENavigableItemFilterSimpleTextMatcher : _IDENavigableItemFilterMatcher
{
    NSString *_text;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)_matchesRepresentedObject:(id)arg1;
- (BOOL)_matchesNavigableItem:(id)arg1;
- (id)_initWithText:(id)arg1;

@end

