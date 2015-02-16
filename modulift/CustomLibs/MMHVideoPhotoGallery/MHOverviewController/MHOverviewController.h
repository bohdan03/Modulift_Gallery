//
//  MHGalleryOverViewController.h
//  MHVideoPhotoGallery
//

#import <UIKit/UIKit.h>
#import "MHGallery.h"
#import "MHGalleryImageViewerViewController.h"
#import "SDWebImageManager.h"
#import "MHTransitionShowDetail.h"
#import "MHMediaPreviewCollectionViewCell.h"


@interface MHIndexPinchGestureRecognizer : UIPinchGestureRecognizer
@property (strong, nonatomic) NSIndexPath *indexPath;
@end

@interface MHOverviewController : UIViewController<UICollectionViewDataSource,UICollectionViewDelegate,UINavigationControllerDelegate,UIGestureRecognizerDelegate>

@property (strong, nonatomic) UICollectionView      *collectionView;
@property (strong,nonatomic ) MHMediaPreviewCollectionViewCell *clickedCell;
@property (nonatomic)         NSInteger             currentPage;
@property (nonatomic, strong) NSArray               *galleryItems;

-(UICollectionViewFlowLayout*)layoutForOrientation:(UIInterfaceOrientation)orientation;
-(MHGalleryItem*)itemForIndex:(NSInteger)index;
-(void)pushToImageViewerForIndexPath:(NSIndexPath*)indexPath;
@end
