//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IDEProvisioningSettingsSigningEditorViewControllerReuseStore : NSObject
{
    long long _position;
    NSArray *_reusableViewControllers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *reusableViewControllers; // @synthesize reusableViewControllers=_reusableViewControllers;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(readonly) NSArray *discardedViewControllers;
- (id)popReusableViewController;
- (id)initWithReusableViewControllers:(id)arg1;

@end

