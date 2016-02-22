// NSDate+CupertinoYankee.h
//
//  EQBaseProject
//
//  Created by admin on 16/2/21.
//  Copyright © 2016年 ShengQiangLiu. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 
 */
@interface NSDate (CupertinoYankee)

///---------------------------------------
/// @name Calculate Beginning / End of Day
///---------------------------------------

/**
 
 */
- (NSDate *)eq_beginningOfDay;

/**
 
 */
- (NSDate *)eq_endOfDay;

///----------------------------------------
/// @name Calculate Beginning / End of Week
///----------------------------------------

/**
 
 */
- (NSDate *)eq_beginningOfWeek;

/**
 
 */
- (NSDate *)eq_endOfWeek;

///-----------------------------------------
/// @name Calculate Beginning / End of Month
///-----------------------------------------

/**
 
 */
- (NSDate *)eq_beginningOfMonth;

/**
 
 */
- (NSDate *)eq_endOfMonth;

///----------------------------------------
/// @name Calculate Beginning / End of Year
///----------------------------------------

/**
 
 */
- (NSDate *)eq_beginningOfYear;

/**
 
 */
- (NSDate *)eq_endOfYear;

@end
