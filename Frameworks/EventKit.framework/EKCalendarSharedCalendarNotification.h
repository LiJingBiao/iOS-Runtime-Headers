/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarSharedCalendarNotification : EKCalendarNotification {
    unsigned long long _allowedEntityTypes;
    int _sharingInvitationResponse;
}

@property unsigned long long allowedEntityTypes;
@property int sharingInvitationResponse;

- (unsigned long long)allowedEntityTypes;
- (id)calendarFromEventStore:(id)arg1;
- (id)initWithType:(long long)arg1;
- (void)setAllowedEntityTypes:(unsigned long long)arg1;
- (void)setSharingInvitationResponse:(int)arg1;
- (int)sharingInvitationResponse;

@end
