//
//  Common.h
//  SaicCarPlatform
//
//  Created by 刘旭 on 2018/5/29.
//  Copyright © 2018年 Saic. All rights reserved.
//

#ifndef Common_h
#define Common_h

//屏幕尺寸
#define Screen_Height [UIScreen mainScreen].bounds.size.height //当前屏幕高度
#define Screen_Width [UIScreen mainScreen].bounds.size.width  //当前屏幕宽度
#define Screen_statusBar_Height [[UIApplication sharedApplication] statusBarFrame].size.height //状态栏的高度
#define kNavBarHeight 44.0 // 屏幕navigation不含状态栏的高度
#define Screen_NAV_Height (Screen_statusBar_Height + kNavBarHeight) // 屏幕navigation的高度

#define BottomHeight (isIPhoneX() ? 34 : 0)//iPhone X底部手势区域


//#define isiPhoneX  ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO) //是否是iPhone X
#define isiPhone5s  Screen_Width == 320
#define NavTopHeight (isIPhoneX() ? 88 : 64)//导航栏高度


#define ONEPX           (1.0f / [UIScreen mainScreen].scale)  //1像素
#define Screen_Scale (MIN(Screen_Height, Screen_Width) / 375.0)  // 37屏幕比例


//弱引用
#define WEAK_SELF __weak __typeof(&*self)weakSelf = self;
#define STRONG_SELF  __strong __typeof(&*weakSelf) strongSelf = weakSelf;
#define CHECK_WEAK_SELF if (weakSelf == nil) { return; }

//系统版本
#define iOS7Later ([UIDevice currentDevice].systemVersion.floatValue >= 7.0f)
#define iOS8Later ([UIDevice currentDevice].systemVersion.floatValue >= 8.0f)
#define iOS9Later ([UIDevice currentDevice].systemVersion.floatValue >= 9.0f)
#define iOS9_1Later ([UIDevice currentDevice].systemVersion.floatValue >= 9.1f)
#define iOS10Later ([UIDevice currentDevice].systemVersion.floatValue >= 10.0f)

//本地版本
#define APP_Version [[[NSBundle mainBundle] infoDictionary] valueForKey:@"CFBundleShortVersionString"]

// 时间
#define ONE_SECOND      (1.0f)
#define ONE_MINUTE      (ONE_SECOND * 60.0f)
#define ONE_HOUR        (ONE_MINUTE * 60.0f)
#define ONE_DAY         (ONE_HOUR * 24)
#define ONE_WEEK        (ONE_DAY * 7)

//获取View的属性
#define TTViewWidth(view)  view.frame.size.width
#define TTViewHeight(view) view.frame.size.height
#define TTViewX(view)      view.frame.origin.x
#define TTViewY(view)      view.frame.origin.y

//极光推送跳转URL
#define MessageActivityListScheme  @"saic://message/activityList"
#define MessagePayListScheme  @"saic://message/payList"

#endif /* Common_h */
