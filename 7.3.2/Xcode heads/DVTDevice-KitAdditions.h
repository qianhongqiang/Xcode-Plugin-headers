//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTDevice.h"

#import "DVTBasicDeviceUI.h"

@class DVTPlatform, NSArray, NSError, NSImage, NSSet, NSString;

@interface DVTDevice (KitAdditions) <DVTBasicDeviceUI>
+ (id)keyPathsForValuesAffectingDvt_hideBusyIndicator;
+ (id)keyPathsForValuesAffectingDvt_hideStatusImage;
+ (id)keyPathsForValuesAffectingDvt_statusImage;
@property(readonly) _Bool dvt_deviceIsSimulator;
@property(readonly) _Bool dvt_hideBusyIndicator;
@property(readonly) _Bool dvt_hideStatusImage;
@property(readonly) NSImage *dvt_proxiedDeviceImage;
@property(readonly) NSImage *dvt_statusImage;
@property(readonly) NSArray *deviceSummaryPropertyDictionaries;
@property(readonly) NSImage *image;
@property(readonly) BOOL showCompanionUI;
@property(readonly) int deviceWindowCategory;

// Remaining properties
@property(readonly, getter=isAvailable) BOOL available;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) _Bool deviceIsBusy;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly) BOOL isProxiedDevice;
@property(readonly, copy, nonatomic) NSString *modelCode;
@property(readonly, copy, nonatomic) NSString *modelName;
@property(readonly, copy, nonatomic) NSString *modelUTI;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy) NSString *nameForDeveloperPortal;
@property(readonly, copy) NSString *nativeArchitecture;
@property(readonly, copy) NSString *operatingSystemBuild;
@property(readonly, copy) NSString *operatingSystemVersion;
@property(readonly, copy, nonatomic) NSString *operatingSystemVersionWithBuildNumber;
@property(readonly) DVTPlatform *platform;
@property(readonly, copy) NSString *platformIdentifier;
@property(readonly, copy) NSString *processorDescription;
@property(readonly, copy) NSSet *proxiedDevices;
@property(readonly) Class superclass;
@property(readonly) BOOL supportsProvisioning;
@property(readonly) NSError *unavailabilityError;
@end

