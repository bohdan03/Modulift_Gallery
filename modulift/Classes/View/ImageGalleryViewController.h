//
//  ImageGalleryViewController.h
//  modulift
//
//  Created by OK MAC on 2/15/15.
//  Copyright (c) 2015 DoubleDigital. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MHGallery.h"
@interface UINavigationController (autoRotate)
@property(nonatomic,strong) NSMutableArray *galleryDataSource;
@end

@interface UITabBarController(autoRotate)
@end

@interface TestCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UICollectionView *collectionView;
@property (strong, nonatomic) IBOutlet UIView *backView;
@end

@interface ImageGalleryViewController : UIViewController<UITableViewDataSource,UITableViewDelegate,UICollectionViewDataSource,UICollectionViewDelegate,UIViewControllerTransitioningDelegate,MHGalleryDataSource,MHGalleryDelegate>

@end
