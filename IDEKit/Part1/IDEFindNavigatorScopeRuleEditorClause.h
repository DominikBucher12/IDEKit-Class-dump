//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDEFindNavigatorScopeRuleEditorClause : NSObject
{
    NSString *_identifier;
    Class _predicateClass;
    NSString *_displayString;
}

- (void).cxx_destruct;
@property(readonly) NSString *displayString; // @synthesize displayString=_displayString;
@property(readonly) Class predicateClass; // @synthesize predicateClass=_predicateClass;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithPredicateClass:(Class)arg1 identifier:(id)arg2 displayString:(id)arg3;

@end

