//
//  ViewController.h
//  modulift
//
//  Created by OK MAC on 2/13/15.
//  Copyright (c) 2015 DoubleDigital. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface ViewController : UIViewController

- (IBAction)m_btnSignIn:(id)sender;


- (IBAction)m_btnForgotPassword:(id)sender;

@property (weak, nonatomic) IBOutlet UITextField *m_lblUserID;
@property (weak, nonatomic) IBOutlet UITextField *m_lblUserPassword;

@end

