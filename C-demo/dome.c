#include<stdio.h>
#include<math.h>//数学库
#include<time.h>//时间库
#include<stdlib.h>//随机数
int main()
{
    // double a = pow(2,3);//2^3
    // double b = sqrt(8);//开平方根
    // double c = ceil(12.3);//向上取整
    // double d = floor(12.3);//向下取整
    // int e = abs(-1);//整数绝对值
    // double f = fabs(-1.0);//小数绝对值
    // long g = labs(-19288);//long整数绝对值
    // printf("%lf %lf %lf %lf %d %lf %ld",a,b,c,d,e,f,g);

    // long long res = time(NULL);
    // printf("%lld",res);

    // srand(2);//设置种子，种子决定随机数
    // for(int i = 1;i<=10;i++)
    // {
    // int num = rand();//rand()获取随机数，伪随机数
    // printf("%d\t",num);
    // }

    // srand(time(NULL));//12~87
    // for(int i=1;i<=5;i++)
    // {
    // int num = rand() % 76 + 12;
    // printf("%d\n",num);
    // }

    int n;
    srand(time(NULL));
    int num = rand() % 101 + 1;
    printf("请输入你猜的数字(1~100)：");
    while(n!=num)
    {
        scanf("%d",&n);
        if(n>num)
        {
            printf("好像有点大呢~\n");
        }
        else if(n<num)
        {
            printf("好像有点小呢~\n");
        }
    }
    printf("恭喜您猜中了\n");
    return 0;
}
