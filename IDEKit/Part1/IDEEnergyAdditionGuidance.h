//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IDEEnergyAdditionGuidance : NSObject
{
    BOOL _isOSXAppNapGuidance;
    BOOL _hidden;
    NSString *_message;
    NSArray *_applicableTemplates;
    unsigned long long _verticalPosition;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) BOOL isOSXAppNapGuidance; // @synthesize isOSXAppNapGuidance=_isOSXAppNapGuidance;
@property(nonatomic) unsigned long long verticalPosition; // @synthesize verticalPosition=_verticalPosition;
@property(retain, nonatomic) NSArray *applicableTemplates; // @synthesize applicableTemplates=_applicableTemplates;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;

@end
