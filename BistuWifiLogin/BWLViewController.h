//
//  BWLViewController.h
//  BistuWifiLogin
//
//  Created by mobiledev on 13-4-17.
//  Copyright (c) 2013年 mobiledev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BWLViewController : UIViewController
{
    NSURLConnection *con;
    NSMutableURLRequest *request;
    NSData *data;
    bool lock;
    char ssid[255];
}
@property (retain, nonatomic) IBOutlet UIWebView *WVretShower;
@property (retain, nonatomic) IBOutlet UIButton *btnlogout;
@property (retain, nonatomic) IBOutlet UIButton *btnlogin;
@property (retain, nonatomic) IBOutlet UILabel *Lssid;
@property (retain, nonatomic) IBOutlet UIProgressView *Barstatus;
@property (retain, nonatomic) IBOutlet UILabel *Lstatus;
@property (retain,readwrite)     NSMutableData *receiveData;
@property (retain, nonatomic) IBOutlet UITextField *Lusername;
@property (retain, nonatomic) IBOutlet UITextField *Lpassword;
- (IBAction)login;
- (IBAction)logout;
- (NSString*)fetchSSIDInfo;
-(bool) checknetstatus;
-(void)reloadseeting;
@end
