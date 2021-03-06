/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPDPlace, GEOPlace, GEORPMapLocation, NSMutableArray, NSString;

@interface GEORPProblemContext : PBCodable <NSCopying> {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    struct { 
        unsigned int sessionId : 1; 
        unsigned int pinType : 1; 
    NSMutableArray *_directionsRequests;
    NSMutableArray *_directionsResponses;
    } _has;
    GEORPMapLocation *_mapLocation;
    GEOPlace *_originalPlace;
    int _pinType;
    GEOPDPlace *_place;
    } _sessionId;
    NSString *_tileStateLog;
    NSMutableArray *_visibleTileSets;
}

@property(retain) NSMutableArray * directionsRequests;
@property(retain) NSMutableArray * directionsResponses;
@property(readonly) bool hasMapLocation;
@property(readonly) bool hasOriginalPlace;
@property bool hasPinType;
@property(readonly) bool hasPlace;
@property bool hasSessionId;
@property(readonly) bool hasTileStateLog;
@property(retain) GEORPMapLocation * mapLocation;
@property(retain) GEOPlace * originalPlace;
@property int pinType;
@property(retain) GEOPDPlace * place;
@property struct { unsigned long long x1; unsigned long long x2; } sessionId;
@property(retain) NSString * tileStateLog;
@property(retain) NSMutableArray * visibleTileSets;

- (void)addDirectionsRequest:(id)arg1;
- (void)addDirectionsResponse:(id)arg1;
- (void)addVisibleTileSet:(id)arg1;
- (void)clearDirectionsRequests;
- (void)clearDirectionsResponses;
- (void)clearVisibleTileSets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsRequestAtIndex:(unsigned long long)arg1;
- (id)directionsRequests;
- (unsigned long long)directionsRequestsCount;
- (id)directionsResponseAtIndex:(unsigned long long)arg1;
- (id)directionsResponses;
- (unsigned long long)directionsResponsesCount;
- (bool)hasMapLocation;
- (bool)hasOriginalPlace;
- (bool)hasPinType;
- (bool)hasPlace;
- (bool)hasSessionId;
- (bool)hasTileStateLog;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mapLocation;
- (void)mergeFrom:(id)arg1;
- (id)originalPlace;
- (int)pinType;
- (id)place;
- (bool)readFrom:(id)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })sessionId;
- (void)setDirectionsRequests:(id)arg1;
- (void)setDirectionsResponses:(id)arg1;
- (void)setHasPinType:(bool)arg1;
- (void)setHasSessionId:(bool)arg1;
- (void)setMapLocation:(id)arg1;
- (void)setOriginalPlace:(id)arg1;
- (void)setPinType:(int)arg1;
- (void)setPlace:(id)arg1;
- (void)setSessionId:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTileStateLog:(id)arg1;
- (void)setVisibleTileSets:(id)arg1;
- (id)tileStateLog;
- (id)visibleTileSetAtIndex:(unsigned long long)arg1;
- (id)visibleTileSets;
- (unsigned long long)visibleTileSetsCount;
- (void)writeTo:(id)arg1;

@end
