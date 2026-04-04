#include <stdio.h>

int main()
{//这个程序用来计算两个整数的商和余数，要求输入一个被除数和一个除数，输出商和余数
    int dividend,divisor,n=0;//11-3=8.8-3=5，5-3=2，2-3=-1<0
    printf("请输入一个被除数与除数（逗号隔开）：");
    scanf("%d,%d",&dividend,&divisor);
    while(dividend>=divisor)//用被除数不断减除数，记录减的次数n，余数即为循环停止后的被除数（dividend）
    {
        dividend = dividend - divisor;
        n++;
    }
    printf("商：%d\n余：%d\n",n,dividend);
    return 0;
}