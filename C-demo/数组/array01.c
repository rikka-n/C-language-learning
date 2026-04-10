#include<stdio.h>
int main()
{//数组的定义和初始化
    int arr[] = {33,5,22,44,56};//定义一个数组，数组的长度由初始化的元素个数决定

    /*计算数组的长度，sizeof(arr)得到整个数组占用的字节数，
    sizeof(int)得到一个int类型占用的字节数，两者相除得到数组的长度*/
    int len = sizeof(arr) / sizeof(int);
    int max = arr[0];
    for(int i = 1; i<len; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];//更新max的值
        }
    }
    printf("max=:%d\n",max);
    return 0;
}