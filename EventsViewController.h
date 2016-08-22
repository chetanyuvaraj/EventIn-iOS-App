//
//  EventsViewController.h
//  NPNN
//
//  Created by Mayank Jain on 7/15/13.
//  Copyright (c) 2013 Mayank Jain. All rights reserved.
//

#import "ViewController.h"
#import <FBSDKLoginKit/FBSDKLoginKit.h>
#import <FBSDKCoreKit/FBSDKCoreKit.h>

@interface EventsViewController : ViewController

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) NSMutableArray *events;

@end
