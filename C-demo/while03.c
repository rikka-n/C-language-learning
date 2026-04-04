#include<stdio.h>
int main()
{//这个程序用来将一个整数的各位数字反转输出，如输入123，输出321
    int number;
    scanf("%d",&number);
    int rev = 0;
    while(number!=0)
    {
        //获取number右边的第一位数字
        int temp = number%10;
        //去掉刚刚获取的数字
        number = number/10;
        //把刚刚获取的数字拼接到rev变量当中
        rev = rev*10 + temp;
    }
    printf("%d",rev);
    return 0;
}