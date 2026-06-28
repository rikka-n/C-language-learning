/*
题目描述:定义一个结构体变量（包括年、月、日）。计算该日在本年中是第几天，注意闰年问题。
输入格式：年月日
输出格式：当年第几天
*/
#include <stdio.h>
struct Date {
    int year;
    int month;
    int day;
};
// 判断闰年：闰年返回1，平年返回0
int isLeap(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int main()
{
    struct Date date;
    // 输入年月日
    scanf("%d %d %d",&date.year,&date.month,&date.day);
    //平年的月份天数表
    int month_day[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int total = 0;
    // 累加前month-1个月的天数
    for(int i = 0 ; i < date.month - 1 ; i++)
    {
        total = total + month_day[i];
    }
    // 闰年且月份超过2月，补上2月多出的1天
    if(isLeap(date.year) && date.month >= 2)
    {
        total = total + 1;
    }
    // 加上当月的日期
    total = total + date.day;
    
    printf("%d",total);
    return 0;
}