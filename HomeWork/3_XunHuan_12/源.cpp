#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
    int tmp = 1;
    int n, i;
    int sum = 0;
    printf("������n��ֵ��");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        tmp = 1; // ÿ��ѭ����ʼʱ����tmpΪ1
        for (int j = 1; j <= i; j++)
        {
            tmp = tmp * j; // ����i�Ľ׳�
        }
        if (i % 2 == 0)
        {
            sum = sum - tmp; // ��ȥż����
        }
        else
        {
            sum = sum + tmp; // ����������
        }
    }
    printf("s=%ld\n", sum); // ��ӡsum��ֵ
    return 0;
}