//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDEAuxiliaryEditorProviderAttributes : NSObject
{
    NSString *_title;
    NSString *_tooltip;
    Class _editorClass;
}

+ (id)sharedAttributes;
- (void).cxx_destruct;
@property(readonly, nonatomic) Class editorClass; // @synthesize editorClass=_editorClass;
@property(readonly, nonatomic) NSString *tooltip; // @synthesize tooltip=_tooltip;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 tooltip:(id)arg2 providerClass:(Class)arg3;

@end

