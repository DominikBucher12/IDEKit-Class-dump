//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEFontAndColorItem-Protocol.h>

@class NSString;

@interface IDEConsoleFontAndColorItem : NSObject <IDEFontAndColorItem>
{
    NSString *_colorPropertyName;
    NSString *_fontPropertyName;
    NSString *_displayName;
}

- (void).cxx_destruct;
- (void)setFont:(id)arg1 forTheme:(id)arg2;
- (void)setColor:(id)arg1 forTheme:(id)arg2;
- (id)fontForTheme:(id)arg1;
- (id)colorForTheme:(id)arg1;
- (id)displayName;
- (id)initWithColorPropertyName:(id)arg1 fontPropertyName:(id)arg2 displayName:(id)arg3;

@end

