//
//  NSArray+SafeAccess.h
//  EQBaseProject
//
//  Created by admin on 16/2/21.
//  Copyright © 2016年 ShengQiangLiu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSArray (SafeAccess)
-(id)eq_objectWithIndex:(NSUInteger)index;

- (NSString*)eq_stringWithIndex:(NSUInteger)index;

- (NSNumber*)eq_numberWithIndex:(NSUInteger)index;

- (NSDecimalNumber *)eq_decimalNumberWithIndex:(NSUInteger)index;

- (NSArray*)eq_arrayWithIndex:(NSUInteger)index;

- (NSDictionary*)eq_dictionaryWithIndex:(NSUInteger)index;

- (NSInteger)eq_integerWithIndex:(NSUInteger)index;

- (NSUInteger)eq_unsignedIntegerWithIndex:(NSUInteger)index;

- (BOOL)eq_boolWithIndex:(NSUInteger)index;

- (int16_t)eq_int16WithIndex:(NSUInteger)index;

- (int32_t)eq_int32WithIndex:(NSUInteger)index;

- (int64_t)eq_int64WithIndex:(NSUInteger)index;

- (char)eq_charWithIndex:(NSUInteger)index;

- (short)eq_shortWithIndex:(NSUInteger)index;

- (float)eq_floatWithIndex:(NSUInteger)index;

- (double)eq_doubleWithIndex:(NSUInteger)index;

- (NSDate *)eq_dateWithIndex:(NSUInteger)index dateFormat:(NSString *)dateFormat;
//CG
- (CGFloat)eq_CGFloatWithIndex:(NSUInteger)index;

- (CGPoint)eq_pointWithIndex:(NSUInteger)index;

- (CGSize)eq_sizeWithIndex:(NSUInteger)index;

- (CGRect)eq_rectWithIndex:(NSUInteger)index;
@end


#pragma --mark NSMutableArray setter

@interface NSMutableArray(SafeAccess)

-(void)eq_addObj:(id)i;

-(void)eq_addString:(NSString*)i;

-(void)eq_addBool:(BOOL)i;

-(void)eq_addInt:(int)i;

-(void)eq_addInteger:(NSInteger)i;

-(void)eq_addUnsignedInteger:(NSUInteger)i;

-(void)eq_addCGFloat:(CGFloat)f;

-(void)eq_addChar:(char)c;

-(void)eq_addFloat:(float)i;

-(void)eq_addPoint:(CGPoint)o;

-(void)eq_addSize:(CGSize)o;

-(void)eq_addRect:(CGRect)o;
@end