//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/NSObject-Protocol.h>

@class MSHistory, MSMoment;

@protocol MSHistoryDelegate <NSObject>
- (void)history:(MSHistory *)arg1 didCommitMoment:(MSMoment *)arg2;
@end

