//
//  DetailViewController.h
//  aa
//
//  Created by 罗邦杰 on 16/3/19.
//  Copyright © 2016年 罗邦杰. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

