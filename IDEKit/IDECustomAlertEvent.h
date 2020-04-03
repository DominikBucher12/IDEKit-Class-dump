//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEAlertEvent.h>

@class IDEKeyboardShortcut;

@interface IDECustomAlertEvent : IDEAlertEvent
{
    IDEKeyboardShortcut *_keyboardShortcut;
}

+ (id)createNewEvent;
+ (id)customAlertEventForIdentifier:(id)arg1;
+ (id)customAlertEvents;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) IDEKeyboardShortcut *keyboardShortcut; // @synthesize keyboardShortcut=_keyboardShortcut;
- (id)description;
- (void)remove;
- (void)saveToUserDefaults;
- (id)propertyList;
- (id)alertDefaults;
- (void)changeKeyboardShortcut:(id)arg1;
- (id)keyBinding;
- (id)initWithDefaults:(id)arg1;
- (id)init;

@end

