#include<stdio.h>
int main()
{
    int num[] = { 12, 5, 56, 15, 19, 52, 34, 90 };
    int length = sizeof(num) / sizeof(num[0]);
    int* p = num;
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {   //相邻元素两两比较
            if (p[j] < p[j + 1])
            {  //元素值交换
                int temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
    printf("排序后数组:");
    for (int i = 0; i < length; i++, p++)
        printf("%d ", *p);
}