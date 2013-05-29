//
//  MessageBoard.h
//  AuthDemo
//
//  Created by Teaualune Tseng on 13/5/29.
//  Copyright (c) 2013年 Zencher Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Message.h"


@protocol MessageBoardDelegate <NSObject>

- (void)queryMessageDidComplete: (NSError *)error;

- (void)postMessageDidComplete: (NSError *)error;

- (void)deleteMessageDidComplete: (NSError *)error;

@end


@interface MessageBoard : NSObject

@property (nonatomic, weak) id<MessageBoardDelegate> delegate;

@property (nonatomic, strong, readonly) NSMutableArray *messages;

- (void)queryMessage;

- (void)postMessage: (Message *)newMessage;

- (void)deleteMessage: (Message *)deletedMessage;

@end
