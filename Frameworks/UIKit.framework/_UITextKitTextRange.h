/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextPosition, _UITextKitTextPosition;

@interface _UITextKitTextRange : UITextRange <NSCopying> {
    _UITextKitTextPosition *_end;
    _UITextKitTextPosition *_start;
}

@property(readonly) long long affinity;
@property(retain) UITextPosition * end;
@property(retain) UITextPosition * start;

+ (id)defaultRange;
+ (id)rangeWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 affinity:(long long)arg2;
+ (id)rangeWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)rangeWithStart:(id)arg1 end:(id)arg2;

- (long long)affinity;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })asRange;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)end;
- (id)init;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (void)setEnd:(id)arg1;
- (void)setStart:(id)arg1;
- (id)start;

@end
