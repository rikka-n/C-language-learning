#include<stdio.h>
//杨辉三角
int main()
{
    int n;
    int i,j;
    printf("请输入行数(不超过10):");
    scanf("%d",&n);
    int yhArr[10][10];
    for(i = 0 ; i < n ; i++)
    {
        yhArr[i][i] = 1 ;
        yhArr[i][0] = 1;
        for(j = 1 ; j < i ; j++)
        {
            yhArr[i][j] = yhArr[i-1][j-1] + yhArr[i-1][j];
        }
    }
    for(i = 0; i < n; i++)
    {
        for(int k = 0; k < n-i; k++)
        {
            printf("  ");
        }
        for(j = 0; j <= i; j++)
        {
            printf("%4d", yhArr[i][j]);
        }
        printf("\n");
    }
}