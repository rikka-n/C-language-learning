/*
题目描述:输入三个字符串，按由小到大的顺序输出
输入格式：3行字符串
输出格式：按照从小到大输出成3行
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[3][100],temp[100];
    for(int i = 0 ; i < 3 ; i++)
    {
        scanf("%s",str[i]);
    }
    //strcmp的细节：
    //比较规则：从两个字符串的第 0 个字符开始，逐个对应字符按 ASCII 码值比较
    //完全一样(顺序和内容)：0    str1>str2:大于 0 的整数     str1<str2:小于 0 的整数
    if (strcmp(str[0], str[1]) > 0)
    {    
        strcpy(temp,str[0]);
        strcpy(str[0],str[1]);
        strcpy(str[1],temp);
    }
    if (strcmp(str[0], str[2]) > 0)
    {    
        strcpy(temp,str[0]);
        strcpy(str[0],str[2]);
        strcpy(str[2],temp);
    }
    if (strcmp(str[1], str[2]) > 0)
    {    
        strcpy(temp,str[1]);
        strcpy(str[1],str[2]);
        strcpy(str[2],temp);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n",str[i]);
    }
    return 0;
}