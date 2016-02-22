//
//  NSDictionary+SafeAccess.h
//
//  EQBaseProject
//
//  Created by admin on 16/2/21.
//  Copyright © 2016年 ShengQiangLiu. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSDictionary (SafeAccess)
- (BOOL)eq_hasKey:(NSString *)key;

- (NSString*)eq_stringForKey:(id)key;

- (NSNumber*)eq_numberForKey:(id)key;

- (NSDecimalNumber *)eq_decimalNumberForKey:(id)key;

- (NSArray*)eq_arrayForKey:(id)key;

- (NSDictionary*)eq_dictionaryForKey:(id)key;

- (NSInteger)eq_integerForKey:(id)key;

- (NSUInteger)eq_unsignedIntegerForKey:(id)key;

- (BOOL)eq_boolForKey:(id)key;

- (int16_t)eq_int16ForKey:(id)key;

- (int32_t)eq_int32ForKey:(id)key;

- (int64_t)eq_int64ForKey:(id)key;

- (char)eq_charForKey:(id)key;

- (short)eq_shortForKey:(id)key;

- (float)eq_floatForKey:(id)key;

- (double)eq_doubleForKey:(id)key;

- (long long)eq_longLongForKey:(id)key;

- (unsigned long long)eq_unsignedLongLongForKey:(id)key;

- (NSDate *)eq_dateForKey:(id)key dateFormat:(NSString *)dateFormat;

//CG
- (CGFloat)eq_CGFloatForKey:(id)key;

- (CGPoint)eq_pointForKey:(id)key;

- (CGSize)eq_sizeForKey:(id)key;

- (CGRect)eq_rectForKey:(id)key;
@end

#pragma --mark NSMutableDictionary setter

@interface NSMutableDictionary(SafeAccess)

-(void)eq_setObj:(id)i forKey:(NSString*)key;

-(void)eq_setString:(NSString*)i forKey:(NSString*)key;

-(void)eq_setBool:(BOOL)i forKey:(NSString*)key;

-(void)eq_setInt:(int)i forKey:(NSString*)key;

-(void)eq_setInteger:(NSInteger)i forKey:(NSString*)key;

-(void)eq_setUnsignedInteger:(NSUInteger)i forKey:(NSString*)key;

-(void)eq_setCGFloat:(CGFloat)f forKey:(NSString*)key;

-(void)eq_setChar:(char)c forKey:(NSString*)key;

-(void)eq_setFloat:(float)i forKey:(NSString*)key;

-(void)eq_setDouble:(double)i forKey:(NSString*)key;

-(void)eq_setLongLong:(long long)i forKey:(NSString*)key;

-(void)eq_setPoint:(CGPoint)o forKey:(NSString*)key;

-(void)eq_setSize:(CGSize)o forKey:(NSString*)key;

-(void)eq_setRect:(CGRect)o forKey:(NSString*)key;
@end