//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class DVTDynamicTableView, NSTableView;

@protocol DVTDynamicTableViewDataSource <NSObject>
- (long long)dynamicTableView:(NSTableView *)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInDynamicTableView:(DVTDynamicTableView *)arg1;
@end

