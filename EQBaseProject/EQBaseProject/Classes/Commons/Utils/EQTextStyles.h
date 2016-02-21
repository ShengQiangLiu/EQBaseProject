//
//  EQTextStyles.h
//  EQBaseProject
//
//  Created by admin on 16/2/21.
//  Copyright © 2016年 ShengQiangLiu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EQTextStyles : NSObject

/*设置文字属性样式*/
+ (NSDictionary *)textStyleWithFontSize:(CGFloat)size foregroundColor:(UIColor *)color;

/*链接属性样式，NSUnderlineStyle可设置为：NSUnderlineStyleSingle*/
+ (NSDictionary *)linkStyleWithFontSize:(CGFloat)size foregroundColor:(UIColor *)color lineStyle:(NSUnderlineStyle)style;

@end
