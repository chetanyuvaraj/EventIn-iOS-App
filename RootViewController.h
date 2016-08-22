//
//  RootViewController.h
//  NPNN
//
//  Created by Mayank Jain on 7/14/13.
//  Copyright (c) 2013 Mayank Jain. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LoginViewController.h"
#import "ViewController.h"
#import "EventsViewController.h"
#import <FBSDKLoginKit/FBSDKLoginKit.h>
#import <FBSDKCoreKit/FBSDKCoreKit.h>

@interface RootViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIView *view;
@property (strong, nonatomic) IBOutlet UIView *loginViewContainer;
@property (strong, nonatomic) IBOutlet UIView *tableViewContainer;

@property (strong, nonatomic) UINavigationController * nav;

@end
