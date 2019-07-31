//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6Sketch27MSLayerMeasurementViewModel.h"

@protocol MSLayerCoordinateSpace;

@interface _TtC6Sketch27MSLayerMeasurementViewModel (Sketch)
- (BOOL)shouldShowTargetRectForMeasurementAtIndex:(long long)arg1;
- (struct CGRect)endRectForMeasurementAtIndex:(long long)arg1;
- (struct CGRect)startRectForMeasurementAtIndex:(long long)arg1;
- (struct CGPoint)endpointForMeasurementAtIndex:(long long)arg1;
- (struct CGPoint)startpointForMeasurementAtIndex:(long long)arg1;
@property(nonatomic, readonly) long long numberOfMeasurements;
@property(nonatomic, readonly) id <MSLayerCoordinateSpace> coordinateSpace;
- (struct CGRect)targetRectAtIndex:(long long)arg1;
@property(nonatomic, readonly) long long numberOfTargetRects;
@end
