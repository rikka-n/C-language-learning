#include<stdio.h>
//插值查找
//优点：速度比二分快
//缺点：数组需要有序，数据分布均匀
int interpolationSearch(int arr[] , int len , int num);
int main()
{
    int arr[] = {23,34,36,45,48,69,85,92};
    int len = sizeof(arr) / sizeof(int);
    int num = 34;//输入要找的数字
    int index = interpolationSearch(arr , len , num);
    printf("%d",index);
    return 0;
}
int interpolationSearch(int arr[] , int len , int num)
{
    int min = 0;
    int max = len - 1;
    while(min<=max)
    {
        int mid = min + (num - arr[min]) * (max - min) / (arr[max] - arr[min]);//计算插值位置
        if(arr[mid] > num)
        {
            max = mid - 1;//如果插值位置的数大于要找的数，则将最大位置更新为插值位置的前一个位置
        }
        else if(arr[mid] < num)
        {
            min = mid + 1;//如果插值位置的数小于要找的数，则将最小位置更新为插值位置的后一个位置
        }
        else
        {
            return mid;//如果插值位置的数等于要找的数，则mid就是要找的数的位置，返回mid
        }
    }
    return -1;
}