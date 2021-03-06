/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPlaceSearchRequest, GEOPlaceSearchResponse, NSString;

@interface GEORPCorrectedSearch : PBCodable <NSCopying> {
    struct { 
        unsigned int correctedSearchResultIndex : 1; 
        unsigned int originalSearchResultIndex : 1; 
    unsigned int _correctedSearchResultIndex;
    } _has;
    unsigned int _originalSearchResultIndex;
    GEOPlaceSearchRequest *_placeSearchRequest;
    GEOPlaceSearchResponse *_placeSearchResponse;
    NSString *_preferredSearchDisplayLocation;
}

@property unsigned int correctedSearchResultIndex;
@property BOOL hasCorrectedSearchResultIndex;
@property BOOL hasOriginalSearchResultIndex;
@property(readonly) BOOL hasPlaceSearchRequest;
@property(readonly) BOOL hasPlaceSearchResponse;
@property(readonly) BOOL hasPreferredSearchDisplayLocation;
@property unsigned int originalSearchResultIndex;
@property(retain) GEOPlaceSearchRequest * placeSearchRequest;
@property(retain) GEOPlaceSearchResponse * placeSearchResponse;
@property(retain) NSString * preferredSearchDisplayLocation;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)correctedSearchResultIndex;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCorrectedSearchResultIndex;
- (BOOL)hasOriginalSearchResultIndex;
- (BOOL)hasPlaceSearchRequest;
- (BOOL)hasPlaceSearchResponse;
- (BOOL)hasPreferredSearchDisplayLocation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)originalSearchResultIndex;
- (id)placeSearchRequest;
- (id)placeSearchResponse;
- (id)preferredSearchDisplayLocation;
- (BOOL)readFrom:(id)arg1;
- (void)setCorrectedSearchResultIndex:(unsigned int)arg1;
- (void)setHasCorrectedSearchResultIndex:(BOOL)arg1;
- (void)setHasOriginalSearchResultIndex:(BOOL)arg1;
- (void)setOriginalSearchResultIndex:(unsigned int)arg1;
- (void)setPlaceSearchRequest:(id)arg1;
- (void)setPlaceSearchResponse:(id)arg1;
- (void)setPreferredSearchDisplayLocation:(id)arg1;
- (void)writeTo:(id)arg1;

@end
