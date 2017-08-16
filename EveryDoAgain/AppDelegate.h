//
//  AppDelegate.h
//  EveryDoAgain
//
//  Created by Livleen Rai on 2017-08-16.
//  Copyright © 2017 Livleen Rai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

