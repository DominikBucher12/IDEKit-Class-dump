//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDELaunchActionOptionViewController.h>

@class NSButton;

@interface IDELaunchInTerminalOptionViewController : IDELaunchActionOptionViewController
{
    NSButton *_useTerminalRadioButton;
    NSButton *_useXcodeBuiltInRadioButton;
}

+ (BOOL)availableForScheme:(id)arg1;
- (void).cxx_destruct;
@property __weak NSButton *useXcodeBuiltInRadioButton; // @synthesize useXcodeBuiltInRadioButton=_useXcodeBuiltInRadioButton;
@property __weak NSButton *useTerminalRadioButton; // @synthesize useTerminalRadioButton=_useTerminalRadioButton;
- (void)setConsoleMode:(long long)arg1;
- (void)changeConsoleSelection:(id)arg1;
- (void)updateRadioButtonState;
- (void)loadView;

@end

