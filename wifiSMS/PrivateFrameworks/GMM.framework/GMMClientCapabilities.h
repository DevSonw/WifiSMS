/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray;



@interface GMMClientCapabilities : PBCodable 
{
    NSInteger _maxImageWidth;
    BOOL _hasMaxImageWidth;
    NSInteger _maxImageHeight;
    BOOL _hasMaxImageHeight;
    NSInteger _availableImageMemory;
    BOOL _hasAvailableImageMemory;
    NSMutableArray *_preferredImageFormats;
}

@property(readonly) NSInteger preferredImageFormatsCount;
@property(retain) NSMutableArray *preferredImageFormats; /* unknown property attribute: V_preferredImageFormats */
@property(readonly) BOOL hasAvailableImageMemory; /* unknown property attribute: V_hasAvailableImageMemory */
@property NSInteger availableImageMemory; /* unknown property attribute: V_availableImageMemory */
@property(readonly) BOOL hasMaxImageHeight; /* unknown property attribute: V_hasMaxImageHeight */
@property NSInteger maxImageHeight; /* unknown property attribute: V_maxImageHeight */
@property(readonly) BOOL hasMaxImageWidth; /* unknown property attribute: V_hasMaxImageWidth */
@property NSInteger maxImageWidth; /* unknown property attribute: V_maxImageWidth */

+ (id)standardCapabilities;

- (id)init;
- (void)dealloc;
- (void)setMaxImageWidth:(NSInteger)arg1;
- (void)setMaxImageHeight:(NSInteger)arg1;
- (void)setAvailableImageMemory:(NSInteger)arg1;
- (NSInteger)preferredImageFormatsCount;
- (void)setPreferredImageFormat:(NSInteger)arg1 atIndex:(NSUInteger)arg2;
- (NSInteger)preferredImageFormatAtIndex:(NSUInteger)arg1;
- (void)addPreferredImageFormat:(NSInteger)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)preferredImageFormats;
- (void)setPreferredImageFormats:(id)arg1;
- (BOOL)hasAvailableImageMemory;
- (NSInteger)availableImageMemory;
- (BOOL)hasMaxImageHeight;
- (NSInteger)maxImageHeight;
- (BOOL)hasMaxImageWidth;
- (NSInteger)maxImageWidth;

@end
