//
//  NSDictionary+Block.h
//
//  EQBaseProject
//
//  Created by admin on 16/2/21.
//  Copyright © 2016年 ShengQiangLiu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (Block)
#pragma mark - Manipulation
- (NSDictionary *)eq_dictionaryByAddingEntriesFromDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)eq_dictionaryByRemovingEntriesWithKeys:(NSSet *)keys;

#pragma mark - RX
- (void)eq_each:(void (^)(id k, id v))block;
- (void)eq_eachKey:(void (^)(id k))block;
- (void)eq_eachValue:(void (^)(id v))block;
- (NSArray *)eq_map:(id (^)(id key, id value))block;
- (BOOL)eq_hasKey:(id)key;
- (NSDictionary *)eq_pick:(NSArray *)keys;
- (NSDictionary *)eq_omit:(NSArray *)key;

@end
