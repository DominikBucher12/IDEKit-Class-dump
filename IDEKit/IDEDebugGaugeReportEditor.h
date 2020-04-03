//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

@class DVTStackView_AppKitAutolayout, IDEDebugGaugeReportTopSection, IDELaunchSession, NSLayoutConstraint, NSScrollView;
@protocol IDEDebugGaugeReportContentDelegate, IDEDebugGaugeReportTopSectionContentDelegate;

@interface IDEDebugGaugeReportEditor : IDEEditor
{
    IDELaunchSession *_launchSession;
    IDEDebugGaugeReportTopSection *_reportTopSection;
    id <IDEDebugGaugeReportContentDelegate> _contentDelegate;
    id <IDEDebugGaugeReportTopSectionContentDelegate> _topSectionContentDelegate;
    double _minimumWidth;
    NSScrollView *_mainContentScrollView;
    DVTStackView_AppKitAutolayout *_stackView;
    NSLayoutConstraint *_stackViewHeightConstraintToBeRemoved;
    NSLayoutConstraint *_minimumWidthConstraint;
}

+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (void)_profileWithToolIdentifer:(id)arg1 detachOrNew:(unsigned long long)arg2 launchSession:(id)arg3 tabController:(id)arg4;
- (void).cxx_destruct;
@property __weak NSLayoutConstraint *minimumWidthConstraint; // @synthesize minimumWidthConstraint=_minimumWidthConstraint;
@property __weak NSLayoutConstraint *stackViewHeightConstraintToBeRemoved; // @synthesize stackViewHeightConstraintToBeRemoved=_stackViewHeightConstraintToBeRemoved;
@property __weak DVTStackView_AppKitAutolayout *stackView; // @synthesize stackView=_stackView;
@property __weak NSScrollView *mainContentScrollView; // @synthesize mainContentScrollView=_mainContentScrollView;
@property(readonly) double minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property(retain, nonatomic) id <IDEDebugGaugeReportContentDelegate> contentDelegate; // @synthesize contentDelegate=_contentDelegate;
- (void)primitiveInvalidate;
- (void)attachInstrumentsWithToolIdentifer:(id)arg1;
- (void)loadView;
- (void)_fixUpScrollView;
- (void)_handleContentDelegateDidChange;
- (id)launchSession;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;

@end

