/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class UIColor;

@interface PUPhotoDecoration : NSObject <NSCopying> {
    UIColor *_borderColor;
    float _borderWidth;
    UIColor *_foregroundColor;
}

@property(copy) UIColor * borderColor;
@property float borderWidth;
@property(copy) UIColor * foregroundColor;

- (void).cxx_destruct;
- (BOOL)_displaysBorderForWidth:(float)arg1 color:(id)arg2;
- (id)borderColor;
- (float)borderWidth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)foregroundColor;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)overlayImage;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })overlayInsets;
- (id)photoDecorationVariantsWithIncreasingAlpha:(int)arg1;
- (id)photoDecorationVariantsWithIncreasingBorderBrightness:(int)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(float)arg1;
- (void)setForegroundColor:(id)arg1;

@end
