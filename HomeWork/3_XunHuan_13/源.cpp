#define _CRT_SECURE_NO_WARNINGS    //ȷ��scanf()����������
#include <stdio.h>
int main(void)
{
    int n = 3;
    int i = 0, max = 1, min = 1;
    while (i < n)
    {
        max = 10 * max;  // �ó�����λ�������ֵ����ֵ
        min = max;
        i++;
    }
    max = max - 1;
    min = min / 10;  // ȷ������λ�������ֵ������Сֵ
    printf("С��999����������ˮ�ɻ���Ϊ��");//���Ƹ�ʽ
    for (int num = min; num < max; num++)
    {
        int sum = 0;    // ��ʼ��sumΪ0
        int tmp = num;
        while (tmp)
        {
            int shu = tmp % 10;  // ȡ����ǰ���ݵĸ�λ��
            int power = 1;
            for (int j = 0; j < n; j++)
            {
                power = power * shu;
            }
            sum = sum + power;  // �ۼӸ�λ���ֵ�n�η�
            tmp = tmp / 10;
        }
        if (num == sum && num != 153)  // �Ƚ�num��sum
            printf("%d ", num);
    }
    printf("\n"); //��ʽ����
    return 0;
}