#define _CRT_SECURE_NO_WARNINGS    //确保scanf()的正常运行
#include <stdio.h>
int main(void)
{
    int n = 3;
    int i = 0, max = 1, min = 1;
    while (i < n)
    {
        max = 10 * max;  // 得出给定位数的数字的最大值
        min = max;
        i++;
    }
    max = max - 1;
    min = min / 10;  // 确定给定位数的数字的最大及最小值
    printf("小于999的另外三个水仙花数为：");//控制格式
    for (int num = min; num < max; num++)
    {
        int sum = 0;    // 初始化sum为0
        int tmp = num;
        while (tmp)
        {
            int shu = tmp % 10;  // 取出当前数据的个位数
            int power = 1;
            for (int j = 0; j < n; j++)
            {
                power = power * shu;
            }
            sum = sum + power;  // 累加各位数字的n次方
            tmp = tmp / 10;
        }
        if (num == sum && num != 153)  // 比较num和sum
            printf("%d ", num);
    }
    printf("\n"); //格式控制
    return 0;
}