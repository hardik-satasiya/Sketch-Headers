//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchModel/_MSRectangleShape.h>

@interface MSRectangleShape : _MSRectangleShape
{
}

+ (id)shapeWithRect:(struct CGRect)arg1 fillColor:(id)arg2;
- (BOOL)canFlatten;
- (void)multiplyBy:(double)arg1;
- (void)resetPointsIfNecessary;
- (void)resetPathsToRoundedRect;
@property(readonly, nonatomic) double maximumAllowedRadius;
- (void)resetPathsToRect;
- (void)resetPoints;

@end

