//
//  MeViewController.h
//  Waibao001
//
//  Created by Abyss on 15/7/8.
//  Copyright (c) 2015年 Roger Abyss. All rights reserved.
//

@interface MeViewController : BaseViewController<CRHomeDelegate>
@property(nonatomic,strong)NSString *viewTitle;

@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) IBOutlet UIView *headerView;

@property (weak, nonatomic) IBOutlet UIImageView *header;
@property (weak, nonatomic) IBOutlet UILabel *name;
@end
