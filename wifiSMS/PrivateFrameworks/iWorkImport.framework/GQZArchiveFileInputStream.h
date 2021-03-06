/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */



@interface GQZArchiveFileInputStream : NSObject <GQZArchiveInputStream>
{
    struct __sFILE { char *x1; NSInteger x2; NSInteger x3; short x4; short x5; struct __sbuf { 
            char *_base; 
            NSInteger _size; 
        } x6; NSInteger x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { 
            char *_base; 
            NSInteger _size; 
        } x13; struct __sFILEX {} *x14; NSInteger x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { 
            char *_base; 
            NSInteger _size; 
        } x18; NSInteger x19; long long x20; } *mFile;
    char *mBuffer;
    long long mBufferStart;
    long long mBufferEnd;
    long long mSize;
}


- (id)initWithPath:(id)arg1;
- (void)dealloc;
- (const char *)dataAtOffset:(long long)arg1 size:(unsigned long)arg2 end:(long long)arg3 readSize:(NSUInteger*)arg4;
- (void)readFromOffset:(long long)arg1 size:(unsigned long)arg2 buffer:(char *)arg3;
- (long long)size;

@end
