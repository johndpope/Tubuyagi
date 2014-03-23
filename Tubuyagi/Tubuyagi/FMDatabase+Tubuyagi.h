//
//  FMDatabase+Tubuyagi.h
//  Tubuyagi
//
//  Created by 宮原聡 on 2014/03/23.
//  Copyright (c) 2014年 Genki Ishibashi. All rights reserved.
//

#import "FMDatabase.h"

@interface FMDatabase(Tubuyagi)

#pragma mark -factory
+ (FMDatabase *)databaseFactory;

#pragma mark -clear
- (void) deleteAllLearnedData;

#pragma mark -show
- (NSArray *)contentsInLearnLog;

#pragma mark -search

- (BOOL)findFavoriteByID:(NSString *)tweet_id;

- (NSInteger)valueForPreviousWord:(NSString*)previous
                    followingWord:(NSString*)following;

- (NSArray *)bigramsForPreviousWord:(NSString *)previous;

#pragma mark -sum

- (NSInteger)sumScoreForPreivousWord:(NSString *)previous;

#pragma mark -add
- (void)logLearnedText:(NSString *)text;

- (void)logFavoriteTweet:(NSString *)tweetID;

-(void) updateBigramIncrease:(BOOL)increase
                previousWord:(NSString*)previous
               followingWord:(NSString*)following;

#pragma mark -remove
- (void)removeLearnLog:(NSString *)text;

@end
