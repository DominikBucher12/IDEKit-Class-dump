//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class IDEAlert;

@interface IDEAlertViewController : IDEViewController
{
    IDEAlert *_alert;
}

+ (void)uninstallViewControllers;
+ (id)alertViewControllerForAlertIdentifier:(id)arg1;
+ (id)alertViewControllerForAlert:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) IDEAlert *alert; // @synthesize alert=_alert;

@end

