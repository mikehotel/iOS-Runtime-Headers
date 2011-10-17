/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, NSArray;

@interface SUScriptMediaPickerController : SUScriptViewController  {
}

@property BOOL allowsPickingMultipleItems;
@property(readonly) NSArray * mediaTypes;
@property(retain) NSString * prompt;

+ (id)webScriptNameForKey:(const char *)arg1;
+ (void)initialize;

- (id)attributeKeys;
- (id)mediaTypes;
- (void)setMediaTypes:(id)arg1;
- (void)setPrompt:(id)arg1;
- (id)prompt;
- (void)setAllowsPickingMultipleItems:(BOOL)arg1;
- (BOOL)allowsPickingMultipleItems;
- (void)_setAllowsPickingMultipleItems:(BOOL)arg1;
- (BOOL)_allowsPickingMultipleItems;
- (void)_setMediaTypes:(id)arg1;
- (id)_copyMediaTypes;
- (id)initWithMediaTypes:(id)arg1;
- (void)_setPrompt:(id)arg1;
- (id)_copyPrompt;
- (id)newNativeViewController;
- (void)setNativeViewController:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;

@end