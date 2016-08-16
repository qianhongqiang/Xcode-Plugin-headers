//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import "NSPopoverDelegate.h"

@class DVTStackView_AppKitAutolayout, NSPopover, NSString, NSView;

@interface DVTFindBarOptionsCtrl : DVTViewController <NSPopoverDelegate>
{
    unsigned long long _findType;
    int _matchStyle;
    BOOL _supportsRegex;
    BOOL _supportsWordMatching;
    BOOL _supportsCaseInsensitiveMatching;
    BOOL _findIgnoresCase;
    BOOL _findWraps;
    BOOL _invalidateAfterClose;
    NSPopover *_popover;
    DVTStackView_AppKitAutolayout *_stackView;
    NSView *_matchingStyleView;
    NSView *_hitsMustContainView;
    NSView *_matchCaseView;
    NSView *_wrapView;
}

+ (void)initialize;
+ (void)setDefaultFindType:(unsigned long long)arg1;
+ (long long)defaultFindType;
+ (void)setDefaultWrapText:(BOOL)arg1;
+ (BOOL)defaultWrapText;
+ (void)setDefaultIgnoresCase:(BOOL)arg1;
+ (BOOL)defaultIgnoresCase;
+ (void)setDefaultMatchStyle:(int)arg1;
+ (int)defaultMatchStyle;
@property __weak NSView *wrapView; // @synthesize wrapView=_wrapView;
@property __weak NSView *matchCaseView; // @synthesize matchCaseView=_matchCaseView;
@property __weak NSView *hitsMustContainView; // @synthesize hitsMustContainView=_hitsMustContainView;
@property __weak NSView *matchingStyleView; // @synthesize matchingStyleView=_matchingStyleView;
@property __weak DVTStackView_AppKitAutolayout *stackView; // @synthesize stackView=_stackView;
@property __weak NSPopover *popover; // @synthesize popover=_popover;
@property(nonatomic) int matchStyle; // @synthesize matchStyle=_matchStyle;
@property(nonatomic) BOOL findWraps; // @synthesize findWraps=_findWraps;
@property(nonatomic) BOOL findIgnoresCase; // @synthesize findIgnoresCase=_findIgnoresCase;
@property(nonatomic) unsigned long long findType; // @synthesize findType=_findType;
- (void).cxx_destruct;
- (void)popoverDidClose:(id)arg1;
- (void)_removeFromSuperviewAndInvalidate;
- (void)closePopoverAndInvalidate;
- (void)_sendChangeNotificiation;
- (void)setOptionsFromFindDescriptor:(id)arg1;
- (id)descriptionForDescriptor:(id)arg1;
- (id)findDescriptorForAttributedString:(id)arg1 error:(id *)arg2;
- (void)loadView;
- (id)initWithSupportForRegex:(BOOL)arg1 andSupportForWordMatching:(BOOL)arg2 supportsCaseInsensitiveMatching:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

