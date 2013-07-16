//
//  DetailViewController.h
//  RssReaderWeb5
//
//  Created by ほむほむ on 2013/07/16.
//  Copyright (c) 2013年 ほむほむ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
