//
//  QuizMasterViewController.h
//  Ultimate Pub Quiz
//
//  Created by Timothy Ford on 30/06/2013.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class QuizDetailViewController;

@interface QuizMasterViewController : UITableViewController

@property (strong, nonatomic) QuizDetailViewController *detailViewController;

@end
