//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BCLicense-Protocol.h"
#import "BCLicenseOperationResult-Protocol.h"

@class BCNetworkTime, NSArray, NSDate, NSDictionary, NSString;

@interface BCRegularLicense : NSObject <BCLicenseOperationResult, BCLicense>
{
    NSString *_applicationID;
    NSDictionary *_payload;
    NSDictionary *_metadata;
    NSString *_publicCertificate;
    long long _signatureStatus;
    BCNetworkTime *_networkTime;
}

@property(retain, nonatomic) BCNetworkTime *networkTime; // @synthesize networkTime=_networkTime;
@property(nonatomic) long long signatureStatus; // @synthesize signatureStatus=_signatureStatus;
@property(retain, nonatomic) NSString *publicCertificate; // @synthesize publicCertificate=_publicCertificate;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) NSString *applicationID; // @synthesize applicationID=_applicationID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *variants;
@property(readonly, nonatomic) BOOL updatesHaveExpired;
@property(readonly, nonatomic) NSDate *updateExpirationDate;
- (void)log;
@property(readonly, nonatomic) NSString *registrationStatus;
@property(readonly, nonatomic) NSString *licenseID;
@property(readonly, nonatomic) BOOL requiresRefresh;
@property(readonly, nonatomic) BOOL shouldRefresh;
- (id)expiryDate;
@property(readonly, nonatomic) long long remainingDays;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) NSString *deviceID;
@property(readonly, nonatomic) NSString *email;
@property(readonly, nonatomic) BOOL isValid;
- (BOOL)isAppNameValid;
- (BOOL)isExpired;
- (BOOL)isDeviceValid;
- (BOOL)isSignatureValid;
- (void)validateSignature;
- (id)payloadHash;
- (BOOL)saveToURL:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) BOOL isAboutToExpire;
@property(readonly, nonatomic) BOOL shouldTryToRequestNewTrialLicense;
- (id)initWithDictionary:(id)arg1 applicationID:(id)arg2 publicCertificate:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

