//
//  ViewController.m
//  时间类
//
//  Created by ios-4 on 15/12/17.
//  Copyright © 2015年 55like. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NSDate*date=[NSDate date];
    //根据总秒数返回时间
    NSLog(@"dateWithSeconds%@",[NSDate dateWithSeconds:142345674]);
    //当前时间
    NSLog(@"currentTime=%@",[NSDate getCurrentTimeWwithdateformatter:@"yyyy-MM-dd"]);
    //距今天时间-系统的-时间是格林威治时间
    NSLog(@"dateWithTimeIntervalSinceNow=%@",[NSDate dateWithTimeIntervalSinceNow:86400]);
    //字符串变成时间
    NSLog(@"%@",[NSDate dateFromString:@"2015-12-19" format:@"yyyy-MM-dd"]);
    //时间转换成时间戳
    NSLog(@"%li",[NSDate cTimestampFromDate:[NSDate date]]);
    //字符串变成时间戳
    NSLog(@"%li",[NSDate cTimestampFromString:@"2015-11-22" format:@"yyyy-MM-dd"]);
    //时间戳变成字符串
    NSLog(@"%@",[NSDate dateStrFromCstampTime:1142345674 withDateFormat:@"yyyy-MM-dd"]);
    //时间变成字符串
    NSLog(@"%@",[NSDate datestrFromDate:[NSDate date] withDateFormat:@"yyyy-MM-dd"]);
    //当月周几
    NSLog(@"%li",[date day]);
    //那一个月
    NSLog(@"%li",[date month]);
    //哪一年
    NSLog(@"%li",[date year]);
    //这个月第一天是周几
    NSLog(@"%li",[date firstWeekdayInThisMonth]);
    //这个月一共几天
    NSLog(@"%li",[date totaldaysInThisMonth]);
    //是否是今天
    NSDate*isOrNotToday=[NSDate dateFromString:@"2015-12-19" format:@"yyyy-MM-dd"];
    NSLog(@"yesOrNO=%d",[isOrNotToday isToday]);
    //两天的时间是否一样
    NSLog(@"sameDay=%d",[isOrNotToday isSameDayWithDate:[NSDate date]]);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
