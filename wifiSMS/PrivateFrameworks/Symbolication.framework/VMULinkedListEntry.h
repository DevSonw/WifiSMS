/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class VMULinkedListEntry, VMUSymbolOwner;



@interface VMULinkedListEntry : NSObject 
{
    VMULinkedListEntry *_prev;
    VMULinkedListEntry *_next;
    NSUInteger _size;
    VMUSymbolOwner *_symbolOwner;
}

+ (id)linkedListEntryWithSymbolOwner:(id)arg1;

- (id)initWithSymbolOwner:(id)arg1;
- (NSUInteger)size;
- (id)symbolOwner;
- (id)prev;
- (id)next;
- (void)setPrev:(id)arg1;
- (void)setNext:(id)arg1;
- (id)description;
- (void)dealloc;

@end
