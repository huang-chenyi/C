#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
    int tmp = 1;
    int n, i;
    int sum = 0;
    printf("请输入n的值：");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        tmp = 1; // 每次循环开始时重置tmp为1
        for (int j = 1; j <= i; j++)
        {
            tmp = tmp * j; // 计算i的阶乘
        }
        if (i % 2 == 0)
        {
            sum = sum - tmp; // 减去偶数项
        }
        else
        {
            sum = sum + tmp; // 加上奇数项
        }
    }
    printf("s=%ld\n", sum); // 打印sum的值
    return 0;
}