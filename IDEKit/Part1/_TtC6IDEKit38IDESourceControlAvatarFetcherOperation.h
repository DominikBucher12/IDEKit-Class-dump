//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC6IDEKit38IDESourceControlAvatarFetcherOperation : NSOperation
{
    MISSING_TYPE *email;
    MISSING_TYPE *size;
    MISSING_TYPE *context;
    MISSING_TYPE *completionHandler;
    MISSING_TYPE *ldapFetcher;
    MISSING_TYPE *operationInFlight;
}

+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)main;
- (void)cancel;
@property(nonatomic) BOOL operationInFlight; // @synthesize operationInFlight;

// Remaining properties
@property(nonatomic, readonly) BOOL executing;
@property(nonatomic, readonly) BOOL finished;

@end

