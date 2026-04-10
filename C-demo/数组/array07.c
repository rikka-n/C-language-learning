#include<stdio.h>
//二分查找
//优点：速度快
//缺点：数组需要有序
int binarySearch(int arr[] , int len , int num);
int main()
{
    int arr[] = {23,34,36,45,48,69,85,92};
    int len = sizeof(arr) / sizeof(int);
    int num = 44;//输入要找的数字
    int index = binarySearch(arr , len , num);
    printf("%d",index);
    return 0;
}
int binarySearch(int arr[] , int len , int num)
{
    int min = 0;
    int max = len - 1;
    while(min<=max)//当最小位置小于等于最大位置时继续循环
    {
        int mid = (min + max) / 2;//计算中间位置
        if(arr[mid] > num)
        {
            max = mid - 1;//如果中间位置的数大于要找的数，则将最大位置更新为中间位置的前一个位置
        }
        else if(arr[mid] < num)
        {
            min = mid + 1;//如果中间位置的数小于要找的数，则将最小位置更新为中间位置的后一个位置
        }
        else
        {
            return mid;//如果中间位置的数等于要找的数，则mid就是要找的数的位置，返回mid
        }
    }
    return -1;
}