//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchModel/MSModelObject.h>

@interface _MSColor : MSModelObject
{
    double _alpha;
    double _blue;
    double _green;
    double _red;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)setRed:(double)arg1;
@property(readonly, nonatomic) double red; // @synthesize red=_red;
- (void)setGreen:(double)arg1;
@property(readonly, nonatomic) double green; // @synthesize green=_green;
- (void)setBlue:(double)arg1;
@property(readonly, nonatomic) double blue; // @synthesize blue=_blue;
- (void)setAlpha:(double)arg1;
@property(readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

