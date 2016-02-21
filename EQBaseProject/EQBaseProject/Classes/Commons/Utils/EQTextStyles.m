//
//  EQTextStyles.m
//  EQBaseProject
//
//  Created by admin on 16/2/21.
//  Copyright © 2016年 ShengQiangLiu. All rights reserved.
//

#import "EQTextStyles.h"

@implementation EQTextStyles

+ (NSDictionary *)textStyleWithFontSize:(CGFloat)size foregroundColor:(UIColor *)color
{
    return @{
             NSFontAttributeName : [UIFont systemFontOfSize:size],
             NSForegroundColorAttributeName: color
             };
}


/*链接属性样式*/
+ (NSDictionary *)linkStyleWithFontSize:(CGFloat)size foregroundColor:(UIColor *)color lineStyle:(NSUnderlineStyle)style
{
    return @{
             NSFontAttributeName : [UIFont systemFontOfSize:size],
             NSForegroundColorAttributeName: color,
             NSUnderlineStyleAttributeName: @(style)
             };
}

@end
