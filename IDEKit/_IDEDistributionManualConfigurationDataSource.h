//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDESigningEditorConfigurationDataSource-Protocol.h>

@class SigningEditorConfiguration;
@protocol IDESigningEditorConfigurationDataSourceDelegate;

@interface _IDEDistributionManualConfigurationDataSource : NSObject <IDESigningEditorConfigurationDataSource>
{
    id <IDESigningEditorConfigurationDataSourceDelegate> _configurationDataSourceDelegate;
}

- (void).cxx_destruct;
@property __weak id <IDESigningEditorConfigurationDataSourceDelegate> configurationDataSourceDelegate; // @synthesize configurationDataSourceDelegate=_configurationDataSourceDelegate;
@property(readonly) SigningEditorConfiguration *configuration;

@end

