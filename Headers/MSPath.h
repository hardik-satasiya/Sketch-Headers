//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchModel/NSCopying-Protocol.h>

@class NSArray;

@interface MSPath : NSObject <NSCopying>
{
    struct MSPathCachedProperties _cachedProperties;
    // Error parsing type: A^^v, name: __contoursAtomic
    // Error parsing type: A^v, name: __cachedPropertiesAtomic
    const struct CGPath *_CGPath;
    NSArray *_contours;
}

+ (id)pathWithPoints:(const struct CGPoint *)arg1 pointCount:(int)arg2 close:(BOOL)arg3;
+ (id)pathWithCurveFromPoint:(struct CGPoint)arg1 to:(struct CGPoint)arg2 controlPoint1:(struct CGPoint)arg3 controlPoint2:(struct CGPoint)arg4;
+ (id)pathWithLineFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2;
+ (id)pathWithBezierPath:(id)arg1;
+ (id)pathWithCGPath:(struct CGPath *)arg1;
+ (id)pathWithEllipseInRect:(struct CGRect)arg1;
+ (id)pathWithRect:(struct CGRect)arg1;
+ (id)pathWithContours:(id)arg1;
+ (id)pathWithSegments:(id)arg1 closed:(BOOL)arg2;
+ (id)pathWithSubpaths:(id)arg1;
+ (id)new;
+ (id)path;
+ (id)pathWithFBBezierGraph:(id)arg1;
@property(copy, nonatomic) NSArray *contours; // @synthesize contours=_contours;
@property(readonly, nonatomic) const struct CGPath *CGPath; // @synthesize CGPath=_CGPath;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToPath:(id)arg1 epsilon:(double)arg2;
- (BOOL)isEqualToPath:(id)arg1;
- (CDStruct_ab7f5933)elementAtIndex:(unsigned long long)arg1;
- (id)pointsInRect:(struct CGRect)arg1;
- (id)pathByApplyingModifierBlock:(CDUnknownBlockType)arg1;
- (struct MSPathCachedProperties)_initCachedProperties;
- (struct MSPathCachedProperties)_calculateCachedProperies;
- (id)pathFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (struct CGPoint)endPoint;
- (struct CGPoint)startPoint;
- (id)pathByTrimmingToLength:(double)arg1 withMaximumError:(double)arg2;
- (double)length;
- (double)lengthWithMaximumError:(double)arg1;
- (id)pathByTrimmingToLength:(double)arg1;
- (struct CGPoint)pointOnPathAtLength:(double)arg1;
- (BOOL)isClosed;
- (struct CGPoint)pointAtIndex:(unsigned long long)arg1;
- (BOOL)containsPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) NSArray *subpaths;
- (id)outlinePathWithWidth:(double)arg1 lineCap:(int)arg2 lineJoin:(int)arg3;
- (id)outlinePathWithWidth:(double)arg1;
- (id)_pathByScalingToBounds:(struct CGRect)arg1;
- (id)pathByScalingToBounds:(struct CGRect)arg1;
- (id)pathByJoiningWithPath:(id)arg1;
- (id)pathByAppendingSubpaths:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (id)pathByRemovingSegmentAtIndexPath:(id)arg1;
- (id)segmentAtIndexPath:(id)arg1;
- (id)segmentIndexPathForPoint:(struct CGPoint)arg1 tolerance:(double)arg2;
- (id)pathWithInset:(double)arg1 joinStrategy:(unsigned long long)arg2;
- (id)pathWithInset:(double)arg1;
- (id)closedPath;
- (id)reversedPath;
- (id)debugQuickLookObject;
- (id)transformedPathUsingMapBlock:(CDUnknownBlockType)arg1;
- (id)cleanedPath;
- (void)pathsUsingNonZeroWindingRule:(id *)arg1 holes:(id *)arg2;
- (id)pathUsingNonZeroWindingRule;
- (id)simplifiedPath;
- (id)transformedPathUsingAffineTransform:(struct CGAffineTransform)arg1;
- (id)createContours;
@property(readonly, nonatomic) unsigned long long elementCount;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) BOOL isRectangular;
@property(readonly, nonatomic) BOOL isLinear;
@property(readonly, nonatomic) struct CGRect controlPointBounds;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) struct CGRect safeBounds;
- (id)init;
- (id)initWithPoints:(const struct CGPoint *)arg1 pointCount:(int)arg2 close:(BOOL)arg3;
- (id)initWithCurveFromPoint:(struct CGPoint)arg1 to:(struct CGPoint)arg2 controlPoint1:(struct CGPoint)arg3 controlPoint2:(struct CGPoint)arg4;
- (id)initWithLineFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2;
- (id)initWithEllipseInRect:(struct CGRect)arg1;
- (id)initWithSquircleInRect:(struct CGRect)arg1 radius:(double)arg2;
- (id)initWithRoundedRect:(struct CGRect)arg1 radius:(double)arg2;
- (id)initWithRect:(struct CGRect)arg1;
- (id)initWithBezierPath:(id)arg1;
- (void)dealloc;
- (id)initWithContours:(id)arg1;
- (id)initWithCGPath:(struct CGPath *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)shadowPathWithSpread:(double)arg1 borderOptions:(id)arg2 strokeType:(long long)arg3 lineWidth:(double)arg4;
- (id)shadowPathWithSpread:(double)arg1;
- (id)shadowPathForStrokeType:(long long)arg1 lineWidth:(double)arg2;
- (id)booleanExclusiveOrWith:(id)arg1;
- (id)booleanSubtractWith:(id)arg1;
- (id)booleanIntersectWith:(id)arg1;
- (id)booleanUnionWith:(id)arg1;
- (id)booleanOp:(long long)arg1 withPath:(id)arg2;
- (id)FBBezierGraph;

@end

