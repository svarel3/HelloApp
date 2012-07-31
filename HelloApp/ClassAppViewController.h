//
//  ClassAppViewController.h
//  HelloApp
//
//  Created by sam varela on 7/31/12.
//  Copyright (c) 2012 sam_varela. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ClassAppViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *helloTextField;
@property (weak, nonatomic) IBOutlet UILabel *helloLabel;
- (IBAction)helloButtonPressed:(UIButton *)sender;

@end
