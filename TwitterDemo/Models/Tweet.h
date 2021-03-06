//
// Created by Tejas Lagvankar on 2/3/15.
// Copyright (c) 2015 Yahoo!. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "User.h"


@interface Tweet : NSObject

@property (nonatomic, strong) NSString *idStr;
@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) User *author;
@property (nonatomic, strong) NSDate *createdAt;
@property (nonatomic, assign) NSInteger retweetCount;
@property (nonatomic, assign) NSInteger favoriteCount;
@property (nonatomic, assign) BOOL favorited;
@property (nonatomic, assign) BOOL retweeted;

- (id) initWithDictionary:(NSDictionary *)dictionary;

+ (NSArray *) tweetsWithArray:(NSArray *)array;

@end