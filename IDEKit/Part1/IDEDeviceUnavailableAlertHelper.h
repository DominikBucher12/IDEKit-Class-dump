//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDevice, IDERunContextManager, NSAlert, NSError, NSString, NSWindow;

@interface IDEDeviceUnavailableAlertHelper : NSObject
{
    BOOL _result;
    NSError *_unavailabilityError;
    NSString *_deviceIdentifier;
    NSString *_deviceName;
    NSWindow *_window;
    CDUnknownBlockType _availabilityHandler;
    NSAlert *_alert;
    IDERunContextManager *_runContextManager;
    DVTDevice *_device;
}

- (void).cxx_destruct;
@property(retain) DVTDevice *device; // @synthesize device=_device;
@property(retain) IDERunContextManager *runContextManager; // @synthesize runContextManager=_runContextManager;
@property(retain) NSAlert *alert; // @synthesize alert=_alert;
@property(copy) CDUnknownBlockType availabilityHandler; // @synthesize availabilityHandler=_availabilityHandler;
@property(retain) NSWindow *window; // @synthesize window=_window;
@property(retain) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) NSError *unavailabilityError; // @synthesize unavailabilityError=_unavailabilityError;
@property BOOL result; // @synthesize result=_result;
- (id)_genericUnavailabilityError;
- (void)showAlert:(id)arg1;
- (id)initWithDevice:(id)arg1 runContextManager:(id)arg2 window:(id)arg3 availabilityHandler:(CDUnknownBlockType)arg4;

@end

