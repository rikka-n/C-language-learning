/*
题目描述:现有有N个学生的数据记录，每个记录包括学号、姓名、三科成绩。 
        编写一个函数input,用来输入一个学生的数据记录。 
        编写一个函数print,打印一个学生的数据记录。 
        在主函数调用这两个函数，读取N条记录输入，再按要求输出。 N<100
输入格式：学生数量N占一行 每个学生的学号、姓名、三科成绩占一行，空格分开。
输出格式：每个学生的学号、姓名、三科成绩占一行，逗号分开。
*/
#include <stdio.h>
#include <string.h>
struct Student
{
    char id[100];
    char name[100];
    int score[3];
};
void input(struct Student *s)
{
    scanf("%s %s %d %d %d",(*s).id, (*s).name, &(*s).score[0], &(*s).score[1], &(*s).score[2]);
}
void print(struct Student *s)
{
    printf("%s,%s,%d,%d,%d\n",(*s).id, (*s).name, (*s).score[0], (*s).score[1], (*s).score[2]);
}
int main()
{
    int N;
    scanf("%d",&N);
    struct Student str[100];//定义一个学生数组，保存多个学生的数据
    for(int i = 0 ; i < N ; i++)
    {
        input(&str[i]);//循环输入学生的每组数据（一组一组输入）
    }
    for(int i = 0 ; i < N ; i++)
    {
        print(&str[i]);//循环输出学生的每组数据（一组一组输出）
    }
    return 0;
}