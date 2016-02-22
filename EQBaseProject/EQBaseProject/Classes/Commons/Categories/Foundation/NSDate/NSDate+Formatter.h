//
//  NSDate+Formatter.h
//  EQBaseProject
//
//  Created by admin on 16/2/21.
//  Copyright © 2016年 ShengQiangLiu. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface NSDate (Formatter)

+(NSDateFormatter *)eq_formatter;
+(NSDateFormatter *)eq_formatterWithoutTime;
+(NSDateFormatter *)eq_formatterWithoutDate;

-(NSString *)eq_formatWithUTCTimeZone;
-(NSString *)eq_formatWithLocalTimeZone;
-(NSString *)eq_formatWithTimeZoneOffset:(NSTimeInterval)offset;
-(NSString *)eq_formatWithTimeZone:(NSTimeZone *)timezone;

-(NSString *)eq_formatWithUTCTimeZoneWithoutTime;
-(NSString *)eq_formatWithLocalTimeZoneWithoutTime;
-(NSString *)eq_formatWithTimeZoneOffsetWithoutTime:(NSTimeInterval)offset;
-(NSString *)eq_formatWithTimeZoneWithoutTime:(NSTimeZone *)timezone;

-(NSString *)eq_formatWithUTCWithoutDate;
-(NSString *)eq_formatWithLocalTimeWithoutDate;
-(NSString *)eq_formatWithTimeZoneOffsetWithoutDate:(NSTimeInterval)offset;
-(NSString *)eq_formatTimeWithTimeZone:(NSTimeZone *)timezone;


+ (NSString *)eq_currentDateStringWithFormat:(NSString *)format;
+ (NSDate *)eq_dateWithSecondsFromNow:(NSInteger)seconds;
+ (NSDate *)eq_dateWithYear:(NSInteger)year month:(NSUInteger)month day:(NSUInteger)day;
- (NSString *)eq_dateWithFormat:(NSString *)format;
@end
