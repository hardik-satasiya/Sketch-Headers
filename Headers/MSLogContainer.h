//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MSLogContainer : NSObject
{
    NSString *_batchId;
    NSArray *_logs;
}

@property(retain, nonatomic) NSArray *logs; // @synthesize logs=_logs;
@property(copy, nonatomic) NSString *batchId; // @synthesize batchId=_batchId;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)serializeLogWithPrettyPrinting:(BOOL)arg1;
- (id)serializeLog;
- (id)initWithBatchId:(id)arg1 andLogs:(id)arg2;

@end
