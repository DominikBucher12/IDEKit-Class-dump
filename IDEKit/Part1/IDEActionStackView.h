//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDECapsuleListView.h>

@protocol IDEActionStackViewDelegate;

@interface IDEActionStackView : IDECapsuleListView
{
    id <IDEActionStackViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <IDEActionStackViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawRect:(struct CGRect)arg1;
- (void)invalidateLayout;
- (id)initWithFrame:(struct CGRect)arg1 stackView:(id)arg2;

@end

