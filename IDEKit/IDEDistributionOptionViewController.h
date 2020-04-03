//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class IDEDistributionOption, IDEDistributionOptionViewControllerConfiguration;

@interface IDEDistributionOptionViewController : IDEViewController
{
    BOOL _needsInteraction;
    BOOL _showAdditionalOptionsGroupLabel;
    IDEDistributionOptionViewControllerConfiguration *_configuration;
    IDEDistributionOption *_option;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL showAdditionalOptionsGroupLabel; // @synthesize showAdditionalOptionsGroupLabel=_showAdditionalOptionsGroupLabel;
@property(readonly, nonatomic) BOOL needsInteraction; // @synthesize needsInteraction=_needsInteraction;
@property(readonly, nonatomic) IDEDistributionOption *option; // @synthesize option=_option;
@property(retain, nonatomic) IDEDistributionOptionViewControllerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) BOOL isInAdditionalOptionsGroup;
- (id)loadContent;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (void)willGoNext;
@property(readonly, nonatomic) BOOL canGoNext;
- (id)initWithOption:(id)arg1;

@end

