//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, NSBox, NSTextField;

@interface IDEAccountPrefsServerDetailViewController : IDEViewController
{
    NSTextField *_addressTextField;
    NSTextField *_textField;
    DVTBorderedView *_borderedView;
    NSTextField *_largeTextField;
    NSBox *_separator1;
    NSBox *_separator2;
}

- (void).cxx_destruct;
@property(retain) NSBox *separator2; // @synthesize separator2=_separator2;
@property(retain) NSBox *separator1; // @synthesize separator1=_separator1;
@property __weak NSTextField *largeTextField; // @synthesize largeTextField=_largeTextField;
@property(retain) DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property __weak NSTextField *textField; // @synthesize textField=_textField;
@property __weak NSTextField *addressTextField; // @synthesize addressTextField=_addressTextField;
- (id)contextMenu;
- (void)setRepresentedObject:(id)arg1;
- (void)loadView;

@end
