//
//  NSObject+Calculator.m
//  ReactiveCocoa_Learn
//
//  Created by eliteall on 2016/12/13.
//  Copyright © 2016年 chenzhongsong. All rights reserved.
//

#import "NSObject+Calculator.h"

@implementation NSObject (Calculator)

+ (int)makeCalculators:(void(^)(CalculatorManager *make))calculatorManager {
    CalculatorManager *manager = [[CalculatorManager alloc] init];
    calculatorManager(manager);
    return manager.result;
}

@end
