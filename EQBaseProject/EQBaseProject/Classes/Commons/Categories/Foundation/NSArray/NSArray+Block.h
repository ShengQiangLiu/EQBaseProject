//
//  NSArray+Block.h
//  EQBaseProject
//
//  Created by admin on 16/2/21.
//  Copyright © 2016年 ShengQiangLiu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (Block)
- (void)eq_each:(void (^)(id object))block;
- (void)eq_eachWithIndex:(void (^)(id object, NSUInteger index))block;
- (NSArray *)eq_map:(id (^)(id object))block;
- (NSArray *)eq_filter:(BOOL (^)(id object))block;
- (NSArray *)eq_reject:(BOOL (^)(id object))block;
- (id)eq_detect:(BOOL (^)(id object))block;
- (id)eq_reduce:(id (^)(id accumulator, id object))block;
- (id)eq_reduce:(id)initial withBlock:(id (^)(id accumulator, id object))block;

@end
