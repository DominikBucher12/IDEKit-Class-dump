//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/DVTTextAnnotation.h>

@class _TtC13IDEFoundation15IDETestLocation;

@interface _IDETestingAnnotation : DVTTextAnnotation
{
    _TtC13IDEFoundation15IDETestLocation *_testLocation;
}

+ (id)locationForTestLocation:(id)arg1 inDocument:(id)arg2;
- (void).cxx_destruct;
@property(readonly) _TtC13IDEFoundation15IDETestLocation *testLocation; // @synthesize testLocation=_testLocation;
- (void)_updateLocationForDocument:(id)arg1;
- (void)_showHoverRunIcon;
- (void)_updateTestStateWithTestManager:(id)arg1;
- (id)initWithTestLocation:(id)arg1;

@end
