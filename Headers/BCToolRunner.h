//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BCToolRunner : NSObject
{
}

- (BOOL)validateWorkingDirectoryURL:(id)arg1 error:(id *)arg2;
- (BOOL)validateToolURL:(id)arg1 error:(id *)arg2;
- (void)runToolAtExecutableURL:(id)arg1 workingDirectoryURL:(id)arg2 arguments:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

