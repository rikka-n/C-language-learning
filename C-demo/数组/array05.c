#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
//定义一个数组，存入1~5。要求打乱所有数据的顺序
{
    int arr[5] = {0};
    int len = sizeof(arr) / sizeof(int);
    for(int i = 0 ; i < len ; i++)
    {
        arr[i] = i + 1;
    }
    //定义一个随机数，然后依次将数组里的数据和该随机位置互换即可
    srand(time(NULL));
    for(int i = 0 ; i < len ; i++)
    {
        int temp = rand() % 5;//随机数范围为0~4
        int num = arr[i];//保存当前数据
        arr[i] = arr[temp];//将随机位置的数据放到当前的位置
        arr[temp] = num;//将当前的数据放到随机位置
    }
    for(int i = 0 ; i < len ; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}