/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;

@interface _UIActivityApplicationExtensionDiscovery : NSObject {
    id _extensionMatchingContext;
    NSArray *_extensionPointIdentifiers;
    bool_performsInitialMatching;
}

@property(retain) id extensionMatchingContext;
@property(copy) NSArray * extensionPointIdentifiers;
@property bool performsInitialMatching;

- (id)activitiesMatchingInputItems:(id)arg1 sourceIsManaged:(bool)arg2 error:(id*)arg3 updateBlock:(id)arg4;
- (void)cancelUpdatesIfNeeded;
- (void)dealloc;
- (id)extensionMatchingContext;
- (id)extensionPointIdentifiers;
- (id)init;
- (id)initWithExtensionPointIdentifiers:(id)arg1;
- (bool)performsInitialMatching;
- (void)setExtensionMatchingContext:(id)arg1;
- (void)setExtensionPointIdentifiers:(id)arg1;
- (void)setPerformsInitialMatching:(bool)arg1;

@end
