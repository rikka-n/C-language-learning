#include<stdio.h>
//数组反转
//1)输入数据   2)遍历数组   3)遍历反转数组
void printArr(int arr[] , int len);
int main()
{
    //定义数组并输入数据
    int arr[5] = {0};
    int len = sizeof(arr) / sizeof(int);
    for(int i = 0 ; i < len ; i++)
    {
        printf("请输入第%d个数据:\n",i+1);
        scanf("%d",&arr[i]);
    }
    //遍历数组,直接调用函数
    printArr(arr , len);
    //反转数组
    int i = 0;
    int j = len - 1;
    while(i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    //遍历反转后数组
    printArr(arr , len);
    return 0;
}

void printArr(int arr[] , int len)
{
    for(int i = 0 ; i < len ; i++)
    {
        printf("%d\n",arr[i]);
    }
}