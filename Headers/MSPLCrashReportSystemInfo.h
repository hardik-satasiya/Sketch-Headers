//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface MSPLCrashReportSystemInfo : NSObject
{
    int _operatingSystem;
    NSString *_osVersion;
    NSString *_osBuild;
    int _architecture;
    NSDate *_timestamp;
}

@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) int architecture; // @synthesize architecture=_architecture;
@property(readonly, nonatomic) NSString *operatingSystemBuild; // @synthesize operatingSystemBuild=_osBuild;
@property(readonly, nonatomic) NSString *operatingSystemVersion; // @synthesize operatingSystemVersion=_osVersion;
@property(readonly, nonatomic) int operatingSystem; // @synthesize operatingSystem=_operatingSystem;
- (void)dealloc;
- (id)initWithOperatingSystem:(int)arg1 operatingSystemVersion:(id)arg2 operatingSystemBuild:(id)arg3 architecture:(int)arg4 timestamp:(id)arg5;
- (id)initWithOperatingSystem:(int)arg1 operatingSystemVersion:(id)arg2 architecture:(int)arg3 timestamp:(id)arg4;

@end

