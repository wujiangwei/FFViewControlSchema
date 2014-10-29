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

//config schema, suggest you do it when app lanuch
- (void)configSchema:(NSString *)configSchemaName;

//determine schema format is the schema in this application
- (BOOL)isAppSchema:(NSURL *)url;

//does the schema url work in this application
//support IOS Schema and application schema
- (BOOL)canOpenUrl:(NSURL *)url;

//open schema
//return :did open your schema succeed
- (BOOL)openURL:(NSURL *)url;

@end
