//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBezierPath, NSColor, NSShadow;

@interface IDEAnalyzerResultStepDrawable : NSObject
{
    NSBezierPath *_arrowStemPath;
    NSBezierPath *_arrowHeadPath;
    NSColor *_pathColor;
    NSShadow *_shadow;
}

- (void).cxx_destruct;
@property(readonly) NSShadow *shadow; // @synthesize shadow=_shadow;
@property(readonly) NSColor *pathColor; // @synthesize pathColor=_pathColor;
@property(readonly) NSBezierPath *arrowHeadPath; // @synthesize arrowHeadPath=_arrowHeadPath;
@property(readonly) NSBezierPath *arrowStemPath; // @synthesize arrowStemPath=_arrowStemPath;
- (void)drawInRect:(struct CGRect)arg1;
- (id)initWithArrowStemPath:(id)arg1 headPath:(id)arg2 color:(id)arg3 shadow:(id)arg4;

@end

