//
//  DetailViewController.h
//  EveryDoAgain
//
//  Created by Livleen Rai on 2017-08-16.
//  Copyright © 2017 Livleen Rai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EveryDoAgain+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) ToDo *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

