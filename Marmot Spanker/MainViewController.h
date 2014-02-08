//
//  MainViewController.h
//  Marmot Spanker
//
//  Created by dan garrett on 14 Feb 07.
//  Copyright (c) 2014 dan garrett. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
