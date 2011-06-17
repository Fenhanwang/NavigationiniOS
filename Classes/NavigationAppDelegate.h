//
//  NavigationAppDelegate.h
//  Navigation
//
//  Created by DuYabo on 11-6-17.
//  Copyright 2011 Mobroad. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NavigationAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

