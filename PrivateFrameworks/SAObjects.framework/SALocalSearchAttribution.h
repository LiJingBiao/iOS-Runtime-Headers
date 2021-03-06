/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SALocalSearchAttribution : AceObject <SAAceSerializable> {
}

@property(copy) NSString * attributionId;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy) NSArray * urls;
@property long long version;

+ (id)attribution;
+ (id)attributionWithDictionary:(id)arg1 context:(id)arg2;

- (id)attributionId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAttributionId:(id)arg1;
- (void)setUrls:(id)arg1;
- (void)setVersion:(long long)arg1;
- (id)urls;
- (long long)version;

@end
