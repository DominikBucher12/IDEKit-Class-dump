//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, IDEDistributionContext, IDEDistributionItemSummaryNode, NSTextView;

@interface IDEDistributionItemSummaryViewController : IDEViewController
{
    NSTextView *_detailTextView;
    DVTBorderedView *_summaryHeaderView;
    IDEDistributionItemSummaryNode *_node;
    IDEDistributionContext *_context;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IDEDistributionContext *context; // @synthesize context=_context;
@property(retain, nonatomic) IDEDistributionItemSummaryNode *node; // @synthesize node=_node;
@property __weak DVTBorderedView *summaryHeaderView; // @synthesize summaryHeaderView=_summaryHeaderView;
@property(retain, nonatomic) NSTextView *detailTextView; // @synthesize detailTextView=_detailTextView;
- (void)revealProfile:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNode:(id)arg1 context:(id)arg2;

@end
