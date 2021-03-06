//
//  CXHomeStatue.h
//  CXWeibo
//
//  Created by 陈擎霄 on 16/1/7.
//  Copyright © 2016年 chenqingxiao007. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CXHomeStatue : NSObject

/**
 *  用户头像
 */
@property (copy, nonatomic) NSString *profile_image_url;

/**
 *  用户昵称
 */
@property (copy, nonatomic) NSString *screen_name;

/**
 *  微博正文
 */
@property (copy, nonatomic) NSString *text;


/**
 *  图片数组
 每一组的格式为：http://ww4.sinaimg.cn/thumbnail/006gWxLWjw1ezs1gv1hrhj30j60f8q4g.jpg
 */
@property (strong, nonatomic) NSArray *pic_urls;

/**
 *  发布时间
 */
@property (copy, nonatomic) NSString *created_at;

/**
 *  用户头像
 */
@property (copy, nonatomic) NSString *thumbnail_pic;

/**
 *  初始化方法
 */
- (instancetype)initWithDic:(NSDictionary *)dic;

@end
