/*
题目描述:写一函数，使输入的一个字符串按反序存放，在主函数中输入并输出反序后的字符串（不包含空格）。
输入格式：一行字符
输出格式：逆序后的字符串
*/
#include <stdio.h>
#include <string.h>
void reverseStr(char str[]);
int main()
{
    char str[1024];
    scanf("%s",str);//str就是一个地址，所以不需要加&
    reverseStr(str);
    printf("%s",str);
    return 0;
}
void reverseStr(char str[])
{
    int len = strlen(str);
    for(int i = 0 ; i < len / 2 ; i++)//首尾对称交换，循环一半次数即可完成逆序
    {
        char temp = str[i];
        str[i] = str[len - 1 -i];
        str[len - 1 -i] = temp;
    }
}
