/*
题目描述:有n个整数，使前面各数顺序向后移m个位置，最后m个数变成前面m个数。
        写一函数：实现以上功能，在主函数中输入n个数和输出调整后的n个数。
输入格式:输入数据的个数n n个整数 移动的位置m
输出格式:移动后的n个数
样例输入:10
        1 2 3 4 5 6 7 8 9 10
        2  
样例输出:9 10 1 2 3 4 5 6 7 8 
*/
#include <stdio.h>
void A(int n);
int main()
{
    int n;
    scanf("%d",&n);
    A(n);
    return 0;
}
void A(int n)
{
    int arr[n];
    int m;
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    int res[n];
    for(int i = 0 ; i < m ; i++)
    {
        res[i] = arr[n-m+i];
    }
    for(int i = 0 ; i < n - m ; i++)
    {
        res[m+i] = arr[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d ",res[i]);
    }
}