//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTInvalidation_NSObject.h>

#import <IDEKit/IDEOpenInProjectViewControllerDataSource-Protocol.h>

@class DVTStackBacktrace, IDERecentsHelper, NSString;

@interface IDEOpenInProjectViewControllerRecentsDataSource : DVTInvalidation_NSObject <IDEOpenInProjectViewControllerDataSource>
{
    IDERecentsHelper *_helper;
}

- (void).cxx_destruct;
@property(retain) IDERecentsHelper *helper; // @synthesize helper=_helper;
- (void)updateWithPreUpdateCallback:(CDUnknownBlockType)arg1 postUpdateCallback:(CDUnknownBlockType)arg2;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

