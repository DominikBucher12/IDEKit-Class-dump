//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/NSObject-Protocol.h>

@protocol IDEOpenInProjectViewControllerDataSource <NSObject, DVTInvalidation>
- (void)updateWithPreUpdateCallback:(void (^)(void))arg1 postUpdateCallback:(void (^)(NSArray *))arg2;
@end

