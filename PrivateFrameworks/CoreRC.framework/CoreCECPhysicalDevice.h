/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@class CoreCECPhysicalDevice, NSArray, NSMutableArray, NSMutableSet, NSSet;

@interface CoreCECPhysicalDevice : NSObject {
    NSMutableArray *_children;
    NSMutableSet *_logicalDevices;
    CoreCECPhysicalDevice *_parent;
    unsigned long long _physicalAddress;
}

@property(readonly) NSArray * children;
@property(readonly) NSSet * logicalDevices;
@property CoreCECPhysicalDevice * parent;
@property(readonly) unsigned long long physicalAddress;
@property(readonly) id propertyList;

+ (id)physicalDeviceTreeWithLogicalDevices:(id)arg1;

- (void)addChild:(id)arg1;
- (void)addLogicalDevice:(id)arg1;
- (id)children;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithLogicalDevice:(id)arg1;
- (id)initWithPhysicalAddress:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)logicalDevices;
- (id)parent;
- (unsigned long long)physicalAddress;
- (id)propertyList;
- (void)setParent:(id)arg1;

@end
