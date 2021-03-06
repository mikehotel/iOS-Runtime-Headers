/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class ABPeoplePickerNavigationController, UIImage, UIImagePickerController;

@interface UIAssignToContactActivity : UIActivity <ABPeoplePickerNavigationControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
    UIImage *_image;
    UIImagePickerController *_imagePickerController;
    ABPeoplePickerNavigationController *_peoplePicker;
    void *_person;
}

@property(retain) UIImage * image;
@property(retain) UIImagePickerController * imagePickerController;
@property(retain) ABPeoplePickerNavigationController * peoplePicker;
@property void* person;

- (id)_activityImage;
- (void)_cleanup;
- (id)_embeddedActivityViewController;
- (void)_willPresentAsFormSheet;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (id)image;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)imagePickerController;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)peoplePicker;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void*)person;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImagePickerController:(id)arg1;
- (void)setPeoplePicker:(id)arg1;
- (void)setPerson:(void*)arg1;

@end
