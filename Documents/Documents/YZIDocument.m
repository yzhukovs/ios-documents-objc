//
//  YZIDocument.m
//  Documents
//
//  Created by Yvette Zhukovsky on 1/23/19.
//  Copyright © 2019 Yvette Zhukovsky. All rights reserved.
//

#import "YZIDocument.h"
#import "NSString+WordCount.h"

@implementation YZIDocument

-(instancetype)initWithTitle:(NSString *)title textBody:(NSString *)textBody
{
    self = [super init] ;
    if (self){
    _title = title ;
    _textBody = textBody ;
    }
    return self ;
    
}


-(int)wordCount  {
    return [_textBody WordCount] ;
}

@end
