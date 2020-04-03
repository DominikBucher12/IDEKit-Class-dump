//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol IDEBlueprint, IDETestableProvider;

@protocol IDEBlueprintProvider <DVTInvalidation, NSObject>
+ (NSArray *)availableSwiftVersions;
@property(nonatomic, readonly) id <IDETestableProvider> testableProvider;
- (id <IDEBlueprint>)blueprintForName:(NSString *)arg1;
- (id <IDEBlueprint>)blueprintForIdentifier:(NSString *)arg1;
@property(nonatomic, readonly) NSString *classPrefix;
@property(nonatomic, readonly) NSString *organizationName;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSArray *blueprints;

@optional
@property(nonatomic, readonly) NSArray *sourcePackageReferences;
@property(nonatomic) int buildSystemType;
@end
