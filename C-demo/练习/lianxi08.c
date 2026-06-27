/*
题目描述:写一函数，将一个字符串中的元音字母复制到另一个字符串，然后输出。
输入格式：一行字符串
输出格式：顺序输出其中的元音字母（aeiou）
*/
#include <stdio.h>
void getVowel(char str1[] , char str2[]);
int main()
{
    char str1[100];
    char str2[100];
    scanf("%s",str1);
    getVowel(str1 , str2);
    printf("%s",str2);
    return 0;
}
void getVowel(char str1[] , char str2[])
{
    int i = 0,j = 0;
    while(str1[i] != '\0')
    {
        if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u')
        {
            str2[j++] = str1[i];
        }
        i++;
    }
    str2[j] = '\0';
}
