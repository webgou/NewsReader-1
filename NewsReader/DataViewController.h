//
//  DataViewController.h
//  NewsReader
//
//  Created by Geoffrey M. Scott on 8/15/12.
//  Copyright (c) 2012 The Hackerati, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end
