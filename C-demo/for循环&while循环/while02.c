#include<stdio.h>
int main()
{//这个程序用来计算一个数翻倍多少次能超过8844430
    double n=0.1;
    int a=0;
    while(n<=8844430)
    {
        a+=1;
        n=n*2;
    }
    printf("折了%d",a);
    return 0;
}