#include <stdio.h>
int main()
{
    int ten;
    int two[200]; //存储二进制数
    int tmp = 0;
    int tnp = 0;
    printf("请输入一个十进制整数：");
    scanf_s("%d", &ten);
    tnp = ten;  //存储原十进制数
    if (ten == 0)  //为0时的情况
    {
        printf("0\n");
        return 0;
    }
    while (ten > 0) //循环除以2，直到n为0
    {
        two[tmp] = ten % 2; //记录余数
        ten = ten / 2;
        tmp++;     //移动到下一位
    }
    printf("十进制整数%d的二进制数为:", tnp);//输出二进制数据
    for (int i = tmp - 1; i >= 0; i--)
    {
        printf("%d", two[i]);
    }
    printf("\n");
    return 0;
}