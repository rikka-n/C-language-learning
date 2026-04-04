#include<stdio.h>
int main()
{//这个程序用来判断一个数是否为回文数，回文数是指正着读和反着读都一样的数，如12321
    int number;
    int rev=0;
    printf("请输入一个整数：");
    scanf("%d",&number);
    int number1=number;//定义变量number1记录number初始值
    while(number!=0)
    {
        int temp = number%10;//提取number的个位数
        number = number/10;//去掉个位数，123->12
        rev = rev*10 + temp;//将number的个，十，百...一个个加入rev中
    }
    if(number1==rev)//判断是否为回文数
    {
        printf("%d是回文数",number1);
    }
    else
    {
        printf("%d不是回文数",number1);
    }
    return 0;
}