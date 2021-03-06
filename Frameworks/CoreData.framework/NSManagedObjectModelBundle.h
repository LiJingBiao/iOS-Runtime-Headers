/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSBundle, NSDictionary;

@interface NSManagedObjectModelBundle : NSObject {
    NSBundle *_bundle;
    NSDictionary *_versionInfoDictionary;
}

- (id)_modelForVersionHashes:(id)arg1 inStyle:(unsigned long long)arg2;
- (id)_modelForVersionHashes:(id)arg1;
- (id)bundle;
- (id)currentVersion;
- (id)currentVersionURL;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)modelVersions;
- (id)optimizedVersionURL;
- (id)urlForModelVersionWithName:(id)arg1;
- (id)versionHashInfo;
- (id)versionInfoDictionary;

@end
