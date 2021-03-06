/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate, NSNumber, NSString;

@interface EKCalendarResourceChangeNotification : EKCalendarNotification {
    NSString *_calendarName;
    unsigned int _changeType;
    NSNumber *_createCount;
    NSNumber *_deleteCount;
    NSDate *_endDate;
    NSString *_eventID;
    NSString *_location;
    NSDate *_startDate;
    NSDate *_startDateForNextOccurrence;
    NSNumber *_updateCount;
    bool_allDay;
    bool_dateChanged;
    bool_locationChanged;
    bool_timeChanged;
    bool_titleChanged;
}

@property bool allDay;
@property(retain) NSString * calendarName;
@property unsigned int changeType;
@property(retain) NSNumber * createCount;
@property bool dateChanged;
@property(retain) NSNumber * deleteCount;
@property(retain) NSDate * endDate;
@property(retain) NSString * eventID;
@property(retain) NSString * location;
@property bool locationChanged;
@property(retain) NSDate * startDate;
@property(retain) NSDate * startDateForNextOccurrence;
@property bool timeChanged;
@property bool titleChanged;
@property(retain) NSNumber * updateCount;

- (bool)allDay;
- (id)calendarName;
- (unsigned int)changeType;
- (id)createCount;
- (bool)dateChanged;
- (void)dealloc;
- (id)deleteCount;
- (id)endDate;
- (id)eventID;
- (id)initWithType:(long long)arg1;
- (id)location;
- (bool)locationChanged;
- (bool)needsAlert;
- (id)resourceChangeFromEventStore:(id)arg1;
- (void)setAllDay:(bool)arg1;
- (void)setCalendarName:(id)arg1;
- (void)setChangeType:(unsigned int)arg1;
- (void)setCreateCount:(id)arg1;
- (void)setDateChanged:(bool)arg1;
- (void)setDeleteCount:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setEventID:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationChanged:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStartDateForNextOccurrence:(id)arg1;
- (void)setTimeChanged:(bool)arg1;
- (void)setTitleChanged:(bool)arg1;
- (void)setUpdateCount:(id)arg1;
- (id)startDate;
- (id)startDateForNextOccurrence;
- (bool)timeChanged;
- (bool)titleChanged;
- (id)updateCount;

@end
