/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableDictionary, NSString;



@interface DAAccount : BasicAccount <AccountCreationProtocol>
{
    NSInteger _accountTypes;
    BOOL _hasDirtyBits;
    BOOL _hasInitted;
    BOOL _shouldPromptForPassword;
    BOOL _haveLookedUpPassword;
    NSString *_cachedPassword;
    BOOL _shouldFailAllTasks;
    NSInteger _originalAccountTypes;
    NSInteger _contactsChangeType;
    NSInteger _eventsChangeType;
    NSMutableDictionary *_haveWarnedAboutCertDict;
}

@property NSInteger daAccountVersion; /* unknown property attribute: SsetDAAccountVersion: */
@property(copy,readonly) NSString *tag;
@property(copy,readonly) NSString *persistentUUID;
@property(copy) NSString *accountDescription;
@property(copy) NSString *username;
@property(copy) NSString *host;
@property NSInteger port;
@property(copy) NSString *password;
@property BOOL useSSL;
@property(copy) NSString *emailAddress;
@property(copy) NSArray *emailAddresses;
@property BOOL shouldPromptForPassword;
@property BOOL shouldFailAllTasks;
@property(copy) NSData *identityPersist;

+ (id)basicAccountProperties;
+ (Class)accountClass;
+ (Class)accountClassWithProperties:(id)arg1;
+ (Class)clientClass;
+ (Class)daemonClass;
+ (void)vendDaemons;
+ (id)defaultProperties;
+ (id)newAccountOfClass:(Class)arg1;
+ (id)newEASAccount;
+ (id)newLDAPAccount;
+ (id)newCalDAVAccount;

- (void)dealloc;
- (id)initWithProperties:(id)arg1;
- (id)init;
- (void)resetAccountID;
- (id)accountID;
- (id)syncStoreIdentifier;
- (id)persistentUUID;
- (id)tag;
- (void)_setPersistentUUID:(id)arg1;
- (id)accountDescription;
- (void)setAccountDescription:(id)arg1;
- (BOOL)supportsAccountType:(NSInteger)arg1;
- (BOOL)isDisabled;
- (BOOL)enabledForAccountType:(NSInteger)arg1;
- (void)setEnabled:(BOOL)arg1 forAccountType:(NSInteger)arg2 changeType:(NSInteger)arg3;
- (BOOL)originallyEnabledForAccountType:(NSInteger)arg1;
- (NSInteger)accountChangeTypeForAccountType:(NSInteger)arg1;
- (id)initProperClassWithProperties:(id)arg1;
- (id)initWithBasicAccount:(id)arg1;
- (BOOL)accountBoolPropertyForKey:(id)arg1;
- (void)setAccountBoolProperty:(BOOL)arg1 forKey:(id)arg2;
- (NSInteger)accountIntPropertyForKey:(id)arg1;
- (void)setAccountIntProperty:(NSInteger)arg1 forKey:(id)arg2;
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)arg1;
- (void)cancelAutodiscovery;
- (void)resumeMonitoringFoldersWithIDs:(id)arg1;
- (void)suspendMonitoringFoldersWithIDs:(id)arg1;
- (void)stopMonitoringFolderWithID:(id)arg1;
- (id)stateString;
- (void)takeValuesFromAccount:(id)arg1;
- (id)usernameWithoutDomain;
- (void)checkValidityWithConsumer:(id)arg1;
- (void)_removeHostsToTrust;
- (BOOL)_upgradeSelfFromPreKirkwoodWithAccountManager:(id)arg1;
- (BOOL)upgradeAccountIfNecessaryWithAccountManager:(id)arg1;
- (BOOL)shouldPromptForPassword;
- (void)removePasswordFromKeychain;
- (void)savePasswordInKeychain;
- (void)setShouldPromptForPassword:(BOOL)arg1;
- (id)password;
- (void)setPassword:(id)arg1;
- (void)blowAwayCachedPassword;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)host;
- (void)setHost:(id)arg1;
- (BOOL)useSSL;
- (void)setUseSSL:(BOOL)arg1;
- (id)emailAddress;
- (void)setEmailAddress:(id)arg1;
- (id)emailAddresses;
- (void)setEmailAddresses:(id)arg1;
- (BOOL)accountContainsEmailAddress:(id)arg1;
- (NSInteger)port;
- (void)setPort:(NSInteger)arg1;
- (id)urlForKeychain;
- (BOOL)shouldFailAllTasks;
- (void)setShouldFailAllTasks:(BOOL)arg1;
- (void)_setProperties:(id)arg1;
- (BOOL)hasDirtyBits;
- (void)tearDown;
- (BOOL)monitorFoldersWithIDs:(id)arg1;
- (BOOL)monitorFolderWithID:(id)arg1;
- (void)stopMonitoringFoldersWithIDs:(id)arg1;
- (void)stopMonitoringFolders;
- (id)defaultContainerIdentifierForDataclass:(NSInteger)arg1;
- (void)setP12Data:(id)arg1 password:(id)arg2;
- (void)saveAccountProperties;
- (id)identityPersist;
- (void)setIdentityPersist:(id)arg1;
- (id)_exceptionsDict;
- (struct __CFData { }*)exceptionsForDigest:(id)arg1;
- (void)setExceptions:(struct __CFData { }*)arg1 forDigest:(id)arg2;
- (void)cleanupAccountFiles;
- (void)saveAccountSettings;
- (NSInteger)daAccountVersion;
- (void)setDAAccountVersion:(NSInteger)arg1;
- (BOOL)haveWarnedAboutCert:(id)arg1;
- (void)setHaveWarnedAboutCert:(id)arg1;
- (BOOL)resetCertWarnings;
- (BOOL)isActiveSyncAccount;
- (id)localizedCertificateErrorStringForHost:(id)arg1;
- (BOOL)_userResponseForServerTrustFromHost:(id)arg1 digest:(id)arg2;
- (BOOL)shouldAllowTrust:(struct __SecTrust { }*)arg1 forHost:(id)arg2;
- (id)defaultEventsFolder;
- (id)eventsFolders;
- (void)synchronizeEventsFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(struct { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; }*)arg4 isInitialUberSync:(BOOL)arg5 isResyncAfterConnectionFailed:(BOOL)arg6 consumer:(id)arg7;
- (BOOL)sendEmailsForCalEvents:(id)arg1 consumer:(id)arg2;
- (id)defaultContactsFolder;
- (id)contactsFolders;
- (void)synchronizeContactsFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(struct { NSInteger x1; }*)arg4 isInitialUberSync:(BOOL)arg5 isResyncAfterConnectionFailed:(BOOL)arg6 consumer:(id)arg7;
- (BOOL)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
- (id)inboxFolder;
- (id)sentItemsFolder;
- (id)deletedItemsFolder;
- (void)performSearchQuery:(id)arg1 consumer:(id)arg2;
- (void)cancelSearchQuery:(id)arg1;
- (void)cancelAllSearchQueries;
- (BOOL)searchQueriesRunning;
- (NSInteger)supportsMailboxSearch;
- (BOOL)isLDAPAccount;
- (BOOL)isCalDAVAccount;

@end