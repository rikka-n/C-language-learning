#include<stdio.h>
int order(int arr[] , int len , int num);
int main()
{
    /*
    数组的基本查找
    核心思路：从数组0索引开始依次往后查找
    如果找到了就返回数据对应的索引
    如果没找到就会返回-1
    */
   int  arr[] = {11,22,55,44,49};
   int len = sizeof(arr) / sizeof(int);
   int num = 55;
   int index = order(arr,len,num);
   printf("%d\n",index);
   return 0;
}
int order(int arr[] , int len , int num)
{
    for(int i = 0 ; i < len ; i++)
    {
        if(arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}