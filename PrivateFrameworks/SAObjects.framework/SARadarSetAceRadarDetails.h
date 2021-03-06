/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SARadarSetAceRadarDetails : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSArray * attachments;
@property(copy) NSString * clientConfiguration;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSString * radarTitle;
@property(copy) NSString * refId;
@property(readonly) Class superclass;

+ (id)setAceRadarDetails;
+ (id)setAceRadarDetailsWithDictionary:(id)arg1 context:(id)arg2;

- (id)attachments;
- (id)clientConfiguration;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)radarTitle;
- (void)setAttachments:(id)arg1;
- (void)setClientConfiguration:(id)arg1;
- (void)setRadarTitle:(id)arg1;

@end
