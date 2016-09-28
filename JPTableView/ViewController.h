//
//  ViewController.h
//  JPTableView
//
//  Created by Student P_05 on 13/09/16.
//  Copyright © 2016 felix. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>
{
    UITableView *tableView;
    NSArray *iosStudents;
    NSArray *androidStudents;
    UILabel *myLabel;
}


@end

