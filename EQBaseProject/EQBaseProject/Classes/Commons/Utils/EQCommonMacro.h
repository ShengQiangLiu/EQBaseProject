//
//  EQCommonMacro.h
//  EQBaseProject
//
//  Created by admin on 16/2/21.
//  Copyright © 2016年 ShengQiangLiu. All rights reserved.
//
/**
 *  该文件用于定义公共宏，快捷的函数调用。字符串常量请放到 EQConstant 里面
 */

#ifndef EQCommonMacro_h
#define EQCommonMacro_h

/**
 * 一、输出日志宏
 *
 *
 */
#ifdef DEBUG
#define EQLog(...)  NSLog(__VA_ARGS__)
#else
#define EQLog(...)
#endif

/*调用函数*/
#define EQLogFun  EQLog(@"%s",__func__);

/*输出视图的frame边界*/
#define EQLogFrame(view)  EQLog(@"current Frame = %@",NSStringFromCGRect(view.frame) );

/*输出所有子视图*/
#define EQLogSubviews(view)  EQLog(@"%@",view.subviews);

/**
 * 二、屏幕大小、系统判断
 *
 *
 */

/*当前设备系统*/
#define iOS7   ([UIDevice currentDevice].systemVersion.floatValue>=7.0)
#define iOS8   ([UIDevice currentDevice].systemVersion.floatValue>=8.0)
#define iOS9   ([UIDevice currentDevice].systemVersion.floatValue>=9.0)


/*KeyWindow*/
#define EQKeyWindow [UIApplication sharedApplication].keyWindow

/*当前屏幕尺寸*/
#define EQScreenBounds [UIScreen mainScreen].bounds
#define EQScreenWidth  [UIScreen mainScreen].bounds.size.width
#define EQScreenHeight [UIScreen mainScreen].bounds.size.height


/**
 * 三、消息发送、通知、KVO
 *
 *
 */

/*消息发送*/
#import <objc/message.h>
#define EQMsgSend(target, action, ...) ((void(*)(id, SEL, ...))objc_msgSend)(target, action, ## __VA_ARGS__)

/*添加KVO观察者*/
#define EQAddKVOObserver(object, target, keyPath) [object addObserver:target forKeyPath:keyPath options:NSKeyValueObservingOptionInitial | NSKeyValueObservingOptionNew context:NULL]

/*移除KVO观察者*/
#define EQRemoveKVOObserver(object, target, keyPath) [object removeObserver:target forKeyPath:keyPath]

/*发送通知*/
#define EQPostNotification(name, obj, info) [[NSNotificationCenter defaultCenter] postNotificationName:name object:obj userInfo:info]

/*接收通知*/
#define EQAddNotificationObserver(observer, action, names, obj) [[NSNotificationCenter defaultCenter] addObserver:observer selector:action name:names object:obj]

/*移除通知*/
#define EQRemoveNotificationObserver(observer, names, obj) [[NSNotificationCenter defaultCenter] removeObserver:observer name:names object:obj]


/**
 * 四、合成一个强或者弱应用
 *
 *
 *
 示例:
 @weakify(self)
 [self doSomething^{
 @strongify(self)
 if (!self) return;
 ...
 }];
 
 */
#ifndef weakify
#if DEBUG
#if __has_feature(objc_arc)
#define weakify(object) autoreleasepool{} __weak __typeof__(object) weak##_##object = object;
#else
#define weakify(object) autoreleasepool{} __block __typeof__(object) block##_##object = object;
#endif
#else
#if __has_feature(objc_arc)
#define weakify(object) try{} @finally{} {} __weak __typeof__(object) weak##_##object = object;
#else
#define weakify(object) try{} @finally{} {} __block __typeof__(object) block##_##object = object;
#endif
#endif
#endif

#ifndef strongify
#if DEBUG
#if __has_feature(objc_arc)
#define strongify(object) autoreleasepool{} __typeof__(object) object = weak##_##object;
#else
#define strongify(object) autoreleasepool{} __typeof__(object) object = block##_##object;
#endif
#else
#if __has_feature(objc_arc)
#define strongify(object) try{} @finally{} __typeof__(object) object = weak##_##object;
#else
#define strongify(object) try{} @finally{} __typeof__(object) object = block##_##object;
#endif
#endif
#endif



/**
 * 五、获取 UIStoryboard、Xib
 *
 *
 *
 */
/*获取UIStoryboard*/
#define EQStoryboards(name) [UIStoryboard storyboardWithName:name bundle:nil]
/*根据UIStoryboard的identifier获取ViewController*/
#define EQStoryboardsController(storyboards, identifier) [EQStoryboards(storyboards) instantiateViewControllerWithIdentifier:identifier]

/*获取Xib*/
#define EQXib(name) [[[UINib nibWithNibName:name bundle:nil] instantiateWithOwner:nil options:nil] firstObject]



#endif /* EQCommonMacro_h */
