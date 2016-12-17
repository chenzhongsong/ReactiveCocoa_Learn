//
//  NSObject+Calculator.h
//  ReactiveCocoa_Learn
//
//  Created by eliteall on 2016/12/13.
//  Copyright © 2016年 chenzhongsong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CalculatorManager.h"

@interface NSObject (Calculator)

+ (int)makeCalculators:(void(^)(CalculatorManager *make))calculatorManager;

@end
