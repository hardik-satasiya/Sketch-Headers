//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSIngestionProtocol-Protocol.h"

@class MS_Reachability, NSArray, NSDictionary, NSHashTable, NSMutableDictionary, NSString, NSURL, NSURLSession;

@interface MSHttpIngestion : NSObject <MSIngestionProtocol>
{
    BOOL _paused;
    BOOL _enabled;
    NSString *_baseURL;
    NSString *_apiPath;
    MS_Reachability *_reachability;
    NSURL *_sendURL;
    NSString *_httpMethod;
    NSDictionary *_httpHeaders;
    NSMutableDictionary *_pendingCalls;
    NSURLSession *_session;
    long long _maxNumberOfConnections;
    NSArray *_callsRetryIntervals;
    NSHashTable *_delegates;
}

+ (id)eTagFromResponse:(id)arg1;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(retain) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) NSArray *callsRetryIntervals; // @synthesize callsRetryIntervals=_callsRetryIntervals;
@property(readonly, nonatomic) long long maxNumberOfConnections; // @synthesize maxNumberOfConnections=_maxNumberOfConnections;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain) NSMutableDictionary *pendingCalls; // @synthesize pendingCalls=_pendingCalls;
@property(retain, nonatomic) NSDictionary *httpHeaders; // @synthesize httpHeaders=_httpHeaders;
@property(copy, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property(retain, nonatomic) NSURL *sendURL; // @synthesize sendURL=_sendURL;
@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(retain, nonatomic) MS_Reachability *reachability; // @synthesize reachability=_reachability;
@property(copy, nonatomic) NSString *apiPath; // @synthesize apiPath=_apiPath;
@property(copy, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sendAsync:(id)arg1 eTag:(id)arg2 authToken:(id)arg3 callId:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)prettyPrintHeaders:(id)arg1;
- (void)enumerateDelegatesForSelector:(SEL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)obfuscateHeaderValue:(id)arg1 forKey:(id)arg2;
- (id)createRequest:(id)arg1 eTag:(id)arg2 authToken:(id)arg3;
- (void)networkStateChanged;
- (void)networkStateChanged:(id)arg1;
- (void)call:(id)arg1 completedWithResult:(long long)arg2;
- (void)sendCallAsync:(id)arg1;
- (void)resume;
- (void)pause;
- (void)setEnabled:(BOOL)arg1 andDeleteDataOnDisabled:(BOOL)arg2;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)sendAsync:(id)arg1 eTag:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendAsync:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendAsync:(id)arg1 eTag:(id)arg2 authToken:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendAsync:(id)arg1 authToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic, getter=isReadyToSend) BOOL readyToSend;
- (id)initWithBaseUrl:(id)arg1 apiPath:(id)arg2 headers:(id)arg3 queryStrings:(id)arg4 reachability:(id)arg5 retryIntervals:(id)arg6 maxNumberOfConnections:(long long)arg7;
- (id)initWithBaseUrl:(id)arg1 apiPath:(id)arg2 headers:(id)arg3 queryStrings:(id)arg4 reachability:(id)arg5 retryIntervals:(id)arg6;
- (id)initWithBaseUrl:(id)arg1 apiPath:(id)arg2 headers:(id)arg3 queryStrings:(id)arg4 reachability:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
