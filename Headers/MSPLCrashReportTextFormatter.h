//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSPLCrashReportFormatter-Protocol.h"

@interface MSPLCrashReportTextFormatter : NSObject <MSPLCrashReportFormatter>
{
    int _textFormat;
    unsigned long long _stringEncoding;
}

+ (id)stringValueForCrashReport:(id)arg1 withTextFormat:(int)arg2;
+ (id)formatStackFrame:(id)arg1 frameIndex:(unsigned long long)arg2 report:(id)arg3 lp64:(BOOL)arg4;
- (id)formatReport:(id)arg1 error:(id *)arg2;
- (id)initWithTextFormat:(int)arg1 stringEncoding:(unsigned long long)arg2;

@end

