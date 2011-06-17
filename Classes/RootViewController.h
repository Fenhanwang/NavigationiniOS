//
//  RootViewController.h
//  Navigation
//
//  Created by DuYabo on 11-6-17.
//  Copyright 2011 Mobroad. All rights reserved.
//

#import <UIKit/UIKit.h>
@class UserTableViewController;

@interface RootViewController : UITableViewController {
	NSDictionary *data;
	UserTableViewController *userTableViewController;
}

@property(nonatomic, retain) NSDictionary *data;
@property(nonatomic, retain) IBOutlet UserTableViewController *userTableViewController;

@end
