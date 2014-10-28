//
//  NSURL+FFURLShemaParse.m
//
//  Created by wujiangwei on 14/10/28.
//  Copyright (c) 2014年 Kevin.Wu. All rights reserved.
//

#import "NSURL+FFURLShemaParse.h"
#import "NSString+FFStringUrlEncode.h"

@implementation NSURL (FFURLShemaParse)

- (NSDictionary *)queryDictionary
{
    NSMutableDictionary *queryDict = [NSMutableDictionary dictionary];
    NSArray *keyValuePairs = [self.query componentsSeparatedByString:@"&"];
    
    for (NSString *keyValuePair in keyValuePairs) {
        NSArray *element = [keyValuePair componentsSeparatedByString:@"="];

        if (element.count != 2) continue;
        
        NSString *key = element[0], *value = element[1];
        
        if (key.length == 0) continue;
        
        queryDict[[key URLDecodedString]] = [value URLDecodedString];
    }
    
    return [NSDictionary dictionaryWithDictionary:queryDict];
}

@end
