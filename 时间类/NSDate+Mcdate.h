//
//  NSDate+Mcdate.h
//  时间类
//
//  Created by ios-4 on 15/12/17.
//  Copyright © 2015年 55like. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Mcdate)
/**
 *  根据秒返回时间
 *
 *  @param seconds 秒数
 *
 *  @return 时间字符串
 */
+ (NSString *)dateWithSeconds:(NSUInteger)seconds;

/**
 *  获取当前的时间
 */
+(NSString*)getCurrentTimeWwithdateformatter:(NSString*)dateformatter;

/**
 *  字符串转NSDate
 *
 *  @param theTime 字符串时间
 *  @param format  转化格式 如yyyy-MM-dd HH:mm:ss,即2015-07-15 15:00:00
 *
 *  @return <#return value description#>
 */
+ (NSDate *)dateFromString:(NSString *)timeStr
                    format:(NSString *)format;

/**
 *  NSDate转时间戳
 *
 *  @param date 字符串时间
 *
 *  @return 返回时间戳
 */
+ (NSInteger)cTimestampFromDate:(NSDate *)date;

/**
 *  字符串转时间戳
 *
 *  @param theTime 字符串时间
 *  @param format  转化格式 如yyyy-MM-dd HH:mm:ss,即2015-07-15 15:00:00
 *
 *  @return 返回时间戳的字符串
 */
+(NSInteger)cTimestampFromString:(NSString *)timeStr
                          format:(NSString *)format;


/**
 *  时间戳转字符串
 *
 *  @param timeStamp 时间戳
 *  @param format    转化格式 如yyyy-MM-dd HH:mm:ss,即2015-07-15 15:00:00
 *
 *  @return 返回字符串格式时间
 */
+ (NSString *)dateStrFromCstampTime:(NSInteger)timeStamp
                     withDateFormat:(NSString *)format;

/**
 *  NSDate转字符串
 *
 *  @param date   NSDate时间
 *  @param format 转化格式 如yyyy-MM-dd HH:mm:ss,即2015-07-15 15:00:00
 *
 *  @return 返回字符串格式时间
 */
+ (NSString *)datestrFromDate:(NSDate *)date
               withDateFormat:(NSString *)format;
#pragma mark---项目需要的
- (BOOL)isToday;

+ (NSDate *)dateStartOfDay:(NSDate *)date;

/**
 Adjust firstDate and secondDate is in the same day or not.
 **/
+ (BOOL)isSameDayWithDate:(NSDate*)firstDate andDate:(NSDate*)secondDate;

+ (BOOL)isSameDayWithTime:(NSTimeInterval )firstTime andTime:(NSTimeInterval )secondTime;
/**
 Return the 0 o'clock time of the "date".
 **/
+ (NSDate*)acquireTimeFromDate:(NSDate*)date;

/**
 Acquire the week index from date.
 **/
+ (NSInteger)acquireWeekDayFromDate:(NSDate*)date;

- (NSInteger)day;
- (NSInteger)month;
- (NSInteger)year;

/* 从时间戳获取特定格式的时间字符串 */
+ (NSString *)stringWithTimestamp:(NSTimeInterval)tt format:(NSString *)format;
@end
