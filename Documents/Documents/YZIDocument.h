//
//  YZIDocument.h
//  Documents
//
//  Created by Yvette Zhukovsky on 1/23/19.
//  Copyright © 2019 Yvette Zhukovsky. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YZIDocument : NSObject

-(instancetype)initWithTitle:(NSString *)title textBody:(NSString *) textBody ;

@property (nonatomic) NSString *title ;
@property (nonatomic) int wordCount ;
@property (nonatomic) NSString *textBody ;

@end

NS_ASSUME_NONNULL_END
