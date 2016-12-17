//
//  Calculator.m
//  ReactiveCocoa_Learn
//
//  Created by eliteall on 2016/12/13.
//  Copyright © 2016年 chenzhongsong. All rights reserved.
//

#import "Calculator.h"

@implementation Calculator

+ (instancetype)shareManager {
    
    static Calculator *c = nil;
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        c = [[Calculator alloc] init];
    });
    return c;
}

- (Calculator *)calculator:(int(^)(int result))calculator {
    
    self.result = calculator([Calculator shareManager].result);
    
    return [Calculator shareManager];
    
}

- (Calculator *)eaual:(BOOL(^)(int resulte))operation {
    
    
    NSLog(@"self.result:%d",self.result);
    BOOL isEqual = operation([Calculator shareManager].result);
    
    self.isEqual = isEqual;
    
    return [Calculator shareManager];
    
}

@end
