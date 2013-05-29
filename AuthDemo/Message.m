//
//  Message.m
//  AuthDemo
//
//  Created by Teaualune Tseng on 13/5/29.
//  Copyright (c) 2013年 Zencher Co., Ltd. All rights reserved.
//

#import "Message.h"

@implementation Message

+ (Message *)messageWithText: (NSString *)aText owner: (NSString *)anOwner timestamp: (NSDate *)aTimestamp
{
    Message *message = [[Message alloc] init];
    message.text = aText;
    message.owner = anOwner;
    message.timestamp = aTimestamp;
    return message;
}

@end
