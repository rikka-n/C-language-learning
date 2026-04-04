#include<stdio.h>
/*题目：判断输入的n是否为2的幂次数
  原理：n不断除于2，最终得到1*/
int main()
{
    int n;
    scanf("%d",&n);
    //n除2不断循环，直到n>1 && n%2==0
    while(n>1 && n%2==0)
    {
        n=n/2;//如果成立，n最终为1，执行下面的if
    }
    //判断n是否为2的幂次数，
    if(n==1)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}