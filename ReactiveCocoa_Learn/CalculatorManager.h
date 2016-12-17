//
//  CalculateManager.h
//  ReactiveCocoa_Learn
//
//  Created by eliteall on 2016/12/13.
//  Copyright © 2016年 chenzhongsong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorManager : NSObject

@property (nonatomic, assign)int result;

- (CalculatorManager *(^)(int))add;

//- (CalculatorManager *(^)(int))sub;
//
//- (CalculatorManager *(^)(int))muilt;
//
//- (CalculatorManager *(^)(int))divide;

@end
