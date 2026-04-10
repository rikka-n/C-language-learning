#include<stdio.h>
//选择排序
//每次从未排序的部分中选择最小的元素，放到已排序的首位置，直到整个数组排序完成
int main()
{
    int arr[5] = {3,2,4,5,1};
    int len = sizeof(arr) / sizeof(int);
    for(int j = 0 ; j < len - 1 ; j++)//外层循环控制比较的轮数，len-1轮就可以完成排序
    {
        for(int i = j + 1 ; i < len ; i++)//内层循环控制每轮比较的次数，len-j-1次就可以完成每轮的比较
        {
            if(arr[j] > arr[i])//如果前一个元素大于后一个元素，就交换位置
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i = 0 ; i < len ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}