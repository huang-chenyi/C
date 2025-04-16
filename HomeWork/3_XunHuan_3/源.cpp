#define _CRT_SECURE_NO_WARNINGS    //确保scanf()的正常运行
#include <stdio.h>
int main(void) {
    int n;
    printf("请输入数字的位数(位数大于3)：\n");  // 输入数字的位数
    scanf("%d", &n);
    if (n < 3)
    {
        printf("您输入的数字有误。\n");    // 判断位数是否符合要求
    }
    else
    {
        int i = 0, max = 1, min = 1;
        while (i < n)
        {
            max = 10 * max;  // 得出给定位数的数字的最大值
            min = max;
            i++;
        }
        max = max - 1;
        min = min / 10;  // 确定给定位数的数字的最大及最小值

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
            if (num == sum)  // 比较num和sum
                printf("此范围中的水仙花数有：%d\n", num);
        }
    }
    return 0;
}