//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BCFoundation/BCURLOperation.h>

#import <SketchCloudKit/NSURLSessionDownloadDelegate-Protocol.h>

@class NSError, NSProgress, NSString, NSURL, NSURLRequest, NSURLSessionDownloadTask, SCKDownloadOperationSessionDelegate;

@interface SCKDownloadOperation : BCURLOperation <NSURLSessionDownloadDelegate>
{
    NSURLRequest *_request;
    CDUnknownBlockType _downloadCompletionBlock;
    NSProgress *_progress;
    NSError *_error;
    NSURLSessionDownloadTask *_task;
    NSURL *_fileURL;
}

+ (id)operationByRequesting:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)defaultURLSession;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) NSURLSessionDownloadTask *task; // @synthesize task=_task;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType downloadCompletionBlock; // @synthesize downloadCompletionBlock=_downloadCompletionBlock;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)setUrlSession:(id)arg1;
@property(readonly, nonatomic) SCKDownloadOperationSessionDelegate *sessionDelegate;
- (void)cancel;
- (void)start;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
