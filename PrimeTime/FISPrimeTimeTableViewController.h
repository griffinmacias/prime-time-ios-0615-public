//
//  FISTableViewController.h
//  PrimeTime
//
//  Created by Mason Macias on 6/16/15.
//  Copyright (c) 2015 FIS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FISPrimeTimeTableViewController : UITableViewController
@property (nonatomic, strong) NSMutableArray *primeNumbers;
- (NSInteger)primeNumber:(NSInteger)prime;
@end