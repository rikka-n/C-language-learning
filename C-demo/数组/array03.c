#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*生成10个1~100的随机数并存入数组,并且不可以出现相同数字
  1)求所有数的和
  2)求平均数
  3)求数据里小于平均数的个数 */
int repeat(int arr[] , int len , int num);
int main()
{
    //定义数组
    int arr[10] = {0};
    //生成随机数并存到数组里
    srand(time(NULL));
    int len = sizeof(arr) / sizeof(int);//求数组长度
    for(int i = 0 ; i < len ; )
    {
        int num = rand() % 100 + 1;
        //需要判断是否重复，逻辑：如果重复就不执行，反之执行，设置一个函数来判断即可
        if(repeat(arr , len , num))
        {
            arr[i] = num;
            printf("%d\n",arr[i]);
            i++;//只有当不重复时才会执行i++，否则就继续生成随机数直到不重复为止
        }
    }
    //遍历求和
    int sum = 0;
    for(int i = 0 ; i < len ; i++)
    {
        sum = sum + arr[i];
    }
    printf("和：%d\n",sum);
    //求平均值
    double average = sum / (double)len;//强制类型转换，除数必须是double类型，否则结果会被强制转换成int类型，平均值就不准确了
    printf("平均值：%.3f\n",average);
    //求数据里小于平均数的个数
    int rev = 0;
    for(int i = 0 ; i < len ; i++)
    {
        if(arr[i] < average)
        {
            rev++;
        }
    }
    printf("小于平均数的个数为：%d",rev);
    return 0;
}
int repeat(int arr[] , int len , int num)//将num和arr[i]比较，如果重复就返回0
{
    for(int i = 0 ; i < len ; i++)
    {
        if(num==arr[i])
        {
            return 0;//重复返回0
        }
    }
    return 1;//循环结束还没有找到相同值就返回1
}
