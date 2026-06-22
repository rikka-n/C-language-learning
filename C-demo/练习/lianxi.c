/*
题目描述:编写一函数，由实参传来一个字符串，统计此字符串中字母、数字、空格和其它字符的个数，
在主函数中输入字符串以及输出上述结果。
样例输入:!@#$%^QWERT    1234567
样例输出:5 7 4 6 
*/
#include <stdio.h>
int main()
{
    char str[1024];
    int letter = 0, digit = 0, space = 0, other = 0;

    // 读取整行带空格的字符串：遇到换行符停止，不读入换行
    scanf("%[^\n]", str);

    // 逐字符统计，全部逻辑写在主函数内
    for(int i = 0; str[i] != '\0'; i++)
    {
        if( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') )
            letter++;      // 统计字母
        else if(str[i] >= '0' && str[i] <= '9')
            digit++;       // 统计数字
        else if(str[i] == ' ')
            space++;       // 统计空格
        else
            other++;       // 统计其他字符
    }

    printf("%d %d %d %d", letter, digit, space, other);
    return 0;
}