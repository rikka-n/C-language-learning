#include <stdio.h>

int main()
{//这个程序用来计算在a和b之间（包括a和b）能被6和8同时整除的数的个数，要求输入两个整数a和b，输出满足条件的数的个数
    int a,b,sum=0;
    printf("请输入两个整数：");
    scanf("%d %d",&a,&b);
    for(a;a<=b;a++)//循环找符合条件的数
    {
        if(a%6==0&&a%8==0)  //判断是否符合条件
        {
            sum+=1;//计符合条件的个数
        }
    }
    printf("一共有%d个符合条件的数",sum);
    return 0;
}