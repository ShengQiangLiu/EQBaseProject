//
//  NSDateFormatter+Make.h
//
//  EQBaseProject
//
//  Created by admin on 16/2/21.
//  Copyright © 2016年 ShengQiangLiu. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface NSDateFormatter (Make)
+(NSDateFormatter *)eq_dateFormatterWithFormat:(NSString *)format;
+(NSDateFormatter *)eq_dateFormatterWithFormat:(NSString *)format timeZone:(NSTimeZone *)timeZone;
+(NSDateFormatter *)eq_dateFormatterWithFormat:(NSString *)format timeZone:(NSTimeZone *)timeZone locale:(NSLocale *)locale;
+(NSDateFormatter *)eq_dateFormatterWithDateStyle:(NSDateFormatterStyle)style;
+(NSDateFormatter *)eq_dateFormatterWithDateStyle:(NSDateFormatterStyle)style timeZone:(NSTimeZone *)timeZone;
+(NSDateFormatter *)eq_dateFormatterWithTimeStyle:(NSDateFormatterStyle)style;
+(NSDateFormatter *)eq_dateFormatterWithTimeStyle:(NSDateFormatterStyle)style timeZone:(NSTimeZone *)timeZone;
@end
