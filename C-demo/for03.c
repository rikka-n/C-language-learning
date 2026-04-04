#include<stdio.h>
int main()
{//这个程序用来计算1^1+2^2+3^3+...+n^n的值
    int n,i,j;
    long long rev=0;//结果太大，要用long long
    printf("请输入一个数字(<=10)");
    scanf("%d",&n);
    for(i=1;i<=n;i++)//外循环，计算累加
    {
        long long pow=1;//定义pow计算n^n
        for(j=1;j<=i;j++)//i=1时，就循环一次；i=2时，循环两次
        {
            pow = pow*i;//i=2时，pow=1*2；再次循环变成pow=2*2
        }
        rev = rev + pow;//累加结果
    }
    printf("%lld",rev);
    return 0;
}