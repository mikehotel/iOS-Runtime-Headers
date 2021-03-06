/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextPosition, _UITextKitTextPosition;

@interface _UITextKitTextRange : UITextRange <NSCopying> {
    _UITextKitTextPosition *_end;
    _UITextKitTextPosition *_start;
}

@property(retain) UITextPosition * end;
@property(retain) UITextPosition * start;

+ (id)defaultRange;
+ (id)rangeWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
+ (id)rangeWithStart:(id)arg1 end:(id)arg2;

- (struct _NSRange { unsigned int x1; unsigned int x2; })asRange;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)end;
- (id)init;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (void)setEnd:(id)arg1;
- (void)setStart:(id)arg1;
- (id)start;

@end
