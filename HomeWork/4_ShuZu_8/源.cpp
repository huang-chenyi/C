#include <stdio.h>
int main()
{
    int ten;
    int two[200]; //�洢��������
    int tmp = 0;
    int tnp = 0;
    printf("������һ��ʮ����������");
    scanf_s("%d", &ten);
    tnp = ten;  //�洢ԭʮ������
    if (ten == 0)  //Ϊ0ʱ�����
    {
        printf("0\n");
        return 0;
    }
    while (ten > 0) //ѭ������2��ֱ��nΪ0
    {
        two[tmp] = ten % 2; //��¼����
        ten = ten / 2;
        tmp++;     //�ƶ�����һλ
    }
    printf("ʮ��������%d�Ķ�������Ϊ:", tnp);//�������������
    for (int i = tmp - 1; i >= 0; i--)
    {
        printf("%d", two[i]);
    }
    printf("\n");
    return 0;
}