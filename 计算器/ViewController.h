//
//  ViewController.h
//  计算器
//
//  Created by myApple on 15/12/26.
//  Copyright © 2015年 myApple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
-(void)labelContent:(id)sender;
-(void)btnTouchDown:(UIButton *)sender;
-(void)btnTouchUpInside:(UIButton *)sender;
-(void)btnTouchUpOutside:(UIButton *)sender;
@end

