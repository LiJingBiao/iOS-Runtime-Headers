/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@class NSError, NSRecursiveLock, NSString, PCPersistentTimer;

@interface VVService : NSObject {
    struct { 
        unsigned int offline : 1; 
        unsigned int subscribed : 1; 
        unsigned int initialSetupRequired : 1; 
        unsigned int fakeInitialSetup : 1; 
        unsigned int launchedWithFakeInitialSetup : 1; 
        unsigned int mwiState : 1; 
        unsigned int notificationFallbackEnabled : 1; 
        unsigned int capabilitiesLoaded : 1; 
    NSError *_activationError;
    unsigned int _capabilities;
    id _carrierParameters;
    NSRecursiveLock *_lock;
    int _mailboxUsage;
    struct __CFDate { } *_nextRetryWakeDate;
    struct __CFDate { } *_nextTrashCompactionWakeDate;
    PCPersistentTimer *_notificationFallbackTimer;
    struct __CFDate { } *_notificationFallbackWakeDate;
    Class _notificationInterpreter;
    NSString *_password;
    NSError *_passwordError;
    NSString *_passwordMailboxName;
    unsigned int _pmNotifier;
    struct IONotificationPort { } *_pmNotifierPort;
    unsigned int _pmRootPort;
    struct __CFRunLoopSource { } *_pmRunLoopSource;
    int _retryIntervalIndex;
    struct __CFArray { } *_retryIntervals;
    PCPersistentTimer *_retryTimer;
    } _serviceFlags;
    double _trashCompactionAge;
    PCPersistentTimer *_trashCompactionTimer;
    unsigned int _trashedCount;
    unsigned int _unreadCount;
    bool_VVMDataConnectionAvailable;
}

@property bool VVMDataConnectionAvailable;

+ (void)_handleSIMChange;
+ (bool)_lockedSharedServiceIsSubscribed;
+ (void)_resetInsomniaState;
+ (void)_setInsomniaState:(bool)arg1;
+ (void)_suppressInsomniaState;
+ (unsigned int)_voicemailPowerAssertion;
+ (void)initialize;
+ (void)setInsomniaEnabled:(bool)arg1;
+ (id)sharedService;
+ (bool)sharedServiceIsSubscribed;

- (bool)VVMDataConnectionAvailable;
- (void)_attemptDelayedSynchronize:(id)arg1;
- (void)_attemptDelayedSynchronize;
- (void)_attemptScheduledTrashCompaction;
- (void)_cancelAutomatedTrashCompaction;
- (void)_cancelIndicatorAction;
- (void)_contextActivationFailed:(id)arg1;
- (void)_contextActivationSucceeded:(id)arg1;
- (void)_deliverFallbackNotification;
- (void)_deregisterForPowerEventsIfNecessary;
- (void)_enterFallbackMode:(id)arg1;
- (void)_handleCallStatusChange:(struct __CFDictionary { }*)arg1;
- (bool)_isOfflineDueToRoamingWithDataStatusDict:(struct __CFDictionary { }*)arg1;
- (void)_reactToIndicator;
- (void)_registerForPowerEventsIfNecessary;
- (struct __CFArray { }*)_retryIntervals;
- (void)_scheduleAutomatedTrashCompaction;
- (void)_scheduleFallbackTimerIfNecessary;
- (void)_setActivationError:(id)arg1;
- (void)_setOnline:(bool)arg1 fallbackMode:(bool)arg2;
- (void)_updateOnlineStatusWithDataStatusDict:(struct __CFDictionary { }*)arg1;
- (id)activationError;
- (void)cancelAutomatedTrashCompaction;
- (void)cancelDelayedSynchronize;
- (void)cancelNotificationFallback;
- (void)cancelPasswordRequest;
- (unsigned int)capabilities;
- (id)carrierParameterValueForKey:(id)arg1;
- (void)changePassword:(id)arg1 fromPassword:(id)arg2;
- (void)clearActivationError;
- (void)clearRemoteUIDsForDetachedMessages;
- (struct __CFString { }*)connectionServiceType;
- (bool)dataForRecordPending:(void*)arg1 progressiveLoadInProgress:(bool*)arg2;
- (void)dealloc;
- (void)displayPasswordRequestIfNecessary;
- (bool)doTrashCompaction;
- (bool)doesClientManageTrashCompaction;
- (bool)greetingAvailable;
- (bool)greetingFetchExistsProgressiveLoadInProgress:(bool*)arg1;
- (void)handleDataContextDeactivated;
- (void)handleIndicatorNotification:(struct __CFDictionary { }*)arg1;
- (void)handleNotification:(id)arg1 isMWI:(bool)arg2;
- (void)handlePasswordNotificationResponse:(id)arg1;
- (void)handlePasswordRequestCancellation;
- (bool)headerChangesPending;
- (id)init;
- (bool)isInSync;
- (bool)isMessageWaiting;
- (bool)isOfflineDueToRoaming;
- (bool)isOnline;
- (bool)isPasswordReady;
- (bool)isSubscribed;
- (bool)isVVMAvailableOverWiFi;
- (void)kill;
- (long long)mailboxGreetingType;
- (id)mailboxName;
- (bool)mailboxRequiresSetup;
- (int)mailboxUsage;
- (int)maximumGreetingDuration;
- (int)maximumPasswordLength;
- (int)maximumRecordedNameDuration;
- (int)minimumPasswordLength;
- (void)moveRecordFromTrash:(void*)arg1;
- (void)moveRecordToTrash:(void*)arg1;
- (Class)notificationInterpreterClass;
- (id)password;
- (bool)passwordChangeRequiresEnteringOldPassword;
- (id)passwordIgnoringSubscription:(bool)arg1;
- (void)progressiveDataLengthsForRecord:(void*)arg1 expected:(unsigned int*)arg2 current:(unsigned int*)arg3;
- (id)provisionalPassword;
- (void)removeAllNonDetachedRecords;
- (void)removeAllRecords;
- (void)reportError:(id)arg1;
- (void)resetCounts;
- (void)resetDelayedSynchronizationAttemptCount;
- (bool)respectsMWINotifications;
- (void)retrieveDataForRecord:(void*)arg1;
- (void)retrieveGreeting;
- (void)scheduleAutomatedTrashCompaction;
- (void)scheduleDelayedSynchronize;
- (void)setGreetingType:(long long)arg1 withData:(id)arg2 duration:(unsigned int)arg3;
- (void)setMailboxRequiresSetup:(bool)arg1;
- (void)setMailboxUsage:(int)arg1;
- (void)setMessageWaiting:(bool)arg1;
- (void)setOnline:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setProvisionalPassword:(id)arg1;
- (void)setSubscribed:(bool)arg1;
- (void)setTrashedCount:(unsigned int)arg1;
- (void)setUnreadCount:(unsigned int)arg1;
- (void)setVVMDataConnectionAvailable:(bool)arg1;
- (bool)sharedSubscriptionRequiresSetup;
- (bool)shouldScheduleAutoTrashOnMailboxUsageChange;
- (bool)shouldTrashCompactRecord:(void*)arg1;
- (bool)synchronizationPending;
- (void)synchronize:(bool)arg1;
- (bool)taskOfTypeExists:(long long)arg1;
- (double)trashCompactionAge;
- (unsigned int)trashedCount;
- (unsigned int)unreadCount;
- (void)updateCountsForChangedFlags:(unsigned int)arg1 currentRecordFlags:(unsigned int)arg2;
- (void)updateLoggingSettings;

@end
