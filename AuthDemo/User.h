//
//  User.h
//  AuthDemo
//
//  Created by Teaualune Tseng on 13/5/29.
//  Copyright (c) 2013年 Zencher Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol LoginDelegate <NSObject>

- (void)loginDidSucceed;

- (void)loginDidFailed: (NSString *)message;

- (void)loginDidNeedValidate;

@end


@protocol SignupDelegate <NSObject>

- (void)signupDidSucceed;

- (void)signupDidFailed: (NSString *)message;

@end


@interface User : NSObject

@property (nonatomic, strong, readonly) NSString *account;

@property (nonatomic, readonly, getter = isKnownNotValidated) BOOL knownNotValidated;

@property (nonatomic, weak) id<LoginDelegate> loginDelegate;

@property (nonatomic, weak) id<SignupDelegate> signupDelegate;

+ (User *)currentUser;

- (void)loginWithAccount: (NSString *)account password: (NSString *)password;

- (void)logout;

- (void)validate: (NSString *)code;

- (void)signupWithAccount: (NSString *)account password: (NSString *)password confirm:(NSString *)confirmPassword;

@end
