/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerNotificationTypeItem : CoreDAVItem {
    CoreDAVItemWithNoChildren *_inviteNotification;
    CoreDAVItemWithNoChildren *_inviteReply;
    CoreDAVItemWithNoChildren *_resourceChanged;
}

@property(retain) CoreDAVItemWithNoChildren * inviteNotification;
@property(retain) CoreDAVItemWithNoChildren * inviteReply;
@property(readonly) bool isInviteNotification;
@property(readonly) bool isInviteReply;
@property(readonly) bool isResourceChanged;
@property(retain) CoreDAVItemWithNoChildren * resourceChanged;

- (id)copyParseRules;
- (void)dealloc;
- (id)description;
- (id)inviteNotification;
- (id)inviteReply;
- (bool)isInviteNotification;
- (bool)isInviteReply;
- (bool)isResourceChanged;
- (bool)notificationNameIn:(id)arg1;
- (bool)notificationNameMatches:(id)arg1;
- (id)resourceChanged;
- (void)setInviteNotification:(id)arg1;
- (void)setInviteReply:(id)arg1;
- (void)setResourceChanged:(id)arg1;

@end
