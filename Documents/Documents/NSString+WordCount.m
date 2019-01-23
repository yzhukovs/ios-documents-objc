//
//  NSString+WordCount.m
//  Documents
//
//  Created by Yvette Zhukovsky on 1/23/19.
//  Copyright © 2019 Yvette Zhukovsky. All rights reserved.
//

#import "NSString+WordCount.h"

@implementation NSString (WordCount)


-(int) WordCount
{
    NSArray *countsOfWord = [self componentsSeparatedByString:@" "];
     return  (int)countsOfWord.count ;
    
}

@end
