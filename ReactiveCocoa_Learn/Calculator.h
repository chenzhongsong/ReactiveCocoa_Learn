//
//  Calculator.h
//  ReactiveCocoa_Learn
//
//  Created by eliteall on 2016/12/13.
//  Copyright © 2016年 chenzhongsong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Calculator : NSObject

@property (nonatomic, assign) BOOL isEqual;
@property (nonatomic, assign) int result;

+ (instancetype)shareManager;

- (Calculator *)calculator:(int(^)(int result))calculator;

- (Calculator *)eaual:(BOOL(^)(int resulte))operation;

@end
