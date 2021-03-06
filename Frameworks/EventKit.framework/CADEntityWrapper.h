/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKObjectID, NSArray, NSMutableDictionary;

@interface CADEntityWrapper : NSObject <NSSecureCoding> {
    int _entityType;
    NSArray *_loadedKeys;
    NSMutableDictionary *_loadedProperties;
    NSArray *_loadedValues;
    EKObjectID *_objectID;
    int _rowID;
}

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCalEntity:(void*)arg1 propertiesToLoad:(id)arg2;
- (id)initWithCalEntity:(void*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)loadedProperties;
- (id)objectID;

@end
