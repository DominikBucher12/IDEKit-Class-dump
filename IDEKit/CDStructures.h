//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AEDesc {
    unsigned int _field1;
    struct OpaqueAEDataStorageType **_field2;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct NSEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct OpaqueAEDataStorageType;

struct _IDEKeyBindingFieldCellFlags {
    unsigned int delegateRespondsToKeyboardShortcutIsPrefix:1;
    unsigned int delegateRespondsToAllowsMultipleKeyboardShortcut:1;
    unsigned int delegateRespondsToAlternateKeyBindings:1;
    unsigned int delegateRespondsToValidatedKeyboardShortcut:1;
    unsigned int delegateRespondsToDidEndEditing:1;
    unsigned int delegateRespondsToDidAddKeyboardShortcut:1;
    unsigned int delegateRespondsToWillRemoveKeyboardShortcut:1;
    unsigned int delegateRespondsToWillReturnAttributedString:1;
    unsigned int suppressTabAlignment:1;
    unsigned int RESERVED:23;
};

struct _IDEKeyBindingFlags {
    unsigned int isAlternate:1;
    unsigned int isGroupedAlternate:1;
    unsigned int isNavigation:1;
    unsigned int isConflicted:1;
    unsigned int isConflictedWithHotKey:1;
    unsigned int isShiftModifierMaskLocked:1;
    unsigned int isOptionModifierMaskLocked:1;
    unsigned int isCommandModifierMaskLocked:1;
    unsigned int isControlModifierMaskLocked:1;
    unsigned int disablesPostingKeyboardShortcutsDidChangeNotification:1;
    unsigned int RESERVED:23;
};

struct _IDEKeyBindingSetFlags {
    unsigned int needsUpdateDictionary:1;
    unsigned int updatingDictionary:1;
    unsigned int RESERVED:30;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

#pragma mark Typedef'd Structures

typedef struct {
    Class _field1;
    Class _field2;
    unsigned long long _field3;
    long long _field4;
    unsigned long long _field5;
} CDStruct_d659fc14;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned long long data[4];
} CDStruct_4c46f3f5;

typedef struct {
    double minX;
    double maxX;
    double minY;
    double maxY;
} CDStruct_bf6d4a14;

typedef struct {
    double distance;
    long long anchor;
} CDStruct_7e09e69b;

typedef struct {
    long long numberOfDirectlyTaggedObjects;
    long long numberOfImplicitlyTaggedObjects;
    long long numberOfSelectedObjects;
} CDStruct_5017ad51;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

