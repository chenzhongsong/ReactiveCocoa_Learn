//
//  CalculateManager.m
//  ReactiveCocoa_Learn
//
//  Created by eliteall on 2016/12/13.
//  Copyright © 2016年 chenzhongsong. All rights reserved.
//

#import "CalculatorManager.h"

@implementation CalculatorManager

- (CalculatorManager *(^)(int))add {
    return ^CalculatorManager *  (int value) {
        _result += value;
        return self;
    };
}

@end
