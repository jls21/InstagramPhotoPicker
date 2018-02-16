//
//  TWPhotoPickerController.h
//  InstagramPhotoPicker
//
//  Created by Emar on 12/4/14.
//  Copyright (c) 2014 wenzhaot. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TWPhotoPickerController : UIViewController


/**
 If equals to nil, for crop will be choosen first photo in camera roll.
 */
@property (strong, nonatomic)  UIImage * _Nullable imageToCrop;

@property (nonatomic, copy) void(^ _Nullable cropBlock)(UIImage * _Nullable image);

- (void)animate;
    
@end
