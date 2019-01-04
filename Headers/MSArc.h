//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSArc : NSObject
{
    BOOL _clockwise;
    BOOL _isALine;
    struct CGPoint _endPoint1;
    struct CGPoint _endPoint2;
    struct CGPoint _center;
}

+ (id)lineWithEndPoint1:(struct CGPoint)arg1 endPoint2:(struct CGPoint)arg2;
+ (id)arcWithEndPoint1:(struct CGPoint)arg1 endPoint2:(struct CGPoint)arg2 center:(struct CGPoint)arg3 clockwise:(BOOL)arg4;
+ (id)biarcApproximationForSegment:(id)arg1 absoluteError:(double *)arg2;
+ (id)singleArcApproximationForSegment:(id)arg1;
+ (id)arcWithPoints:(struct CGPoint)arg1 endPoint2:(struct CGPoint)arg2 onCurvePoint:(struct CGPoint)arg3;
+ (id)arcApproximationForSegment:(id)arg1 absoluteError:(double *)arg2;
+ (id)arcApproximationForSegment:(id)arg1 maximumError:(double)arg2;
@property(readonly, nonatomic) BOOL isALine; // @synthesize isALine=_isALine;
@property(readonly, nonatomic, getter=isClockwise) BOOL clockwise; // @synthesize clockwise=_clockwise;
@property(readonly, nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(readonly, nonatomic) struct CGPoint endPoint2; // @synthesize endPoint2=_endPoint2;
@property(readonly, nonatomic) struct CGPoint endPoint1; // @synthesize endPoint1=_endPoint1;
- (id)debugQuickLookObject;
- (id)bezierPath;
- (struct BCLine)endpoint2Tangent;
- (struct BCLine)endpoint1Tangent;
@property(readonly, nonatomic) struct BCLine endTangent;
@property(readonly, nonatomic) struct BCLine startTangent;
@property(readonly, nonatomic) struct CGVector endNormal;
@property(readonly, nonatomic) struct CGVector startNormal;
@property(readonly, nonatomic) double endAngle;
@property(readonly, nonatomic) double startAngle;
- (double)absoluteErrorWithSegment:(id)arg1;
@property(readonly, nonatomic) double radius;
- (id)initWithEndPoint1:(struct CGPoint)arg1 endPoint2:(struct CGPoint)arg2 center:(struct CGPoint)arg3 clockwise:(BOOL)arg4;
- (id)initLineWithEndPoint1:(struct CGPoint)arg1 endPoint2:(struct CGPoint)arg2;

@end

