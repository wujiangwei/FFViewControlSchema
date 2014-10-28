//
//  FFSchemaManager.h
//
//  Created by wujiangwei on 14/10/28.
//  Copyright (c) 2014年 Kevin.Wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface FFSchemaManager : NSObject

+ (FFSchemaManager *)sharedInstance;

- (BOOL)isAppSchema:(NSURL *)url;

- (BOOL)canOpenUrl:(NSURL *)url;

- (BOOL)openURL:(NSURL *)url;

@end
