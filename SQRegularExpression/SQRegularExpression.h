//
//  SQRegularExpression.h
//  SQRegularExpression
//
//  Created by Conquer on 16/8/8.
//  Copyright © 2016年 Conquer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SQRegularExpression : NSObject
/**
 * 手机号校验
 */
+ (BOOL) isMobile:(NSString *)mobileNumbel;
/**
 * 密码校验
 */
+ (BOOL) isPassword:(NSString *)password;
/**
 * 邮箱校验
 */
+ (BOOL) isEmail:(NSString *)email;
/**
 * 身份证号校验
 */
+ (BOOL) isIdentityCard: (NSString *)identityCard;
/**
 * 银行卡号校验
 */
+ (BOOL) isBankCardluhmCheck:(NSString *)bankNumber;
@end
