//
//  MeViewController.m
//  Waibao001
//
//  Created by Abyss on 15/7/8.
//  Copyright (c) 2015年 Roger Abyss. All rights reserved.
//

#import "MeViewController.h"
#import "MeCell.h"

@interface MeViewController () <UITableViewDelegate,UITableViewDataSource>
{
    CGFloat heightOfCell;
    NSArray* data;
}
@end

@implementation MeViewController

- (NSString *)viewControllerTitle
{
    return @"我";
}

- (void)requestInfomation
{
    
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    [self configureHeader];
    [self configureTable];
    
    [self requestInfomation];
}

- (void)configureHeader
{
    [_header setBorderWith:[UIColor whiteColor]];
    [_header setRoundCornerAll];
}

- (void)configureTable
{
    heightOfCell = 55.f;
    
    _tableView.tableHeaderView = self.headerView;
    _tableView.delegate = self;
    _tableView.dataSource = self;
    _tableView.height -= 49.f;
    _tableView.separatorStyle = UITableViewCellSelectionStyleNone;
    
    _tableView.backgroundColor  = rCOLOR_BACKGOUND;
    _headerView.backgroundColor = rCOLOR_BACKGOUND;
    
    data = @[@"个人资料",
             @"我的收藏",
             @"我的消息",
             @"我的优惠卷",
             @"我的奖品",
             @"在线抽象",
             @"系统设置"];
}

- (MeCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    MeCell* cell = [tableView dequeueReusableCellWithIdentifier:@"MeCell"];
    if (!cell)
    {
        cell = [[NSBundle mainBundle] loadNibNamed:@"MeCell" owner:self options:nil].lastObject;
        [CRLiner lineTopOn:cell.contentView];
        [CRLiner lineBottomOn:cell.contentView];
    }
    
    cell.title.text = data[indexPath.row];
    cell.title.font = rFONT_M;
    
    NSLog(@"%@",cell.contentView.subviews);
    
    return cell;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return data.count;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return heightOfCell;
}

- (void)tableView:(UITableView *)tableView didDeselectRowAtIndexPath:(NSIndexPath *)indexPath
{
    switch (indexPath.row)
    {
        case 0: //个人资料
        {
        }
            break;
        case 1: //我的收藏
        {
        }
            break;
        case 2: //我的消息
        {
        }
            break;
        case 3: //我的优惠卷
        {
        }
            break;
        case 4: //我的奖品
        {
        }
            break;
        case 5: //在线抽象
        {
        }
            break;
        case 6: //系统设置
        {
        }
            break;
        default:
            break;
    }
}

@end
