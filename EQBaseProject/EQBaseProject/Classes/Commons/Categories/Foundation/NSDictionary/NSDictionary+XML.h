//
//  NSDictionary+XML.h
//
//  EQBaseProject
//
//  Created by admin on 16/2/21.
//  Copyright © 2016年 ShengQiangLiu. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface NSDictionary (XML)
/**
 *  @brief  将NSDictionary转换成XML 字符串
 *
 *  @return XML 字符串
 */
- (NSString *)eq_XMLString;
@end
