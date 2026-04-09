#include <stdio.h>

int main()
{//这个程序用来找出1到n之间各位数字之和为15的数
    int number;
    int n;
    printf("请输入一个数字表示最大值：");
    scanf("%d", &n);
    for(number = 1; number<=n;number++)//循环number从1到n
    {
        int sum = 0;//sum用来保存number的各位数字之和
        int temp = number;//保存number的初始值
        while(temp != 0)//当temp不为0时，执行循环
        {
            sum = sum + temp % 10;
            temp = temp / 10;
        }
        if(sum == 15)
        {
            printf("%d\n",number);//输出符合条件的数
        }
    }
    return 0;
}