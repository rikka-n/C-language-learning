/*
题目描述:有N个学生，每个学生的数据包括学号、姓名、3门课的成绩，
        从键盘输入N个学生的数据，要求打印出3门课的总平均成绩，
        以及最高分的学生的数据（包括学号、姓名、3门课成绩）
输入格式：学生数量N占一行每个学生的学号、姓名、三科成绩占一行，空格分开。
输出格式：各门课的平均成绩 最高分的学生的数据（包括学号、姓名、3门课成绩）
*/
#include <stdio.h>
struct Student
{
    char id[100];
    char name[100];
    int score[3];
};
int main()
{
    int n ;
    scanf("%d",&n);
    struct Student str[100];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%s %s %d %d %d",str[i].id,str[i].name,&str[i].score[0],&str[i].score[1],&str[i].score[2]);
    }
    int score1 = 0,score2 = 0,score3 = 0;
    for(int i = 0 ; i < n ; i++)
    {
        score1 += str[i].score[0];
        score2 += str[i].score[1];
        score3 += str[i].score[2];
    }
    double avg1 = (double)score1 / n;
    double avg2 = (double)score2 / n;
    double avg3 = (double)score3 / n;
    int max_idx = 0;
    int max_total = str[0].score[0] + str[0].score[1] + str[0].score[2];
    for(int i = 1 ; i < n ; i++)
    {
        int total = str[i].score[0] + str[i].score[1] + str[i].score[2];
        if(total > max_total)
        {
            max_idx = i;
            max_total = total;
        }
    }
    printf("%.0f %.0f %.0f\n", avg1, avg2, avg3);
    printf("%s %s %d %d %d",str[max_idx].id,str[max_idx].name,str[max_idx].score[0],str[max_idx].score[1],str[max_idx].score[2]);
    return 0;
}