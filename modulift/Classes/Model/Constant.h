
#pragma UserDefualtKey

#define  PAPApplicationID     @"7mcC5157umkXldb5KmjxJBNutu2tZB8dXm63Xog0";
#define  PAPClientKey         @"2WM56u3IFlNx9HC81epm7vSdraccv0wpn6CjuICa";




#pragma mark - NSNotification

//#define PAPAppDelegateApplicationDidReceiveRemoteNotification           = @"com.parse.Anypic.appDelegate.applicationDidReceiveRemoteNotification";
//#define PAPUtilityUserFollowingChangedNotification                      = @"com.parse.Anypic.utility.userFollowingChanged";
//#define PAPUtilityUserLikedUnlikedPhotoCallbackFinishedNotification     = @"com.parse.Anypic.utility.userLikedUnlikedPhotoCallbackFinished";
//#define PAPUtilityDidFinishProcessingProfilePictureNotification         = @"com.parse.Anypic.utility.didFinishProcessingProfilePictureNotification";
//#define PAPTabBarControllerDidFinishEditingPhotoNotification            = @"com.parse.Anypic.tabBarController.didFinishEditingPhoto";
//#define PAPTabBarControllerDidFinishImageFileUploadNotification         = @"com.parse.Anypic.tabBarController.didFinishImageFileUploadNotification";
//#define PAPPhotoDetailsViewControllerUserDeletedPhotoNotification       = @"com.parse.Anypic.photoDetailsViewController.userDeletedPhoto";
//#define PAPPhotoDetailsViewControllerUserLikedUnlikedPhotoNotification  = @"com.parse.Anypic.photoDetailsViewController.userLikedUnlikedPhotoInDetailsViewNotification";
//#define PAPPhotoDetailsViewControllerUserCommentedOnPhotoNotification   = @"com.parse.Anypic.photoDetailsViewController.userCommentedOnPhotoInDetailsViewNotification";



#pragma mark - Installation Class

// Field keys
#define kPAPInstallationUserKey  @"user";

#pragma mark - Image Class
// Class key
#define kPAPIamgeClassKey  @"ImageTable";

// Field keys
#define kPAPImageTableIDKey      @"ID";
#define kPAPImageTableFileKey    @"imageFile";


#pragma mark - Video Class
// Class key
#define kPAPIamgeClassKey  @"VideoTable";

// Field keys
#define kPAPImageTableIDKey      @"ID";
#define kPAPImageTableFileKey    @"imageFile";


#pragma mark - User Class
// Field keys
#define kPAPUserDisplayNameKey                           @"username";
#define kPAPUserPasswordKey                              @"password";
#define kPAPUserIDKey                                    @"userId";
#define kPAPUserEmailKey                                 @"email";


#pragma mark - OurNet Class
// Class key
#define kPAPPhotoClassKey  @"NetWorkTable";

// Field keys
#define kPAPCompanyKey      @"company";
#define kPAPCountryKey      @"country";
#define kPAPStationKey      @"station";
#define kPAPCityKey         @"city";
#define kPAPAddressKey      @"address";
#define kPAPPhoneKey        @"phonenumber";

#define IMAGEGALLERY    0;
#define VIDEOGALLERY    1;

extern int ImageVideoGallery;

