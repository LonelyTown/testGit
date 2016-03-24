//
//  TopView.h
//  demoVc
//
//  Created by mac on 15/9/29.
//  Copyright © 2015年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>
@class TopView;

@protocol TopViewDelegate <NSObject>

- (void)TopView:(TopView *)topView ButtonClick:(UIButton *)btn;

@end


@interface TopView : UIView

/**
 *  选项个数
 */
@property (nonatomic, assign) NSInteger count;

/**
 *  选项title数组
 */
@property (nonatomic, strong) NSArray *titleArray;

@property (nonatomic, weak) id<TopViewDelegate> delegate;

- (void)btnClickWithIndex:(NSInteger)index;

/**
 *  git版本管理测试
 */

/**
 *  使用git diff 命令查看修改内容
 */
/**
 *  git远程仓库测试
 */

/**
 *  dev分支
 */

/**
 *  config1 修改内容
 */
@end
