/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TSUDurationFormatter : NSFormatter {
    int mCompactStyleStartUnit;
    NSString *mFormat;
}

@property int compactStyleStartUnit;
@property(copy) NSString * format;

- (int)compactStyleStartUnit;
- (void)dealloc;
- (id)format;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)p_commonInit;
- (void)setCompactStyleStartUnit:(int)arg1;
- (void)setFormat:(id)arg1;
- (id)stringForObjectValue:(id)arg1;

@end
