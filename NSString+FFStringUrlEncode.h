//
//  NSString+FFStringUrlEncode.h
//  AppFactory
//
//  Created by wujiangwei on 14/10/28.
//  Copyright (c) 2014年 Kevin.Wu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (FFStringUrlEncode)

- (NSString *)URLEncodedString;
- (NSString *)URLDecodedString;

@end
