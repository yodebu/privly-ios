//
//  ApplicationTypeViewController.h
//  privly-ios
//  Copyright 2013 The Privly Foundation.
//

#import <UIKit/UIKit.h>
#import "ApplicationTypeViewController.h"
#import "PlainPostDestinationViewController.h"
#import "ZeroBinPostViewController.h"
#import "TestPostViewController.h"

@interface ApplicationTypeViewController : UIViewController

@property (nonatomic, strong) UINavigationController *mockNavigationController;

- (IBAction)createPlainPost:(id)sender;
- (IBAction)createZeroBinPost:(id)sender;
- (IBAction)createTestPost:(id)sender;
- (IBAction)logout:(id)sender;

@end
