/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableDictionary, NSDate, NSNumber, ASEvent;



@interface ASEventException : ASEvent <ASParsingAcceptingTopLevelLeaves, NSCoding>
{
    NSNumber *_isDeleted;
    NSDate *_exceptionStartTime;
    NSMutableDictionary *_placeHolder;
    ASEvent *_originalEvent;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;

- (void)applyPlaceHolder;
- (void)clearPlaceHolder;
- (void)setObject:(id)arg1 forCCPT:(NSInteger)arg2;
- (id)asParseRules;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (id)_transformedExceptionStartDateForCalFramework:(id)arg1;
- (id)_transformedExceptionStartDateForActiveSync:(id)arg1;
- (id)serverIdForCalFrameworkWithParentEvent:(id)arg1;
- (void)saveToCalendarWithParentASEvent:(id)arg1 existingRecord:(void*)arg2 intoCalendar:(void*)arg3 treatNullsAsDeletes:(BOOL)arg4 account:(id)arg5;
- (void)postProcessApplicationData;
- (id)uidGeneratedIfNecessaryWithLocalEvent:(void*)arg1;
- (void)takeValuesFromParentForAccount:(id)arg1;
- (id)initWithCalEvent:(void*)arg1 originalEvent:(id)arg2 account:(id)arg3;
- (id)initWithExceptionStartTime:(id)arg1;
- (BOOL)deleteFromCalendar;
- (void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (void)loadClientIDs;
- (id)description;
- (void)dealloc;
- (id)exceptionDate;
- (void)setExceptionDate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasOccurrenceInTheFuture;
- (id)originalEvent;
- (void)setOriginalEvent:(id)arg1;
- (id)isDeleted;
- (void)setIsDeleted:(id)arg1;
- (id)exceptionStartTime;
- (void)setExceptionStartTime:(id)arg1;

@end
