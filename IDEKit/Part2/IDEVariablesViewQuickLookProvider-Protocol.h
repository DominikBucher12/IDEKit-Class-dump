//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL, NSView;
@protocol IDEDataValue;

@protocol IDEVariablesViewQuickLookProvider <NSObject>
@property(readonly) NSView *quickLookView;
@property(readonly) int loadedState;
- (void)cancelLoading;
- (id)initWithDataValue:(id <IDEDataValue>)arg1 options:(NSDictionary *)arg2;

@optional
@property(readonly) NSString *extensionForTemporaryFile;
@property(readonly) NSURL *existingURLToOpen;
- (NSData *)dataRepresentation;
@end

