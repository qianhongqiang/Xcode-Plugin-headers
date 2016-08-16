//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, NSArray, NSMutableArray, NSString;

@interface DVTAnnotationManager : NSObject <DVTInvalidation>
{
    id <DVTAnnotationManagerDelegate> _delegate;
    NSMutableArray *_annotationProviders;
}

+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (void)initialize;
@property(retain) id <DVTAnnotationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSArray *annotationProviders; // @synthesize annotationProviders=_annotationProviders;
- (void).cxx_destruct;
- (void)removeAllAnnotationProviders;
- (void)setupAnnotationProvidersWithContext:(id)arg1;
- (id)_installObservationBlockForAnnotationProvider:(id)arg1;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

