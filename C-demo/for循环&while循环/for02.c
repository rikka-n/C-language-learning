#include<stdio.h>
int main()
{//这个程序用来计算1到n之间的质数个数，要求输入一个整数n，输出1到n之间的质数个数
    int n,i,j;//n为范围，i为所判断的质数
    int countA=0;
    printf("请输入一个数字表示范围的max(n>0):");
    scanf("%d",&n);
    for(i=2;i<=n;i++)//外循环，从i一直到n，用内循环判断i是否为质数
    {
        int count=0;//在循环内定义一个计数器，确保内循环开始时都为0，用于内循环的if
        for(j=2;j<i;j++)//从2开始就可以排除1，j<i就可以排除i本身
        {
            if(i%j==0)//如果不是质数，i%j==0
            {
                count++;//此时count+1
                break;//如果i不是质数，count就不为0，跳出内循环，不再判断i是否能被其他数整除了
            }
        }
        if(count==0)//如果i不是质数，这里的if不成立，countA不变，反之+1
        {
            countA++;
        }
    }
    printf("%d",countA);//打印结果
    return 0;
}