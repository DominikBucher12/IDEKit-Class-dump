//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTToolchainOverrideOption, IDEComponentsToolchainsTableController, NSNumber, NSString;

@interface IDEComponentsToolchainsTableRowItem : NSObject
{
    IDEComponentsToolchainsTableController *_controller;
    DVTToolchainOverrideOption *_option;
}

- (void).cxx_destruct;
@property(readonly) DVTToolchainOverrideOption *option; // @synthesize option=_option;
- (id)contextImage;
@property(readonly) NSString *displaySize;
@property(readonly) NSString *origin;
@property(readonly) NSString *createdDate;
@property(readonly) NSString *displayName;
- (void)setIsActive:(id)arg1;
@property(readonly) NSNumber *isActive;
- (BOOL)isValid;
- (id)initWithOption:(id)arg1 controller:(id)arg2;

@end

