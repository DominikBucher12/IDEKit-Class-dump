//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSRuleEditor.h>

@class NSLayoutConstraint;

@interface IDEFindNavigatorScopeEditorRuleEditor : NSRuleEditor
{
    BOOL _enableScrolling;
    NSLayoutConstraint *_heightConstraint;
}

- (void).cxx_destruct;
@property(retain) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property BOOL enableScrolling; // @synthesize enableScrolling=_enableScrolling;
- (id)enclosingScrollView;
- (struct CGRect)adjustScroll:(struct CGRect)arg1;

@end

