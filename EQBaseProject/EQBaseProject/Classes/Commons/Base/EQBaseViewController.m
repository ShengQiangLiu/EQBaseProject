//
//  EQBaseViewController.m
//  EQBaseProject
//
//  Created by admin on 16/2/21.
//  Copyright © 2016年 ShengQiangLiu. All rights reserved.
//

#import "EQBaseViewController.h"
#import "UIImage+Color.h"


@interface EQBaseViewController ()

@end

@implementation EQBaseViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    self.view.backgroundColor = [UIColor whiteColor];
    /**
     *
     */
    self.edgesForExtendedLayout = UIRectEdgeNone;
    /**
     *  自动调节滚动视图
     */
    self.automaticallyAdjustsScrollViewInsets = NO;
    /**
     *  设置导航条背景颜色
     */
    UIImage *backgroundImage = [UIImage imageWithColor:[UIColor redColor]];
    [self.navigationController.navigationBar setBackgroundImage:backgroundImage forBarPosition:UIBarPositionAny barMetrics:UIBarMetricsDefault];
    /**
     *  设置返回按钮
     */
    UIButton *leftBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    [leftBtn setImage:[UIImage imageNamed:@"返回"] forState:UIControlStateNormal];
    leftBtn.frame = CGRectMake(0, -5, 40, 40);
    leftBtn.imageEdgeInsets = UIEdgeInsetsMake(5, 0, 5, 10);
    [leftBtn addTarget:self action:@selector(leftBarButtonClick:) forControlEvents:UIControlEventTouchUpInside];
    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc] initWithCustomView:leftBtn];
    
}

/**
 *  设置导航栏标题
 */
- (void)setNavigationItemTitle:(NSString *)navigationItemTitle
{
    UILabel *titleLabel = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 120, self.navigationController.navigationBar.frame.size.height)];
    titleLabel.text = navigationItemTitle;
    titleLabel.textColor = [UIColor whiteColor];
    titleLabel.textAlignment = NSTextAlignmentCenter;
    titleLabel.backgroundColor = [UIColor clearColor];
    titleLabel.font = [UIFont systemFontOfSize:20];
    self.navigationItem.titleView = titleLabel;
}

- (void)leftBarButtonClick:(UIButton *)sender
{
    [self.navigationController popViewControllerAnimated:YES];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
