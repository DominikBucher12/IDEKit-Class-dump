//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DVTFontAndColorTheme, NSColor, NSFont, NSString;

@protocol IDEFontAndColorItem
- (void)setFont:(NSFont *)arg1 forTheme:(DVTFontAndColorTheme *)arg2;
- (void)setColor:(NSColor *)arg1 forTheme:(DVTFontAndColorTheme *)arg2;
- (NSFont *)fontForTheme:(DVTFontAndColorTheme *)arg1;
- (NSColor *)colorForTheme:(DVTFontAndColorTheme *)arg1;
- (NSString *)displayName;
@end

