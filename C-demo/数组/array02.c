#include<stdio.h>
#include<time.h>//时间库
#include<stdlib.h>//随机数库
//生成10个1~100的随机数并存入数组；然后计算总和
int main()
{
    int arr[10] = {0};//数组元素初始化为0
    int len = sizeof(arr) / sizeof(int);//计算数组长度
    srand(time(NULL));//设置随机数种子
    for(int i = 1 ; i < len ; i++)
    {
        arr[i] = rand() % 100 + 1;//生成1~100的随机数并存入数组
    }
    int sum = 0;
    for(int i ; i < len ; i++)
    {
        sum = sum + arr[i];//计算数组元素总和
    }
    printf("%d",sum);
    return 0;
}