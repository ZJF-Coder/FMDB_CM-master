//
//  Car.h
//  FMDBDemo
//
//  Created by ChenMan on 16/5/18.
//  Copyright © 2016年 ChenManV. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Car : NSObject
/**
 *  所有者
 */
@property(nonatomic,strong ) NSNumber *own_id;

/**
 *  车的ID
 */
@property(nonatomic,strong) NSNumber *car_id;


//品牌
@property(nonatomic,copy) NSString *brand;

//价格
@property(nonatomic,assign) NSInteger price;


@end
