//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTStructuredLayoutTextField.h>

@class NSString;

@interface IDELogNavigatorTextualStatusView : DVTStructuredLayoutTextField
{
    NSString *_textValue;
}

+ (id)keyPathsForValuesAffectingHasDisplayableStatus;
+ (Class)cellClass;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *textValue; // @synthesize textValue=_textValue;
- (BOOL)hasDisplayableStatus;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

