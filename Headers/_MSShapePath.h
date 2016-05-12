//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSModelObject.h"

@class MSArray;

@interface _MSShapePath : MSModelObject
{
    BOOL _isClosed;
    MSArray *_points;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void).cxx_destruct;
- (BOOL)propertiesAreEqual:(id)arg1;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)setPrimitivePoints:(id)arg1;
- (id)primitivePoints;
- (void)setPrimitiveIsClosed:(BOOL)arg1;
- (BOOL)primitiveIsClosed;
@property(retain, nonatomic) MSArray *points; // @synthesize points=_points;
- (id)pointsGeneric;
@property(nonatomic) BOOL isClosed; // @synthesize isClosed=_isClosed;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

