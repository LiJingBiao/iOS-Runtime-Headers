/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableDictionary, NSString, _NSProgressFraction;

@interface NSProgressValues : NSObject <NSSecureCoding> {
    _NSProgressFraction *_childFraction;
    NSString *_kind;
    NSString *_localizedAdditionalDescription;
    NSString *_localizedDescription;
    _NSProgressFraction *_selfFraction;
    NSMutableDictionary *_userInfo;
    bool_isCancellable;
    bool_isCancelled;
    bool_isPausable;
    bool_isPaused;
    bool_isPrioritizable;
}

+ (id)_derivedKeys;
+ (id)decodableClasses;
+ (bool)supportsSecureCoding;

- (id)_indentedDescription:(unsigned long long)arg1;
- (long long)completedUnitCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)fractionCompleted;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isFinished;
- (bool)isIndeterminate;
- (id)overallFraction;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)setFinished:(bool)arg1;
- (void)setFractionCompleted:(double)arg1;
- (void)setIndeterminate:(bool)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (long long)totalUnitCount;

@end
