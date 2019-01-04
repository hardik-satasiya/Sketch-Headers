//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchModel/MSModelObject.h>

@class NSArray, NSMutableArray;

@interface _MSGradient : MSModelObject
{
    double _elipseLength;
    struct CGPoint _from;
    long long _gradientType;
    struct CGPoint _to;
    NSMutableArray *_stops;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void).cxx_destruct;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)moveGradientStopIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllGradientStops;
- (void)removeGradientStopsAtIndexes:(id)arg1;
- (void)removeGradientStopAtIndex:(unsigned long long)arg1;
- (void)removeGradientStop:(id)arg1;
- (void)insertGradientStops:(id)arg1 afterGradientStop:(id)arg2;
- (void)insertGradientStop:(id)arg1 afterGradientStop:(id)arg2;
- (void)insertGradientStops:(id)arg1 beforeGradientStop:(id)arg2;
- (void)insertGradientStop:(id)arg1 beforeGradientStop:(id)arg2;
- (void)insertGradientStop:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addGradientStops:(id)arg1;
- (void)addGradientStop:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(retain, nonatomic) NSArray *stops; // @synthesize stops=_stops;
@property(nonatomic) struct CGPoint to; // @synthesize to=_to;
@property(nonatomic) long long gradientType; // @synthesize gradientType=_gradientType;
@property(nonatomic) struct CGPoint from; // @synthesize from=_from;
@property(nonatomic) double elipseLength; // @synthesize elipseLength=_elipseLength;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

