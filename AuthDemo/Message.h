//
//  Message.h
//  AuthDemo
//
//  Created by Teaualune Tseng on 13/5/29.
//  Copyright (c) 2013年 Zencher Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Message : NSObject

@property (nonatomic, strong) NSString *text;

@property (nonatomic, strong) NSString *owner;

@property (nonatomic, strong) NSDate *timestamp;

+ (Message *)messageWithText: (NSString *)aText owner: (NSString *)anOwner timestamp: (NSDate *)aTimestamp;

@end
