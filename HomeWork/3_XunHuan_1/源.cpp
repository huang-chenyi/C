//有一个分数序列：2/1，3/2，5/3，8/5，13/8，……编程求这个序列的前20项之和。
#include<stdio.h>
int main()
{
    double  sum = 0;
    int x, i, m = 2, n = 1;      //定义变量
    for (i = 1; i <= 20; i++)     //创建循环
    {
        sum = sum + (double)m / n;   //进行数值的累加
        x = m + n;
        n = m;                          //更新分母
        m = x;                          //更新分子
    }
    printf("数列的前20项和为：%4f\n", sum);  //打印结果
    return 0;
}
