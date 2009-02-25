/* Generated using class-dump */

@interface TextFieldEditor : NSTextView
{
    BOOL _pasteReplacesLineEndingsWithSpaces;
}

- (id)init;
- (void)paste:(id)fp8;
- (BOOL)pasteReplacesLineEndingsWithSpaces;
- (void)replaceCarriageReturnsAfterPaste;
- (void)setPasteReplacesLineEndingsWithSpaces:(BOOL)fp8;

@end

@interface LocationFieldEditor : TextFieldEditor
{
@public
    NSTextField *field;
}

- (id)acceptableDragTypes;
- (void)changeFont:(id)fp8;
- (void)concludeDragOperation:(id)fp8;
- (unsigned int)draggingEntered:(id)fp8;
- (unsigned int)draggingUpdated:(id)fp8;
- (id)initWithField:(id)fp8;
- (BOOL)performDragOperation:(id)fp8;
- (BOOL)prepareForDragOperation:(id)fp8;
- (void)smartInsertForString:(id)fp8 replacingRange:(struct _NSRange)fp12 beforeString:(id *)fp20 afterString:(id *)fp24;
- (unsigned int)validModesForFontPanel:(id)fp8;

@end

@interface WindowController : NSWindowController
{
    NSString *_multiWindowFrameAutosaveName;
    BOOL _autosaveFrame;
    BOOL _lastResizeWasProgrammatic;
}

- (void)_safari_windowDidEndLiveResize;
- (void)_saveFrameIfAllowed;
- (void)_setFrameWithoutAutosaving:(struct _NSRect)fp8 programmatically:(BOOL)fp24;
- (void)_windowDidLoad;
- (void)dealloc;
- (struct _NSRect)defaultFrame;
- (BOOL)frameAutosaveEnabled;
- (BOOL)lastResizeWasProgrammatic;
- (id)multiWindowFrameAutosaveName;
- (void)setFrameAutosaveEnabled:(BOOL)fp8;
- (void)setFrameProgrammatically:(struct _NSRect)fp8;
- (void)setFrameToDefault;
- (void)setFrameWithoutAutosaving:(struct _NSRect)fp8;
- (BOOL)setMultiWindowFrameAutosaveName:(id)fp8;
- (void)windowDidMove:(id)fp8;
- (void)windowDidResize:(id)fp8;
- (void)windowWillClose:(id)fp8;

@end

@interface BrowserWindowController : WindowController
{
    id favoritesBarView;
    id tabBarView;
    NSButton *toggleBookmarksButton;
    NSTabView *tabSwitcher;
    id statusBar;
    NSTextField *statusTextField;
    id _toolbarController;
    LocationFieldEditor* _locationFieldEditor;
    id _searchFieldEditor;
    id _statusStringView;
    id _completionController;
    id _searchSuggestionController;
    NSMenu *_dynamicBackMenu;
    NSMenu *_dynamicForwardMenu;
    BOOL _isLoading;
    BOOL _temporaryLocationBar;
    BOOL _editedLocationField;
    BOOL _editedLocationFieldWhileLoading;
    BOOL _focusedLocationFieldWhileLoading;
    BOOL _focusedSearchFieldWhileLoading;
    BOOL _tabBarHiddenByJavaScript;
    BOOL _readyToUpdateKeyboardLoop;
    NSMutableDictionary *_viewFramesForResizing;
    BOOL _favoritesBarShowing;
    BOOL _tabBarShowing;
    BOOL _statusBarShowing;
    BOOL _acceptsGenericIcon;
    NSString *_statusText;
    BOOL _clearStatus;
    BOOL _ellipsizeStatus;
    NSString *_newStatus;
    BOOL _stopAndReloadButtonWillStop;
    BOOL _tabBarInTransition;
    BOOL _tabBarShownForTabDrag;
    BOOL _confirmUnsubmittedFormText;
    BOOL _isAutoFilling;
    BOOL _usesHiDPIControls;
    NSTabView *_tabSwitcherForGoBack;
    NSTabView *_tabSwitcherForGoForward;
    unsigned int _coalescedUpdateMask;
    BOOL _performingCoalescedUpdates;
    unsigned int _postponedToolbarUpdateMask;
    BOOL _postponeToolbarUpdates;
    NSURL *_pendingSearchURL;
    BOOL _RSSTransitionSlowMotion;
    id _RSSTransitionImageView;
    NSTimer *_RSSTransitionTimer;
    double _RSSTransitionStartTime;
    double _RSSTransitionDuration;
    BOOL _RSSTransitionInProgress;
    BOOL _startRSSAnimationAfterFirstLayout;
    id _closedWebViewHolder;
    NSTimer *_springToFrontTimer;
    NSTimer *_setStatusMessageTimer;
}

+ (void)reopen;
+ (int)windowPolicyFromCurrentEvent;
+ (int)windowPolicyFromCurrentEventRequireCommandKey:(BOOL)fp8;
+ (int)windowPolicyFromCurrentEventRespectingKeyEquivalents:(BOOL)fp8;
+ (int)windowPolicyFromEventModifierFlags:(unsigned int)fp8;
+ (int)windowPolicyFromEventModifierFlags:(unsigned int)fp8 requireCommandKey:(BOOL)fp12;
- (void)_safari_windowDidEndLiveResize;
- (void)_searchForStringWithoutUpdatingRecentSearches:(id)fp8;
- (void)_tellAppControllerWindowWillClose;
- (BOOL)acceptsGenericIcon;
- (void)addBookmark:(id)fp8;
- (struct _NSRect)adjustedFrameForCascade:(struct _NSRect)fp8 fromWindow:(id)fp24;
- (struct _NSRect)adjustedFrameForSaving:(struct _NSRect)fp8;
- (BOOL)allowBookmarksChanges;
- (BOOL)anyToolbarsVisible;
- (void)autoFill:(id)fp8;
- (id)bookmarkTitleForLocationField:(id)fp8;
- (BOOL)canCloseOrMoveTabs;
- (BOOL)canCreateNewTab;
- (BOOL)canReloadAllTabs;
- (BOOL)canReloadObeyingLocationField;
- (BOOL)canReloadTab:(id)fp8;
- (BOOL)canShowInputFields;
- (void)cancel:(id)fp8;
- (void)changeTextEncoding:(id)fp8;
- (void)closeCurrentTab:(id)fp8;
- (void)closeInactiveTabs:(id)fp8;
- (void)closeOtherTabs:(id)fp8;
- (void)closeOtherTabsFromMenu:(id)fp8;
- (void)closeTab:(id)fp8;
- (void)closeTabFromMenu:(id)fp8;
- (void)closeTabOrWindow:(id)fp8;
- (BOOL)control:(id)fp8 textView:(id)fp12 doCommandBySelector:(SEL)fp16;
- (void)controlTextDidChange:(id)fp8;
- (void)controlTextDidEndEditing:(id)fp8;
- (id)createInactiveTab;
- (id)createInactiveTabWithFrameName:(id)fp8;
- (id)createTab;
- (id)createTabWithFrameName:(id)fp8;
- (id)createTabWithFrameName:(id)fp8 andShow:(BOOL)fp12 addToRightSide:(BOOL)fp16;
- (id)createTabWithWebView:(id)fp8 andShow:(BOOL)fp12 addToRightSide:(BOOL)fp16;
- (void)createWebClip:(id)fp8;
- (id)currentWebView;
- (void)dealloc;
- (struct _NSRect)defaultFrame;
- (void)deleteBookmark:(id)fp8;
- (void)didSelectTabViewItem;
- (id)dynamicBackMenu;
- (id)dynamicForwardMenu;
- (void)editAddressOfFavorite:(id)fp8;
- (void)editContentsOfFavorite:(id)fp8;
- (void)editTitleOfBookmarksCollection:(id)fp8;
- (void)editTitleOfFavorite:(id)fp8;
- (void)firstResponderMightHaveChanged;
- (void)goBack:(id)fp8;
- (void)goBackOrForwardFromSegmentedControl:(id)fp8;
- (void)goForward:(id)fp8;
- (void)goHome:(id)fp8;
- (void)goToToolbarLocation:(id)fp8;
- (void)insertInOrderedTabViewItems:(id)fp8;
- (void)insertInOrderedTabViewItems:(id)fp8 atIndex:(unsigned int)fp12;
- (BOOL)isAutoFilling;
- (BOOL)isAvailableForForcedLocationUsingWindowPolicy:(int)fp8;
- (BOOL)isFavoritesBarVisible;
- (BOOL)isLocationBarVisible;
- (BOOL)isStatusBarVisible;
- (BOOL)isTabBarVisible;
- (void)locationTextFieldURLDropped:(id)fp8;
- (void)makeTextLarger:(id)fp8;
- (void)makeTextLargerOrSmallerFromSegmentedControl:(id)fp8;
- (void)makeTextSmaller:(id)fp8;
- (void)makeTextStandardSize:(id)fp8;
- (BOOL)menuHasKeyEquivalent:(id)fp8 forEvent:(id)fp12 target:(id *)fp16 action:(SEL *)fp20;
- (void)menuNeedsUpdate:(id)fp8;
- (unsigned int)morphingDragImage:(id)fp8 draggingEntered:(id)fp12;
- (void)morphingDragImage:(id)fp8 draggingExited:(id)fp12;
- (unsigned int)morphingDragImage:(id)fp8 draggingUpdated:(id)fp12;
- (void)morphingDragImage:(id)fp8 enteredWindow:(id)fp12;
- (void)morphingDragImage:(id)fp8 exitedWindow:(id)fp12;
- (BOOL)morphingDragImage:(id)fp8 performDragOperation:(id)fp12;
- (void)moveCurrentTabToNewWindow:(id)fp8;
- (void)moveTabFromOtherWindow:(id)fp8 toIndex:(unsigned int)fp12 andShow:(BOOL)fp16;
- (void)moveTabToNewWindowFromMenu:(id)fp8;
- (void)newBookmarkFolder:(id)fp8;
- (void)newTab:(id)fp8;
- (void)noResponderFor:(SEL)fp8;
- (unsigned int)numberOfNonEmptyTabs;
- (id)orderedTabViewItems;
- (id)orderedTabs;
- (void)performQuickSearch:(id)fp8;
- (void)printFromToolbar:(id)fp8;
- (void)reloadAllTabs:(id)fp8;
- (void)reloadObeyingLocationField:(id)fp8;
- (void)reloadTabFromMenu:(id)fp8;
- (void)reloadTabsMatchingURLs:(id)fp8;
- (void)removeFromOrderedTabViewItemsAtIndex:(unsigned int)fp8;
- (void)replaceEmptyTabWithTabs:(id)fp8;
- (void)replaceInOrderedTabViewItems:(id)fp8 atIndex:(unsigned int)fp12;
- (void)replaceTabURLs:(id)fp8 usingTabLabels:(id)fp12 allowGoBack:(BOOL)fp16;
- (void)reportBugToApple:(id)fp8;
- (void)revealFavorite:(id)fp8;
- (BOOL)searchField:(id)fp8 shouldRememberSearchString:(id)fp12;
- (void)searchForString:(id)fp8;
- (void)selectLocationField:(id)fp8;
- (void)selectNextTab:(id)fp8;
- (void)selectPreviousTab:(id)fp8;
- (void)selectSearchField:(id)fp8;
- (void)selectTab:(id)fp8;
- (id)selectedTab;
- (unsigned int)selectedTabIndex;
- (void)setAcceptsGenericIcon:(BOOL)fp8;
- (void)setDocument:(id)fp8;
- (void)setFavoritesBarVisible:(BOOL)fp8;
- (void)setLocationBarVisible:(BOOL)fp8;
- (void)setSearchFieldText:(id)fp8;
- (void)setStatusBarVisible:(BOOL)fp8;
- (void)setTabBarVisible:(BOOL)fp8;
- (void)setToolbarsVisible:(BOOL)fp8;
- (BOOL)shouldCloseDocument;
- (void)showHistoryInBookmarksView:(id)fp8;
- (void)showWindow:(id)fp8;
- (void)stopLoading:(id)fp8;
- (void)stopOrReload:(id)fp8;
- (float)tabBarHeight;
- (id)tabBarView;
- (void)tabBarViewDidRearrangeTabs;
- (id)tabsWithUnsubmittedFormText;
- (id)targetForSearch;
- (BOOL)textFieldWithControls:(id)fp8 mouseDownInRightButton2:(id)fp12;
- (void)textFieldWithControls:(id)fp8 mouseUpInRightButton2:(id)fp12;
- (void)textFieldWithControls:(id)fp8 mouseUpInRightButton:(id)fp12;
- (void)textFieldWithControlsPerformRightButton2Action:(id)fp8;
- (void)textFieldWithControlsPerformRightButtonAction:(id)fp8;
- (void)toggleFavoritesBar:(id)fp8;
- (void)toggleLocationBar:(id)fp8;
- (void)toggleShowBookmarks:(id)fp8;
- (void)toggleShowGoogleSearch:(id)fp8;
- (void)toggleStatusBar:(id)fp8;
- (void)toggleTabBar:(id)fp8;
- (BOOL)toolbarInputFieldsIncludeSearchField;
- (void)updateProgressBar:(BOOL)fp8;
- (void)updateTabLabelForWebView:(id)fp8;
- (BOOL)usesHiDPIControls;
- (BOOL)validateMenuItem:(id)fp8;
- (BOOL)validateUserInterfaceItem:(id)fp8;
- (void)webFrame:(id)fp8 willPerformClientRedirectToURL:(id)fp12;
- (void)webFrameLoadCommitted:(id)fp8;
- (void)webFrameLoadFinished:(id)fp8 withError:(id)fp12;
- (void)webFrameLoadStarted:(id)fp8;
- (void)webViewBannerHasChanged:(id)fp8;
- (void)webViewBlockedFromKeyViewLoopHasChanged:(id)fp8;
- (void)webViewFormEditedStatusHasChanged:(id)fp8;
- (void)webViewLoadingStatusHasChanged:(id)fp8;
- (void)webViewLocationFieldIconHasChanged:(id)fp8;
- (void)webViewLocationFieldURLHasChanged:(id)fp8;
- (void)webViewMainDocumentDidFirstLayout:(id)fp8;
- (void)webViewMainDocumentHasLoaded:(id)fp8;
- (void)webViewNameHasChanged:(id)fp8;
- (void)webViewPageForSnapBackHasChanged:(id)fp8;
- (void)webViewProgressFinished:(id)fp8;
- (void)webViewSheetRequestStatusHasChanged:(id)fp8;
- (void)webViewStatusMessageHasChanged:(id)fp8;
- (void)willSelectTabViewItem;
- (BOOL)window:(id)fp8 willHandleKeyEvent:(id)fp12;
- (BOOL)window:(id)fp8 willHandleMouseDownEvent:(id)fp12;
- (void)windowDidBecomeKey:(id)fp8;
- (void)windowDidDeminiaturize:(id)fp8;
- (void)windowDidLoad;
- (void)windowDidMiniaturize:(id)fp8;
- (void)windowDidMove:(id)fp8;
- (void)windowDidResignKey:(id)fp8;
- (void)windowDidResize:(id)fp8;
- (id)windowForSheet;
- (id)windowNibName;
- (BOOL)windowShouldClose:(id)fp8;
- (void)windowShouldGoToURL:(id)fp8;
- (id)windowTitleBarURL;
- (void)windowTitleNeedsUpdate;
- (void)windowWillClose:(id)fp8;
- (void)windowWillLoad;
- (struct _NSSize)windowWillResize:(id)fp8 toSize:(struct _NSSize)fp12;
- (id)windowWillReturnFieldEditor:(id)fp8 toObject:(id)fp12;
- (struct _NSRect)windowWillUseStandardFrame:(id)fp8 defaultFrame:(struct _NSRect)fp12;

@end

@interface SearchableWebView : WebView
{
    id _findInPageBanner;
    BOOL _closed;
}

- (void)_close;
- (id)findInPageBanner;
- (BOOL)isShowingFindInPageBanner;
- (BOOL)canShowFindInPageBanner;
- (BOOL)canHideFindInPageBanner;
- (BOOL)currentPageIsSearchable;
- (void)dealloc;
- (id)initWithFrame:(struct _NSRect)fp8 frameName:(id)fp24 groupName:(id)fp28;
- (void)awakeFromNib;
- (void)viewDidMoveToWindow;
- (void)webView:(id)fp8 didDrawRect:(struct _NSRect)fp12;
- (void)webView:(id)fp8 didScrollDocumentInFrameView:(id)fp12;

@end

@interface BrowserWebView : SearchableWebView
{
    id _document;
    id _loadMonitor;
    NSURLRequest *_initialRequest;
    BOOL _shouldStartEmpty;
    id _searchResultsForSnapBack;
    id _pageForSnapBack;
    BOOL _nextPageShouldBeSnapBackPoint;
    id bookmarksViewController;
    id bookmarksViewContents;
    NSString *_statusText;
    NSString *_progressStatus;
    id _progressStatusOwner;
    BOOL _ellipsizeProgressStatus;
    NSString *_generalStatus;
    id _generalStatusOwner;
    BOOL _ellipsizeGeneralStatus;
    NSString *_userDrivenStatus;
    id _userStatusOwner;
    BOOL _ellipsizeUserStatus;
    NSString *_provisionalOriginalURLString;
    NSString *_originalURLString;
    NSString *_pendingRSSFeedURLString;
    id _pendingRSSFeedReferrer;
    NSArray *_counterpartURLsForRSS;
    NSString *_requestedTabLabel;
    NSString *_provisionalTabLabel;
    NSString *_committedTabLabel;
    NSArray *_fallbackURLs;
    id _locationChangeDelegate;
    id _sheetRequest;
    id _formDelegate;
    double _redirectDelay;
    float _cumulativeMagnifyDelta;
    short _stickyTextMagnifyGestureDirection;
    float _textSizeMultiplierAtGestureStart;
    BOOL _isLoadingIgnoringQueue;
    BOOL _isLoadingConsideringQueue;
    BOOL _mainDocumentHasLoaded;
    BOOL _mainDocumentDidFirstLayout;
    BOOL _mainFrameLoadEndedInError;
    BOOL _isWindowFocusDisabled;
    BOOL _downloadNextPage;
    BOOL _isShowingBookmarks;
    BOOL _wasShowingBookmarks;
    BOOL _isShowingRSS;
    BOOL _hasDisplayedValidURL;
    BOOL _registeredForNetworkConfigurationChanges;
    BOOL _isMovingToAnotherWindow;
    BOOL _isSwitchingToBackgroundTab;
    BOOL _restoringTabForUndoClose;
    BOOL _blockedFromKeyViewLoop;
    BOOL _bannerIsMovingIntoPlace;
    NSURLRequest *_requestWaitingInQueue;
    NSMutableArray *_iPhotoFileWrappers;
    struct ProcessSerialNumber iPhotoPSN;
    BOOL isObservingAppLaunches;
    NSDictionary *_parentalControlledElement;
    NSMutableArray *_currentBanners;
    id _webClipBanner;
    id _securityBanner;
    id _historyItemForTabCloseUndo;
    id _currentPageLoad;
}

+ (void)initialize;
+ (void)closeWebViewSoon:(id)fp8;
+ (void)closeAllPendingWebViews;
- (id)windowController;
- (id)browserWindow;
- (id)initWithDocument:(id)fp8 request:(id)fp12 frameName:(id)fp16;
- (void)dealloc;
- (void)beginGestureWithEvent:(id)fp8;
- (void)magnifyWithEvent:(id)fp8;
- (id)sheetRequest;
- (void)setSheetRequest:(id)fp8;
- (id)currentBanners;
- (BOOL)canShowFindInPageBanner;
- (void)showFindInPageBannerAllowingAnimation:(BOOL)fp8;
- (void)hideFindInPageBannerAllowingAnimation:(BOOL)fp8;
- (BOOL)isShowingWebClipBanner;
- (id)webClipBanner;
- (void)showWebClipBannerAllowingAnimation:(BOOL)fp8;
- (void)hideWebClipBannerAllowingAnimation:(BOOL)fp8;
- (id)securityBanner;
- (BOOL)isShowingSecurityBanner;
- (id)securityInfoCreateIfAbsent:(BOOL)fp8;
- (void)securityInfoDidChange;
- (void)showSecurityBannerAllowingAnimation:(BOOL)fp8;
- (void)hideSecurityBannerAllowingAnimation:(BOOL)fp8;
- (void)showSecuritySheet;
- (void)bannerDidInstall:(id)fp8;
- (void)bannerDidUninstall:(id)fp8;
- (id)viewBelowBanner:(id)fp8;
- (void)banner:(id)fp8 viewBelow:(id)fp12 wasResizedFromFrame:(struct _NSRect)fp16 animationProgress:(float)fp32 installing:(BOOL)fp36;
- (BOOL)findBanner:(id)fp8 doSearchFieldCommandBySelector:(SEL)fp12;
- (void)viewWillMoveToWindow:(id)fp8;
- (void)viewDidMoveToWindow;
- (void)_close;
- (id)document;
- (id)loadMonitor;
- (id)undoManagerForWebView:(id)fp8;
- (void)webView:(id)fp8 setStatusText:(id)fp12;
- (id)webViewStatusText:(id)fp8;
- (void)webView:(id)fp8 mouseDidMoveOverElement:(id)fp12 modifierFlags:(unsigned int)fp16;
- (id)webView:(id)fp8 createWebViewWithRequest:(id)fp12;
- (id)webView:(id)fp8 createWebViewModalDialogWithRequest:(id)fp12;
- (void)webViewRunModal:(id)fp8;
- (void)webViewClose:(id)fp8;
- (void)webViewShow:(id)fp8;
- (void)webViewFocus:(id)fp8;
- (id)webViewFirstResponder:(id)fp8;
- (void)webView:(id)fp8 makeFirstResponder:(id)fp12;
- (BOOL)webViewAreToolbarsVisible:(id)fp8;
- (void)webView:(id)fp8 setToolbarsVisible:(BOOL)fp12;
- (BOOL)webViewIsStatusBarVisible:(id)fp8;
- (void)webView:(id)fp8 setStatusBarVisible:(BOOL)fp12;
- (BOOL)webViewIsResizable:(id)fp8;
- (void)webView:(id)fp8 setResizable:(BOOL)fp12;
- (id)mainWebFrameView;
- (void)webView:(id)fp8 setFrame:(struct _NSRect)fp12;
- (struct _NSRect)webViewFrame:(id)fp8;
- (void)webView:(id)fp8 setContentRect:(struct _NSRect)fp12;
- (struct _NSRect)webViewContentRect:(id)fp8;
- (void)webView:(id)fp8 didScrollDocumentInFrameView:(id)fp12;
- (void)webView:(id)fp8 runJavaScriptAlertPanelWithMessage:(id)fp12 initiatedByFrame:(id)fp16;
- (BOOL)webView:(id)fp8 runJavaScriptConfirmPanelWithMessage:(id)fp12 initiatedByFrame:(id)fp16;
- (BOOL)webView:(id)fp8 runBeforeUnloadConfirmPanelWithMessage:(id)fp12 initiatedByFrame:(id)fp16;
- (BOOL)webViewShouldInterruptJavaScript:(id)fp8;
- (id)webView:(id)fp8 runJavaScriptTextInputPanelWithPrompt:(id)fp12 defaultText:(id)fp16 initiatedByFrame:(id)fp20;
- (void)webView:(id)fp8 runOpenPanelForFileButtonWithResultListener:(id)fp12;
- (void)webView:(id)fp8 saveFrameView:(id)fp12 showingPanel:(BOOL)fp16;
- (BOOL)panel:(id)fp8 shouldShowFilename:(id)fp12;
- (void)openPanelDidEnd:(id)fp8 returnCode:(int)fp12 contextInfo:(void *)fp16;
- (id)proposedBookmarkTitleForElement:(id)fp8;
- (BOOL)isMovingToAnotherWindow;
- (void)setMovingToAnotherWindow:(BOOL)fp8;
- (void)didMoveToDocument:(id)fp8;
- (void)willCloseWithUndo;
- (void)didReopenWithUndo;
- (BOOL)shouldCacheCurrentPageText;
- (void)newBookmarkSheetDidEnd:(BOOL)fp8;
- (void)webView:(id)fp8 unableToImplementPolicyWithError:(id)fp12 frame:(id)fp16;
- (void)networkConfigurationDidChange:(id)fp8;
- (id)encodedURLStringOrPathForPageLoadError:(id)fp8;
- (void)showErrorPageForURL:(id)fp8 withTitle:(id)fp12 message:(id)fp16 errorPageTemplate:(int)fp20;
- (void)webView:(id)fp8 decidePolicyForMIMEType:(id)fp12 request:(id)fp16 frame:(id)fp20 decisionListener:(id)fp24;
- (BOOL)webView:(id)fp8 shouldGoToHistoryItem:(id)fp12;
- (void)webView:(id)fp8 decidePolicyForNavigationAction:(id)fp12 request:(id)fp16 frame:(id)fp20 decisionListener:(id)fp24;
- (void)webView:(id)fp8 decidePolicyForNewWindowAction:(id)fp12 request:(id)fp16 newFrameName:(id)fp20 decisionListener:(id)fp24;
- (id)originalURLString;
- (void)setOriginalURLString:(id)fp8;
- (id)provisionalOriginalURLString;
- (void)setProvisionalOriginalURLString:(id)fp8;
- (id)pendingRSSFeedURLString;
- (id)pendingRSSFeedReferrer;
- (void)setPendingRSSFeedURLString:(id)fp8 withReferrer:(id)fp12;
- (id)provisionalTabLabel;
- (void)setProvisionalTabLabel:(id)fp8;
- (id)committedTabLabel;
- (void)setCommittedTabLabel:(id)fp8;
- (id)requestedTabLabel;
- (void)setRequestedTabLabel:(id)fp8;
- (id)tabLabel;
- (id)statusMessage;
- (BOOL)ellipsizeStatusMessage;
- (void)setStatus:(id)fp8 withPriority:(int)fp12 ellipsize:(BOOL)fp16 owner:(id)fp20;
- (void)clearAllStatus;
- (id)currentURL;
- (id)provisionalURL;
- (id)expectedOrCurrentURL;
- (id)expectedOrCurrentOriginalURLString;
- (BOOL)isDisplayingCompleteNonRSSPage;
- (BOOL)isDisplayingNonRSSPage;
- (BOOL)isShowingBookmarks;
- (void)hideBookmarks;
- (id)bookmarksViewContents;
- (id)bookmarksViewController;
- (BOOL)findBannerCanComputeSearchResultsCount:(id)fp8;
- (unsigned int)findBannerSearchResultsCount:(id)fp8;
- (id)locationFieldURL;
- (id)titleForLocationFieldURL;
- (id)currentTitle;
- (id)pageNameURL;
- (id)pageName;
- (id)displayName;
- (id)fallbackURLs;
- (void)clearFallbackURLs;
- (void)goToNextFallbackURL;
- (BOOL)isLoading;
- (BOOL)containsEditedForm;
- (void)setMainFrameLoadEndedInError:(BOOL)fp8;
- (BOOL)mainFrameLoadEndedInError;
- (void)setMainDocumentHasLoaded:(BOOL)fp8;
- (BOOL)mainDocumentHasLoaded;
- (void)setMainDocumentDidFirstLayout:(BOOL)fp8;
- (BOOL)mainDocumentDidFirstLayout;
- (void)progressStarted:(id)fp8;
- (void)progressChanged:(id)fp8;
- (void)progressFinished:(id)fp8;
- (void)setPendingRedirectDelay:(double)fp8;
- (void)cancelPendingRedirect;
- (double)pendingRedirectDelay;
- (BOOL)canMakeTextSmaller;
- (BOOL)canMakeTextLarger;
- (BOOL)canMakeTextStandardSize;
- (void)makeTextLarger:(id)fp8;
- (void)makeTextSmaller:(id)fp8;
- (void)makeTextStandardSize:(id)fp8;
- (BOOL)isSwitchingToBackgroundTab;
- (void)setSwitchingToBackgroundTab:(BOOL)fp8;
- (BOOL)maintainsInactiveSelection;
- (BOOL)isShowingRSS;
- (id)counterpartURLsForRSS;
- (void)updateCounterpartURLsForRSS;
- (void)snapBackTo:(id)fp8;
- (BOOL)nextPageShouldBeSnapBackPoint;
- (void)setNextPageShouldBeSnapBackPoint:(BOOL)fp8;
- (void)setPageForSnapBack:(id)fp8;
- (void)setPageForSnapBackToCurrentPage:(id)fp8;
- (BOOL)canSnapBackToPage;
- (void)snapBackToPage:(id)fp8;
- (id)pageForSnapBack;
- (void)reportErrorForBadFileWrapper:(id)fp8;
- (void)saveFileWrapperToDownloadsFolder:(id)fp8;
- (void)setSearchResultsForSnapBack:(id)fp8;
- (void)setSearchResultsForSnapBackToCurrentPage;
- (void)clearSearchResultsForSnapBack;
- (BOOL)canSnapBackToSearchResults;
- (void)snapBackToSearchResults:(id)fp8;
- (id)searchResultsForSnapBack;
- (void)goNowIfInQueue;
- (void)stopLoading:(id)fp8;
- (BOOL)validateUserInterfaceItem:(id)fp8;
- (void)setAcceptsGenericIcon:(BOOL)fp8;
- (void)updateIcon;
- (void)nameHasChanged;
- (void)pageTitleHasChanged;
- (void)locationFieldURLHasChanged;
- (void)prepareForRSSAnimation;
- (void)currentURLHasChanged;
- (void)provisionalURLHasChanged;
- (void)pageLoadingStatusHasChanged;
- (void)dataSourceHasChanged:(id)fp8 forFrame:(id)fp12;
- (void)mainDataSourceHasChanged;
- (void)goToRequest:(id)fp8 withTabLabel:(id)fp12 allowJavaScript:(BOOL)fp16 waitInQueue:(BOOL)fp20;
- (void)goToURL:(id)fp8;
- (void)tryMultipleURLs:(id)fp8;
- (void)tryDownloadWithMultipleURLs:(id)fp8;
- (id)stringByEvaluatingJavaScriptFromString:(id)fp8;
- (BOOL)hasInitialContents;
- (void)displayInitialContents;
- (BOOL)shouldStartEmpty;
- (void)setShouldStartEmpty;
- (void)clearPageCache;
- (BOOL)isWindowFocusDisabled;
- (void)setWindowFocusDisabled:(BOOL)fp8;
- (void)setBlockedFromKeyViewLoop:(BOOL)fp8;
- (BOOL)isBlockedFromKeyViewLoop;
- (void)setHoverFeedbackSuspended:(BOOL)fp8;
- (void)webView:(id)fp8 addMessageToConsole:(id)fp12;
- (id)currentPageLoad;
- (void)setCurrentPageLoad:(id)fp8;

@end
