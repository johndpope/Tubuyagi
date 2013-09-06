//
//  FoodUIViewController.h
//  Tubuyagi
//
//  Created by Genki Ishibashi on 13/09/05.
//  Copyright (c) 2013年 Genki Ishibashi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Social/Social.h>

@protocol FoodViewControllerDelegate;

@interface FoodUIViewController : UIViewController<UITableViewDataSource, UITableViewDelegate>
{
    NSArray *tweets;
}
@property (strong, nonatomic) IBOutlet UITableView *foodTableView;
@property (nonatomic, retain) id<FoodViewControllerDelegate> delegate;
@property (nonatomic, retain) NSArray *twitterAccounts;
//@property (nonatomic, retain) NSArray *tweets;

- (IBAction)backMainView:(id)sender;

@end

@protocol FoodViewControllerDelegate <NSObject>

- (void)setTweetString:(NSString *)strTweet;

@end
