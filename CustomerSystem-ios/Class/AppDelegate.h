//
//  AppDelegate.h
//  CustomerSystem-ios
//
//  Created by dhc on 15/2/13.
//  Copyright (c) 2015年 easemob. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "HomeViewController.h"
#import "HChatClientDelegate.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate, HChatClientDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) HomeViewController *homeController;

@property(nonatomic,assign) BOOL allowRotation;

@end

