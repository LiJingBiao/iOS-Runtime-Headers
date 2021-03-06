/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SUClientInterface;

@interface SUSearchFieldConfiguration : NSObject <NSCopying> {
    NSString *_cancelString;
    SUClientInterface *_clientInterface;
    struct __CFDictionary { } *_hintURLs;
    long long _location;
    NSString *_placeholder;
    struct __CFDictionary { } *_searchURLs;
    NSString *_userDefaultsKey;
    double _width;
    double _widthLandscape;
    double _widthPortrait;
    bool_rootViewOnly;
}

@property(readonly) NSString * cancelString;
@property(readonly) long long location;
@property(readonly) NSString * placeholderString;
@property(getter=isRootViewOnly,readonly) bool rootViewOnly;
@property(readonly) NSString * userDefaultsKey;
@property(readonly) double width;

+ (id)defaultConfiguration;
+ (id)defaultConfigurationWithClientInterface:(id)arg1;

- (id)URLRequestPropertiesWithBaseURL:(id)arg1 forNetworkType:(long long)arg2;
- (id)_initWithClientInterface:(id)arg1;
- (long long)_locationForString:(id)arg1;
- (id)_newQueryStringDictionaryForNetworkType:(long long)arg1;
- (struct __CFDictionary { }*)_newURLsDictionaryWithDictionary:(id)arg1;
- (void)_setHintURLsFromDictionary:(id)arg1;
- (void)_setSearchURLsFromDictionary:(id)arg1;
- (id)_urlRequestPropertiesForURLBagKey:(id)arg1 networkType:(long long)arg2;
- (id)cancelString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)hintsURLRequestPropertiesForNetworkType:(long long)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1 clientInterface:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (bool)isRootViewOnly;
- (void)loadFromDictionary:(id)arg1;
- (long long)location;
- (id)placeholderString;
- (id)searchURLRequestPropertiesForNetworkType:(long long)arg1;
- (id)userDefaultsKey;
- (double)width;
- (double)widthForOrientation:(long long)arg1;

@end
