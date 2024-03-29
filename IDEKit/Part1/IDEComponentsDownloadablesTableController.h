//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/NSTableViewDelegate-Protocol.h>

@class DVTDownloadableManager, DVTKVOQueueForwarder, DVTTableView, NSArray, NSPredicate, NSString;

@interface IDEComponentsDownloadablesTableController : IDEViewController <NSTableViewDelegate>
{
    DVTDownloadableManager *_downloadableManager;
    NSString *_headerTitle;
    NSPredicate *_downloadsFilter;
    DVTKVOQueueForwarder *_allDownloadables;
    DVTTableView *_tableView;
}

+ (id)keyPathsForValuesAffectingItems;
- (void).cxx_destruct;
@property(retain) DVTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain) DVTKVOQueueForwarder *allDownloadables; // @synthesize allDownloadables=_allDownloadables;
@property(retain) NSPredicate *downloadsFilter; // @synthesize downloadsFilter=_downloadsFilter;
@property(copy) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
@property(readonly) NSArray *items;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

