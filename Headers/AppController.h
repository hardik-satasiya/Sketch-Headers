//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSDataSupplierManagerDelegate-Protocol.h"
#import "NSApplicationDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSUserNotificationCenterDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class BCLicenseManager, MSActionController, MSAssetLibraryController, MSCrashLogManager, MSDataSupplierManager, MSDocumentationSearcher, MSFontWatcher, MSMirrorDataProvider, MSPasteboardManager, MSPluginCommand, MSPluginManagerWithActions, MSUpdateController, NSArray, NSMenu, NSMenuItem, NSString, SCKUserNotificationsController, SMKMirrorController;
@protocol OS_dispatch_semaphore;

@interface AppController : NSObject <NSApplicationDelegate, NSWindowDelegate, NSMenuDelegate, NSUserNotificationCenterDelegate, MSDataSupplierManagerDelegate>
{
    BOOL _sketchSafeModeOn;
    BOOL _needToInformUserPluginsAreDisabled;
    NSMenuItem *_pluginsMenuItem;
    NSMenu *_printMenu;
    NSMenuItem *_aboutMenuItem;
    NSMenuItem *_debugMenuItem;
    NSMenuItem *_insertSymbolMenuItem;
    NSMenuItem *_insertSharedTextStyleMenuItem;
    NSMenu *_fileMenu;
    NSMenu *_viewMenu;
    NSMenuItem *_assistantMenuItem;
    NSMenu *_insertMenu;
    MSPasteboardManager *_pasteboardManager;
    SMKMirrorController *_mirrorController;
    MSMirrorDataProvider *_mirrorDataProvider;
    MSDataSupplierManager *_dataSupplierManager;
    MSCrashLogManager *_crashLogManager;
    MSPluginManagerWithActions *_pluginManager;
    BCLicenseManager *_licenseManager;
    MSUpdateController *_updateController;
    MSActionController *_actionController;
    MSAssetLibraryController *_librariesController;
    double _creationTime;
    double _launchStartTime;
    double _launchEndTime;
    NSString *_scriptPath;
    NSObject<OS_dispatch_semaphore> *_migrationSemaphore;
    MSDocumentationSearcher *_documentationSearcher;
    NSArray *_visualSettings;
    MSFontWatcher *_fontWatcher;
    id _lastRunPlugin;
    SCKUserNotificationsController *_cloudNotificationsController;
}

+ (id)licenseAlertDateComponentsFormatter;
+ (id)templateLibraryURL;
+ (id)sharedInstance;
+ (void)initialize;
@property(retain, nonatomic) SCKUserNotificationsController *cloudNotificationsController; // @synthesize cloudNotificationsController=_cloudNotificationsController;
@property(retain, nonatomic) id lastRunPlugin; // @synthesize lastRunPlugin=_lastRunPlugin;
@property(retain, nonatomic) MSFontWatcher *fontWatcher; // @synthesize fontWatcher=_fontWatcher;
@property(retain, nonatomic) NSArray *visualSettings; // @synthesize visualSettings=_visualSettings;
@property(retain, nonatomic) MSDocumentationSearcher *documentationSearcher; // @synthesize documentationSearcher=_documentationSearcher;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *migrationSemaphore; // @synthesize migrationSemaphore=_migrationSemaphore;
@property(nonatomic) NSString *scriptPath; // @synthesize scriptPath=_scriptPath;
@property(nonatomic) BOOL needToInformUserPluginsAreDisabled; // @synthesize needToInformUserPluginsAreDisabled=_needToInformUserPluginsAreDisabled;
@property(nonatomic) BOOL sketchSafeModeOn; // @synthesize sketchSafeModeOn=_sketchSafeModeOn;
@property(nonatomic) double launchEndTime; // @synthesize launchEndTime=_launchEndTime;
@property(nonatomic) double launchStartTime; // @synthesize launchStartTime=_launchStartTime;
@property(nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, nonatomic) MSAssetLibraryController *librariesController; // @synthesize librariesController=_librariesController;
@property(readonly, nonatomic) MSActionController *actionController; // @synthesize actionController=_actionController;
@property(readonly, nonatomic) MSUpdateController *updateController; // @synthesize updateController=_updateController;
@property(retain, nonatomic) BCLicenseManager *licenseManager; // @synthesize licenseManager=_licenseManager;
@property(retain, nonatomic) MSPluginManagerWithActions *pluginManager; // @synthesize pluginManager=_pluginManager;
@property(readonly, nonatomic) MSCrashLogManager *crashLogManager; // @synthesize crashLogManager=_crashLogManager;
@property(readonly, nonatomic) MSDataSupplierManager *dataSupplierManager; // @synthesize dataSupplierManager=_dataSupplierManager;
@property(retain, nonatomic) MSMirrorDataProvider *mirrorDataProvider; // @synthesize mirrorDataProvider=_mirrorDataProvider;
@property(retain, nonatomic) SMKMirrorController *mirrorController; // @synthesize mirrorController=_mirrorController;
@property(retain, nonatomic) MSPasteboardManager *pasteboardManager; // @synthesize pasteboardManager=_pasteboardManager;
@property(retain, nonatomic) NSMenu *insertMenu; // @synthesize insertMenu=_insertMenu;
@property(retain, nonatomic) NSMenuItem *assistantMenuItem; // @synthesize assistantMenuItem=_assistantMenuItem;
@property(retain, nonatomic) NSMenu *viewMenu; // @synthesize viewMenu=_viewMenu;
@property(retain, nonatomic) NSMenu *fileMenu; // @synthesize fileMenu=_fileMenu;
@property(retain, nonatomic) NSMenuItem *insertSharedTextStyleMenuItem; // @synthesize insertSharedTextStyleMenuItem=_insertSharedTextStyleMenuItem;
@property(retain, nonatomic) NSMenuItem *insertSymbolMenuItem; // @synthesize insertSymbolMenuItem=_insertSymbolMenuItem;
@property(nonatomic) __weak NSMenuItem *debugMenuItem; // @synthesize debugMenuItem=_debugMenuItem;
@property(nonatomic) __weak NSMenuItem *aboutMenuItem; // @synthesize aboutMenuItem=_aboutMenuItem;
@property(nonatomic) __weak NSMenu *printMenu; // @synthesize printMenu=_printMenu;
@property(nonatomic) __weak NSMenuItem *pluginsMenuItem; // @synthesize pluginsMenuItem=_pluginsMenuItem;
- (void).cxx_destruct;
- (void)applyAppearanceToAllWindows:(id)arg1;
- (BOOL)application:(id)arg1 openFile:(id)arg2;
- (id)resourcesNeedingMigrationFromResources:(id)arg1;
- (void)refreshDocumentWindowBadges;
- (void)refreshDocumentColors;
- (void)currentDocumentDidChange;
- (void)showLicenseAlert:(long long)arg1 remainingTimeInterval:(double)arg2;
- (void)licenseDidBecomeInvalidNotification:(id)arg1;
- (void)updateLicenseManager;
- (void)setupLicenseManagerWithPublicCertificate:(id)arg1 licenseURL:(id)arg2 applicationID:(id)arg3;
- (void)startLicenseManager;
- (void)buy:(id)arg1;
- (void)openAboutWindow:(id)arg1;
- (void)openPreferencesWindowWithPreferencePaneIdentifier:(id)arg1;
- (void)documentWillClose:(id)arg1;
- (id)pluginNameForIdentifier:(id)arg1;
- (id)pluginIconForIdentifier:(id)arg1;
- (BOOL)isThereAPluginForDataSupplier:(id)arg1;
- (void)requestDataFromPluginDataSupplier:(id)arg1 pluginContext:(id)arg2;
- (void)revealTemplatesFolderInFinder:(id)arg1;
- (void)addTemplatesAtURL:(id)arg1 toMenu:(id)arg2;
- (void)updateTemplateMenu:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (id)menuItemFromMenu:(id)arg1 withKeyEquivalent:(id)arg2 modifierMask:(unsigned long long)arg3;
- (BOOL)doesMenuItem:(id)arg1 haveKeyEquivalent:(id)arg2 modifierMask:(unsigned long long)arg3;
- (void)setKeyEquivalent:(id)arg1 isAlternate:(BOOL)arg2 onEnabledMenuItem:(id)arg3;
- (void)setUnusedMenuItem:(id)arg1;
- (void)setupOpenMenuItems:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)openTemplateAtURL:(id)arg1;
- (void)openTemplateFile:(id)arg1;
- (void)checkImageTemplates;
@property(nonatomic) BOOL cloudAsDefault;
- (void)checkDefaults;
- (BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (long long)periodWithInitialValue:(long long)arg1 defaultsKey:(id)arg2;
@property(readonly, nonatomic) long long checkForUpdatesPeriod;
- (void)badgeWindows;
- (void)checkForAndDownloadPluginUpdates;
- (void)installCompatiblePluginUpdates;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)createActions;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didDeliverNotification:(id)arg2;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)ensureUserTemplateDirectoryExists;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (BOOL)applicationOpenUntitledFile:(id)arg1;
- (BOOL)applicationShouldOpenUntitledFile:(id)arg1;
- (BOOL)isFirstLaunchOfNewVersion;
- (void)storePluginList:(id)arg1 inCrashLogKey:(id)arg2;
- (void)storePluginsForCrashReport;
- (void)setupPluginManager;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)awakeFromNib;
@property(readonly, nonatomic) BOOL canShowDocumentsWindowForUserAction;
- (void)showMainApplicationWindow;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserversForVisualSettings;
- (void)addObserversForVisualSettings;
- (void)updateAssistantMenuState:(BOOL)arg1;
- (void)setupAssistantMenu;
- (void)setupMenuItems;
- (id)init;
- (unsigned long long)handleTerminationRequest:(id)arg1;
- (void)openDocumentAtPath:(id)arg1 withParameters:(id)arg2;
- (void)openAddLibraryURL:(id)arg1 parameters:(id)arg2;
- (void)didOpenURL:(id)arg1;
- (void)handleURLEvent:(id)arg1 withReplyEvent:(id)arg2;
- (void)registerURLScheme;
- (id)actionClasses;
- (void)kickMenu:(id)arg1;
- (void)applySubmenuShortcutFix;
- (void)scriptingMenuAction:(id)arg1;
- (BOOL)validatePluginMenuItem:(id)arg1 documentShowing:(BOOL)arg2;
- (id)runPluginScript:(id)arg1 handler:(id)arg2 name:(id)arg3 withPreprocess:(BOOL)arg4;
- (id)runPluginScript:(id)arg1 name:(id)arg2;
- (id)runPluginCommand:(id)arg1 fromMenu:(BOOL)arg2 context:(id)arg3 onComplete:(CDUnknownBlockType)arg4;
- (id)runPluginCommand:(id)arg1 fromMenu:(BOOL)arg2 context:(id)arg3;
- (id)targetDocumentForPluginCommand;
- (void)buildPluginsMenu:(id)arg1;
- (void)editPlugins:(id)arg1;
- (void)revealPlugin:(id)arg1;
@property(readonly, nonatomic) MSPluginCommand *lastRun;
- (void)rememberLastRun:(id)arg1;
- (id)runPluginCommandWithIdentifier:(id)arg1 fromBundleAtURL:(id)arg2 context:(id)arg3 portToAsnwerTo:(id)arg4;
- (id)runPluginCommandWithIdentifier:(id)arg1 fromBundleAtURL:(id)arg2 context:(id)arg3;
- (id)runPluginAtURL:(id)arg1;
- (id)evaluateScript:(id)arg1;
- (id)runPluginCommandWithIdentifier:(id)arg1 fromBundleAtURL:(id)arg2;
- (id)runPluginCommand:(id)arg1 fromMenu:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

