//
//  OWSpaceDataViewController.h
//  Out of this World
//
//  Created by Harsh Sapra on 23/05/14.
//  Copyright (c) 2014 Harsh Sapra. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWSpaceObject.h"

@interface OWSpaceDataViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) OWSpaceObject *spaceObject;

@end
