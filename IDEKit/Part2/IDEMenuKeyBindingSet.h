//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEKeyBindingSet.h>

@class NSMutableDictionary;

@interface IDEMenuKeyBindingSet : IDEKeyBindingSet
{
    NSMutableDictionary *_menuKeyBindingForCommandIdentifier;
    NSMutableDictionary *_menuKeyBindingForCombinedIdentifier;
    NSMutableDictionary *_menuKeyBindingsForCommandGroupIdentifier;
    id _keyBindingDidChangeShortcutsNotificationObservingToken;
}

+ (id)defaultKeyBindingSet;
+ (Class)_defaultMenuKeyBindingSetClass;
+ (void)initialize;
- (void).cxx_destruct;
- (void)activate;
- (void)activateWithMenuDefinitionExtensionIdentifiers:(id)arg1;
- (void)activateWithMenu:(id)arg1 menuDefinitionExtensionIdentifier:(id)arg2 activatedMenuBindings:(id)arg3;
- (id)prefixedKeyboardShortcuts;
- (void)_keyBindingSetWillRemoveKeyBinding:(id)arg1;
- (void)_keyBindingSetDidInsertKeyBinding:(id)arg1;
- (id)menuKeyBindingsForCommandGroupIdentifier:(id)arg1;
- (id)menuItemForCombinedIdentifier:(id)arg1;
- (id)menuKeyBindingForCombinedIdentifier:(id)arg1;
- (id)menuItemForCommandIdentifier:(id)arg1;
- (id)menuKeyBindingForCommandIdentifier:(id)arg1;
- (id)deltaDictionary;
- (void)updateDictionary;
- (void)primitiveInvalidate;
- (id)initWithDictionary:(id)arg1;
- (void)_appendMenuKeyBindingsDictionary:(id)arg1;
- (void)_appendDebuggingAdditionUIKeyBindingsToMenuKeyBindingSet:(id)arg1;
- (void)_appendKeyBindingsToMenuKeyBindingSet:(id)arg1 menuDefinitionExtensionAttribute:(id)arg2 allowedEditorDocumentIdentifiers:(id)arg3;
- (void)_appendKeyBindingsToMenuKeyBindingSet:(id)arg1 menuDefinitionExtension:(id)arg2 group:(id)arg3 groupIdentifier:(id)arg4 parentTitle:(id)arg5;
- (BOOL)getLockedModifierMask:(unsigned long long *)arg1 unlockedModifierMask:(unsigned long long *)arg2 forKeyBinding:(id)arg3;

@end

