//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/_TtP17SketchControllers27MSCollectionOverlayDelegate_-Protocol.h>

@class MSSpecOverlay, MSSpecOverlayLayout, NSIndexPath, NSString;

@protocol MSSpecOverlayLayoutDelegate <_TtP17SketchControllers27MSCollectionOverlayDelegate_>
- (struct CGPoint)specOverlay:(MSSpecOverlay *)arg1 endpointForItemAtIndexPath:(NSIndexPath *)arg2 startpoint:(struct CGPoint)arg3;
- (struct CGPoint)specOverlay:(MSSpecOverlay *)arg1 startpointForItemAtIndexPath:(NSIndexPath *)arg2;

@optional
- (struct CGColor *)specOverlay:(MSSpecOverlay *)arg1 labelColorForMeasurement:(NSIndexPath *)arg2;
- (NSString *)specOverlay:(MSSpecOverlay *)arg1 textForMeasurement:(NSIndexPath *)arg2 vector:(struct CGVector)arg3;
- (BOOL)specOverlay:(MSSpecOverlay *)arg1 shouldHideItemAtIndexPath:(NSIndexPath *)arg2 startpoint:(struct CGPoint)arg3 endpoint:(struct CGPoint)arg4;
- (BOOL)specOverlay:(MSSpecOverlay *)arg1 layout:(MSSpecOverlayLayout *)arg2 shouldShowEndRect:(struct CGRect)arg3 forItemAtIndexPath:(NSIndexPath *)arg4;
- (struct CGRect)specOverlay:(MSSpecOverlay *)arg1 spaceRectForMeasurementAt:(NSIndexPath *)arg2;
- (struct CGRect)specOverlay:(MSSpecOverlay *)arg1 rectForEndOfItemAtIndexPath:(NSIndexPath *)arg2;
- (struct CGRect)specOverlay:(MSSpecOverlay *)arg1 rectForStartOfItemAtIndexPath:(NSIndexPath *)arg2;
- (long long)specOverlay:(MSSpecOverlay *)arg1 typeOfItemAtIndexPath:(NSIndexPath *)arg2;
@end

