//
//  OWOuterSpaceTableViewController.h
//  Out of this World
//
//  Created by Harsh Sapra on 20/05/14.
//  Copyright (c) 2014 Harsh Sapra. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWAddSpaceObjectViewController.h"

@interface OWOuterSpaceTableViewController : UITableViewController <OWAddSpaceObjectViewControllerDelegate>

@property (strong, nonatomic) NSMutableArray *planets;
@property (strong, nonatomic) NSMutableArray *addedSpaceObjects;

@end
