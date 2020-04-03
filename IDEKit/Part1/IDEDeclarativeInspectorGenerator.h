//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEDeclarativeInspectorGenerator : NSObject
{
}

+ (id)generateInspectorInterfaceFromFile:(id)arg1 boundTo:(id)arg2;
+ (id)generateInspectorInterfaceFromXMLElement:(id)arg1 boundTo:(id)arg2;
+ (id)generateInspectorSectionFromXMLElement:(id)arg1 boundTo:(id)arg2 withTitle:(id)arg3 withSliverInsets:(BOOL)arg4;
+ (id)generateInspectorLayoutGroupFromXMLElement:(id)arg1 boundTo:(id)arg2 withSectionSliverInsets:(BOOL)arg3;
+ (id)_visibilityKeyPathsFromXMLElement:(id)arg1;
+ (id)generateInspectorLayoutGroupFromXMLElement:(id)arg1 boundTo:(id)arg2;
+ (void)enumerateTopLevelElements:(id)arg1 boundTo:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (id)topLevelElementsFromIncludeElement:(id)arg1 boundTo:(id)arg2;
+ (id)replacementStringsByTokenIdentifiersForElement:(id)arg1;
+ (id)parseIncludeReferenceInterfaceXMLDocumentFromFile:(id)arg1;
+ (id)parseIncludeReferenceInterfaceXMLDocumentFromFile:(id)arg1 withReplacementStringsByTokenIdentifiers:(id)arg2;
+ (id)parseInterfaceXMLDocumentFromFile:(id)arg1;
+ (id)parseInterfaceXMLDocumentFromFile:(id)arg1 withReplacementStringsByTokenIdentifiers:(id)arg2;
+ (id)disallowedTokenIdentifierCharacters;
+ (long long)lineNumberForRange:(struct _NSRange)arg1 inString:(id)arg2;
+ (id)sectionHeaderTitleItemWithTitle:(id)arg1;
+ (id)localizedStringForAttributeNamed:(id)arg1 inXMLElement:(id)arg2 fromInspectorController:(id)arg3;

@end
