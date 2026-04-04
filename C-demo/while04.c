#include<stdio.h>
int main()
{//这个程序用来计算一个数的平方根，要求输入一个整数，输出它的平方根的整数部分
    int n=0;
    int x;
    scanf("%d",&x);
    while(n*n<=x)//停止条件：n^2要大于x
    {
        n++;//循环，使n*n>x
    }
    printf("%d",n-1);//舍去小数，需要n-1
    return 0;
}