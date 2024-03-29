//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSArray, NSString;

@interface IDEInspectorChooserCategory : NSObject <DVTInvalidation>
{
    NSArray *choices;
    NSString *title;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) NSString *title; // @synthesize title;
@property(readonly) NSArray *choices; // @synthesize choices;
- (void)primitiveInvalidate;
- (id)initWithTitle:(id)arg1 choices:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

