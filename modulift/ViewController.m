//
//  ViewController.m
//  modulift
//
//  Created by OK MAC on 2/13/15.
//  Copyright (c) 2015 DoubleDigital. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
//    PFObject *testObject = [PFObject objectWithClassName:@"TestObject"];
//    testObject[@"foo"] = @"bar";
//    [testObject saveInBackground];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)viewDidAppear:(BOOL)animated {
    PFUser *user = [PFUser currentUser];
    if (user.username != nil) {
        [self performSegueWithIdentifier:@"login" sender:self];
    }
}
- (void) checkFieldsComplete {
    
        
    if ([self.m_lblUserID.text isEqualToString:@""] || [self.m_lblUserPassword.text isEqualToString:@""]) {
        UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Oooopss!" message:@"You need to complete all fields" delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil];
        [alert show];
    }
    else {
       // [self checkPasswordsMatch];
    }
}



- (IBAction)m_btnSignIn:(id)sender {
    
    NSString *tmp1,*tmp2;
    tmp1 =self.m_lblUserID.text;
    tmp2 =self.m_lblUserPassword.text;
    
    [PFUser logInWithUsernameInBackground:self.m_lblUserID.text password:self.m_lblUserPassword.text block:^(PFUser *user, NSError *error) {
        
        if (!error) {
            NSLog(@"Login user!");
            self.m_lblUserID.text = nil;
            self.m_lblUserPassword = nil;
            [self performSegueWithIdentifier:@"login" sender:self];
        }
        if (error) {
            UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"ooops!" message:@"Sorry we had a problem logging you in" delegate:self cancelButtonTitle:@"OK" otherButtonTitles:nil];
            [alert show];
        }
    }];

}

- (IBAction)m_btnForgotPassword:(id)sender {
    
    
}
@end
