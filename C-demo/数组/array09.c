#include<stdio.h>
//冒泡排序
//相邻元素两两比较，大的放右边，小的放左边，然后依次循环即可排序
int main()
{
    int arr[5] = {3,2,4,5,1};
    int len = sizeof(arr) / sizeof(int);
    for(int j = 0 ; j < len - 1 ; j++)//外层循环控制比较的轮数，len-1轮就可以完成排序
    {
        for(int i = 0 ; i < len - 1 - j; i++)//内层循环控制每轮比较的次数，len-1-j次就可以完成每轮的比较
        {
            if(arr[i] > arr[i+1])//如果前一个元素大于后一个元素，就交换位置
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    for(int i = 0 ; i < len ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}