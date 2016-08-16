//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class NSString;

@interface NSWindow (DVTNSWindowAdditions)
+ (id)dvt_visibleWindowsFromFrontToBack;
- (void)dvt_configureAsBorderlessWindowUsingBackground:(id)arg1;
- (struct CGPoint)dvt_convertPointFromScreen:(struct CGPoint)arg1;
- (struct CGPoint)dvt_convertPointToScreen:(struct CGPoint)arg1;
- (void)dvt_clearContentView;
- (void)dvt_beginSheetModalForWindow:(id)arg1 allowSheetOverSheet:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dvt_beginSheetModalForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)dvt_registerActivationStateObserver:(id)arg1;
- (id)dvt_windowActivationNotifier;
- (void)dvt_centerOnMainWindowScreen;
- (void)dvt_centerOnMainMenuScreen;
- (void)_dvt_centerOnScreen:(id)arg1;
@property(retain) NSString *dvt_frameAsString;
@property(readonly) BOOL dvt_inFullScreenMode;
@end
