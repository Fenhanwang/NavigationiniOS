//
//  UserTableViewController.h
//  Navigation
//
//  Created by DuYabo on 11-6-17.
//  Copyright 2011 Mobroad. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UserTableViewController : UITableViewController {
	NSString *key;
	NSDictionary *data;
}

@property(nonatomic, retain) NSDictionary *data;
@property(nonatomic, retain) NSString *key;

@end
