//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEDistributionMethod;

@interface _IDEDistributionMethodUIWrapper : NSObject
{
    BOOL _selected;
    IDEDistributionMethod *_distributionMethod;
}

+ (id)wrapperForDistributionMethod:(id)arg1;
- (void).cxx_destruct;
@property(getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(readonly) IDEDistributionMethod *distributionMethod; // @synthesize distributionMethod=_distributionMethod;

@end

