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

//config schema vc push animation
//default is YES
- (void)configSchemaVCPushAnimation:(BOOL)vcPushAnimation;

/*
 * Default not support storyboard
 * Call this method to support storyboard
 * storyboardName:your storyboard name
 *
 * If you use storyboard
 * the StoryboardId in your storyboard:
 * In the schema.plist name(key)-value(StoryboardId)
 **/
- (void)configStoryboardSchema:(NSString *)storyboardName;

//determine schema format is the schema in this application
- (BOOL)isAppSchema:(NSURL *)url;

//does the schema url work in this application
//support IOS Schema and application schema
- (BOOL)canOpenUrl:(NSURL *)url;

/*
 if your want open schema in Selector:
    - (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation
 
 you must call this method to judge is this schema return to your app
 like your app shares some thing to QQ,and user return from qq
 In this case,you can not open the url
 
 this method is design for you to judge is return from share app
 **/

//Please using your share SDK do this things
//like ShareSDK.h support method:
/*      + (BOOL)handleOpenURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication
                annotation:(id)annotation wxDelegate:(id)wxDelegate*/
//if return YES,please do not call
//      - (BOOL)openURL:(NSURL *)url

//so this method do not need again
//- (BOOL)canOpenUrl:(NSURL *)url sourceApp:(NSString *)sourceApp;

//open schema
//return :did open your schema succeed
- (BOOL)openURL:(NSURL *)url;

@end
