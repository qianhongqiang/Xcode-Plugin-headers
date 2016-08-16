//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTPreferenceSet.h"

@class DVTCustomDataSpecifier, DVTStackBacktrace, NSColor, NSFont, NSImage, NSPointerArray, NSString, NSURL;

@interface DVTFontAndColorTheme : NSObject <DVTPreferenceSet>
{
    NSString *_name;
    NSImage *_image;
    NSURL *_dataURL;
    DVTCustomDataSpecifier *_customDataSpecifier;
    NSColor *_sourceTextBackgroundColor;
    NSColor *_sourceTextSidebarBackgroundColor;
    NSColor *_sourceTextSidebarEdgeColor;
    NSColor *_sourceTextSidebarNumbersColor;
    NSColor *_sourceTextFoldbarBackgroundColor;
    NSColor *_sourceTextSelectionColor;
    NSColor *_sourceTextSecondarySelectionColor;
    NSColor *_sourceTextInsertionPointColor;
    NSColor *_sourceTextInvisiblesColor;
    NSColor *_sourceTextBlockDimBackgroundColor;
    NSColor *_sourceTextTokenizedBorderColor;
    NSColor *_sourceTextTokenizedBackgroundColor;
    NSColor *_sourceTextTokenizedBorderSelectedColor;
    NSColor *_sourceTextTokenizedBackgroundSelectedColor;
    NSColor *_markupTextBackgroundColor;
    NSColor *_markupTextBorderColor;
    NSColor *_markupTextNormalColor;
    NSColor *_markupTextStrongColor;
    NSColor *_markupTextEmphasisColor;
    NSColor *_markupTextPrimaryHeadingColor;
    NSColor *_markupTextSecondaryHeadingColor;
    NSColor *_markupTextOtherHeadingColor;
    NSColor *_markupTextInlineCodeColor;
    NSColor *_markupTextLinkColor;
    NSFont *_markupTextNormalFont;
    NSFont *_markupTextStrongFont;
    NSFont *_markupTextEmphasisFont;
    NSFont *_markupTextPrimaryHeadingFont;
    NSFont *_markupTextSecondaryHeadingFont;
    NSFont *_markupTextOtherHeadingFont;
    NSFont *_markupTextLinkFont;
    NSFont *_markupTextCodeFont;
    NSColor *_consoleTextBackgroundColor;
    NSColor *_consoleTextSelectionColor;
    NSColor *_consoleTextSecondarySelectionColor;
    NSColor *_consoleTextInsertionPointColor;
    NSColor *_consoleDebuggerPromptTextColor;
    NSColor *_consoleDebuggerInputTextColor;
    NSColor *_consoleDebuggerOutputTextColor;
    NSColor *_consoleExecutableInputTextColor;
    NSColor *_consoleExecutableOutputTextColor;
    NSFont *_consoleDebuggerPromptTextFont;
    NSFont *_consoleDebuggerInputTextFont;
    NSFont *_consoleDebuggerOutputTextFont;
    NSFont *_consoleExecutableInputTextFont;
    NSFont *_consoleExecutableOutputTextFont;
    NSColor *_debuggerInstructionPointerColor;
    NSColor *_sourcePlainTextColor;
    NSFont *_sourcePlainTextFont;
    NSPointerArray *_syntaxColorsByNodeType;
    NSPointerArray *_syntaxFontsByNodeType;
    NSColor *_ghostComplementTextColor;
    BOOL _builtIn;
    BOOL _loadedData;
    BOOL _contentNeedsSaving;
    BOOL _hasMultipleSourceTextFonts;
}

+ (id)_defaultSourceCodeFont;
+ (id)keyPathsForValuesAffectingConsoleTextSecondarySelectionColor;
+ (id)keyPathsForValuesAffectingSourceTextSecondarySelectionColor;
+ (void)recordMessageTracerStatistics;
+ (id)titleForNewPreferenceSetFromTemplate;
+ (id)preferenceSetsListHeader;
+ (id)preferenceSetsFileExtension;
+ (id)defaultKeyForExcludedBuiltInPreferenceSets;
+ (id)defaultKeyForCurrentPreferenceSet;
+ (id)builtInPreferenceSetsDirectoryURL;
+ (id)systemPreferenceSet;
+ (id)preferenceSetGroupingName;
+ (id)_nodeTypesIncludedInPreferences;
+ (id)_stringRepresentationOfFont:(id)arg1;
+ (id)_fontWithName:(id)arg1 size:(double)arg2;
+ (id)currentTheme;
+ (id)preferenceSetsManager;
+ (void)initialize;
@property(readonly) BOOL loadedData; // @synthesize loadedData=_loadedData;
@property(readonly) NSPointerArray *syntaxFontsByNodeType; // @synthesize syntaxFontsByNodeType=_syntaxFontsByNodeType;
@property(readonly) NSPointerArray *syntaxColorsByNodeType; // @synthesize syntaxColorsByNodeType=_syntaxColorsByNodeType;
@property(nonatomic) BOOL hasMultipleSourceTextFonts; // @synthesize hasMultipleSourceTextFonts=_hasMultipleSourceTextFonts;
@property BOOL contentNeedsSaving; // @synthesize contentNeedsSaving=_contentNeedsSaving;
@property(retain) DVTCustomDataSpecifier *customDataSpecifier; // @synthesize customDataSpecifier=_customDataSpecifier;
@property(readonly, getter=isBuiltIn) BOOL builtIn; // @synthesize builtIn=_builtIn;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)hasLightBackground;
- (void)setFont:(id)arg1 forNodeTypes:(id)arg2;
- (void)setColor:(id)arg1 forNodeTypes:(id)arg2;
- (void)_setColorOrFont:(id)arg1 forNodeTypes:(id)arg2;
- (id)fontForNodeType:(short)arg1;
- (id)colorForNodeType:(short)arg1;
@property(readonly) NSFont *sourcePlainTextFont;
@property(readonly) NSColor *sourcePlainTextColor;
- (void)setDebuggerInstructionPointerColor:(id)arg1;
- (void)setConsoleExecutableOutputTextFont:(id)arg1;
- (void)setConsoleExecutableInputTextFont:(id)arg1;
- (void)setConsoleDebuggerOutputTextFont:(id)arg1;
- (void)setConsoleDebuggerInputTextFont:(id)arg1;
- (void)setConsoleDebuggerPromptTextFont:(id)arg1;
- (void)setConsoleExecutableOutputTextColor:(id)arg1;
- (void)setConsoleExecutableInputTextColor:(id)arg1;
- (void)setConsoleDebuggerOutputTextColor:(id)arg1;
- (void)setConsoleDebuggerInputTextColor:(id)arg1;
- (void)setConsoleDebuggerPromptTextColor:(id)arg1;
- (void)primitiveSetConsoleDebuggerPromptTextColor:(id)arg1;
- (void)setConsoleTextInsertionPointColor:(id)arg1;
- (void)setConsoleTextSelectionColor:(id)arg1;
- (void)setConsoleTextBackgroundColor:(id)arg1;
- (void)setMarkupTextCodeFont:(id)arg1;
- (void)setMarkupTextLinkFont:(id)arg1;
- (void)setMarkupTextOtherHeadingFont:(id)arg1;
- (void)setMarkupTextSecondaryHeadingFont:(id)arg1;
- (void)setMarkupTextPrimaryHeadingFont:(id)arg1;
- (void)setMarkupTextEmphasisFont:(id)arg1;
- (void)setMarkupTextStrongFont:(id)arg1;
- (void)setMarkupTextNormalFont:(id)arg1;
- (void)setMarkupTextLinkColor:(id)arg1;
- (void)setMarkupTextInlineCodeColor:(id)arg1;
- (void)setMarkupTextOtherHeadingColor:(id)arg1;
- (void)setMarkupTextSecondaryHeadingColor:(id)arg1;
- (void)setMarkupTextPrimaryHeadingColor:(id)arg1;
- (void)setMarkupTextEmphasisColor:(id)arg1;
- (void)setMarkupTextStrongColor:(id)arg1;
- (void)setMarkupTextNormalColor:(id)arg1;
- (void)setMarkupTextBorderColor:(id)arg1;
- (void)setMarkupTextBackgroundColor:(id)arg1;
- (void)setSourceTextInvisiblesColor:(id)arg1;
- (void)setSourceTextInsertionPointColor:(id)arg1;
- (void)setSourceTextSelectionColor:(id)arg1;
- (void)setSourceTextBackgroundColor:(id)arg1;
- (void)_setColorOrFont:(id)arg1 forKey:(id)arg2 colorOrFontivar:(id *)arg3;
@property(readonly) NSColor *debuggerInstructionPointerColor;
@property(readonly) NSFont *consoleExecutableOutputTextFont;
@property(readonly) NSFont *consoleExecutableInputTextFont;
@property(readonly) NSFont *consoleDebuggerOutputTextFont;
@property(readonly) NSFont *consoleDebuggerInputTextFont;
@property(readonly) NSFont *consoleDebuggerPromptTextFont;
@property(readonly) NSColor *consoleExecutableOutputTextColor;
@property(readonly) NSColor *consoleExecutableInputTextColor;
@property(readonly) NSColor *consoleDebuggerOutputTextColor;
@property(readonly) NSColor *consoleDebuggerInputTextColor;
@property(readonly) NSColor *consoleDebuggerPromptTextColor;
@property(readonly) NSColor *consoleTextInsertionPointColor;
@property(readonly) NSColor *consoleTextSecondarySelectionColor;
@property(readonly) NSColor *consoleTextSelectionColor;
@property(readonly) NSColor *consoleTextBackgroundColor;
@property(readonly) NSFont *markupTextCodeFont;
@property(readonly) NSFont *markupTextLinkFont;
@property(readonly) NSFont *markupTextOtherHeadingFont;
@property(readonly) NSFont *markupTextSecondaryHeadingFont;
@property(readonly) NSFont *markupTextPrimaryHeadingFont;
@property(readonly) NSFont *markupTextEmphasisFont;
@property(readonly) NSFont *markupTextStrongFont;
@property(readonly) NSFont *markupTextNormalFont;
@property(readonly) NSColor *markupTextLinkColor;
@property(readonly) NSColor *markupTextInlineCodeColor;
@property(readonly) NSColor *markupTextOtherHeadingColor;
@property(readonly) NSColor *markupTextSecondaryHeadingColor;
@property(readonly) NSColor *markupTextPrimaryHeadingColor;
@property(readonly) NSColor *markupTextEmphasisColor;
@property(readonly) NSColor *markupTextStrongColor;
@property(readonly) NSColor *markupTextNormalColor;
@property(readonly) NSColor *markupTextBorderColor;
@property(readonly) NSColor *markupTextBackgroundColor;
@property(readonly) NSColor *sourceTextTokenizedBackgroundSelectedColor;
@property(readonly) NSColor *sourceTextTokenizedBorderSelectedColor;
@property(readonly) NSColor *sourceTextTokenizedBackgroundColor;
@property(readonly) NSColor *sourceTextTokenizedBorderColor;
@property(readonly) NSColor *sourceTextLinkColor;
@property(readonly) NSColor *ghostComplementTextColor;
@property(readonly) NSColor *sourceTextBlockDimBackgroundColor;
@property(readonly) NSColor *sourceTextInvisiblesColor;
@property(readonly) NSColor *sourceTextInsertionPointColor;
@property(readonly) NSColor *sourceTextSecondarySelectionColor;
@property(readonly) NSColor *sourceTextSelectionColor;
@property(readonly) NSColor *sourceTextFoldbarBackgroundColor;
@property(readonly) NSColor *sourceTextSidebarNumbersColor;
@property(readonly) NSColor *sourceTextSidebarEdgeColor;
@property(readonly) NSColor *sourceTextSidebarBackgroundColor;
@property(readonly) NSColor *sourceTextBackgroundColor;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *localizedName;
- (void)_updateHasMultipleSourceTextFonts;
- (void)_updateDerivedColors;
- (BOOL)_loadFontsAndColors;
- (id)dataRepresentationWithError:(id *)arg1;
- (void)primitiveInvalidate;
- (id)initWithCustomDataSpecifier:(id)arg1 basePreferenceSet:(id)arg2;
- (id)initWithName:(id)arg1 dataURL:(id)arg2;
- (id)_initWithName:(id)arg1 syntaxColorsByNodeType:(id)arg2 syntaxFontsByNodeType:(id)arg3;
- (void)_themeCommonInit;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

