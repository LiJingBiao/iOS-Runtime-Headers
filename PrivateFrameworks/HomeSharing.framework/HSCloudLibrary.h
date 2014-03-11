/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class HSConnection, NSString;

@interface HSCloudLibrary : NSObject {
    HSConnection *_connection;
    NSString *_name;
    NSString *_uniqueIdentifier;
}

@property(readonly) HSConnection * connection;
@property(readonly) NSString * name;
@property(readonly) NSString * uniqueIdentifier;

- (id)connection;
- (void)dealloc;
- (id)initWithConnectionConfiguration:(id)arg1;
- (id)name;
- (id)uniqueIdentifier;

@end