//
//  AppDelegate.h
//  server
//
//  Created by Abdulaziz Aloumi on 09/07/2018.
//  Copyright © 2018 XMARC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

