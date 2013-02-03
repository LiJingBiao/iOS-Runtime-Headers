/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, NSString, GKTurnBasedParticipant, GKTurnBasedMatchInternal, NSDate, NSData;

@interface GKTurnBasedMatch : NSObject <GKSessionDelegate> {
    GKTurnBasedMatchInternal *_internal;
    NSArray *_participants;
    NSArray *_turnSequence;
    int _turnSequenceIndex;
}

@property(readonly) NSDate * creationDate;
@property(retain) GKTurnBasedParticipant * currentParticipant;
@property(readonly) NSDate * dateSortKey;
@property(readonly) GKTurnBasedParticipant * firstWinnerOrTiedOrLastLoser;
@property(retain) GKTurnBasedMatchInternal * internal;
@property(retain) NSDate * lastTurnDate;
@property(readonly) GKTurnBasedParticipant * localPlayerParticipant;
@property(readonly) NSData * matchData;
@property unsigned int matchDataMaximumSize;
@property(readonly) NSString * matchID;
@property(copy) NSString * message;
@property(retain) NSArray * participants;
@property(readonly) GKTurnBasedParticipant * playingWithParticipantOrFirstKnownPlayer;
@property(readonly) GKTurnBasedParticipant * previousParticipant;
@property(readonly) GKTurnBasedParticipant * previousParticipantOrFirstKnownPlayer;
@property(readonly) int status;
@property(readonly) int turnNumber;
@property(retain) NSArray * turnSequence;
@property int turnSequenceIndex;

+ (void)findMatchForRequest:(id)arg1 withCompletionHandler:(id)arg2;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (void)loadMatchWithID:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadMatchesWithCompletionHandler:(id)arg1;
+ (void)loadTurnBasedMatchDetailsForMatchIDs:(id)arg1 loadGameData:(BOOL)arg2 withCompletionHandler:(id)arg3;
+ (void)loadTurnBasedMatchSummaries:(id)arg1;
+ (void)loadTurnBasedMatchWithDetailsForMatchID:(id)arg1 withCompletionHandler:(id)arg2;
+ (id)matchesWithInternalRepresentations:(id)arg1;

- (void)acceptInviteWithCompletionHandler:(id)arg1;
- (id)currentParticipant;
- (id)dateSortKey;
- (void)dealloc;
- (void)declineInviteWithCompletionHandler:(id)arg1;
- (id)description;
- (void)endMatchInTurnWithMatchData:(id)arg1 completionHandler:(id)arg2;
- (void)endTurnWithNextParticipant:(id)arg1 matchData:(id)arg2 completionHandler:(id)arg3;
- (void)endTurnWithNextParticipants:(id)arg1 turnTimeout:(double)arg2 matchData:(id)arg3 completionHandler:(id)arg4;
- (id)firstWinnerOrTiedOrLastLoser;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned int)hash;
- (id)indexesForParticipants:(id)arg1;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (BOOL)isEqual:(id)arg1;
- (void)loadMatchDataWithCompletionHandler:(id)arg1;
- (id)localPlayerParticipant;
- (unsigned int)matchDataMaximumSize;
- (void)parseTurnSequence:(id)arg1;
- (void)participantQuitInTurnWithOutcome:(int)arg1 nextParticipant:(id)arg2 matchData:(id)arg3 completionHandler:(id)arg4;
- (void)participantQuitInTurnWithOutcome:(int)arg1 nextParticipants:(id)arg2 turnTimeout:(double)arg3 matchData:(id)arg4 completionHandler:(id)arg5;
- (void)participantQuitOutOfTurnWithOutcome:(int)arg1 withCompletionHandler:(id)arg2;
- (id)participants;
- (id)playingWithParticipantOrFirstKnownPlayer;
- (id)previousParticipant;
- (id)previousParticipantOrFirstKnownPlayer;
- (void)rematchWithCompletionHandler:(id)arg1;
- (void)removeWithCompletionHandler:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)saveCurrentTurnWithMatchData:(id)arg1 completionHandler:(id)arg2;
- (void)setCurrentParticipant:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)setTurnSequence:(id)arg1;
- (void)setTurnSequenceIndex:(int)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (int)status;
- (id)turnSequence;
- (int)turnSequenceIndex;
- (id)valueForUndefinedKey:(id)arg1;

@end