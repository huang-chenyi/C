#include<stdio.h>
#include<string>
#include<time.h>
#include<stdlib.h>
#define length 120
int main(void)
{
    int num1[length], num2[length];
    int sum[length + 1] = { 0 };
    int temp = 0;// ��ʼ��Ϊ0

    srand((unsigned)time(NULL));
    for (int i = 0; i < length; i++)
    {
        // ���������
        num1[i] = rand() % 10;
        num2[i] = rand() % 10;
    }

    // ��ֹ���ɵ�����λ��0
    if (num1[0] == 0) num1[0] = rand() % 10 + 1;
    if (num2[0] == 0) num2[0] = rand() % 10 + 1;
    for (int i = length - 1; i >= 0; i--)
    {
        int num = num1[i] + num2[i] + temp;
        if (num < 10)
        {
            temp = 0;
            sum[i + 1] = num;
        }
        else
        {
            temp = 1;
            sum[i + 1] = num - 10;
        }
    }

    if (temp != 0)
    {
        sum[0] = temp; // �������λ�Ľ�λ
    }

    int j = 1;
    printf("��һ����:\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d", num1[i]);
        j++;
        if (j % 50 == 0)
            printf("\n");
    }
    printf("\n");

    int k = 1;
    printf("�ڶ�����:\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d", num2[i]);
        k++;
        if (k % 50 == 0)
            printf("\n");
    }
    printf("\n");

    printf("��ӽ��Ϊ:");
    for (int i = 0; i <= length; i++)
    { // �����λ�����λ��ӡ
        if (i == 0 && sum[i] == 0) continue; // �������λ��0
        printf("%d", sum[i]);
    }
    printf("\n");

    return 0;
}