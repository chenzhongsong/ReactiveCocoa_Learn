//
//  TwoViewController.h
//  ReactiveCocoa_Learn
//
//  Created by eliteall on 2016/12/13.
//  Copyright © 2016年 chenzhongsong. All rights reserved.
//

#import <UIKit/UIKit.h>

//RACSubject替换代理

// 需求:
// 1.给当前控制器添加一个按钮，modal到另一个控制器界面
// 2.另一个控制器view中有个按钮，点击按钮，通知当前控制器

//步骤一：在第二个控制器.h，添加一个RACSubject代替代理。



@interface TwoViewController : UIViewController

@property (nonatomic, strong) RACSubject *delegateSignal;

@end
