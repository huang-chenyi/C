#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
//��������
int filtercopy();
//������
int main()
{   //���ú���ͬʱ����Ƿ����
    if (int a = filtercopy() == 0)
        printf("�ļ� target.txt �ɹ����ƣ�\n");
    return 0;
}
//���庯��
int filtercopy()
{   //��������
    FILE* target, * source;
    int ch;
    source = fopen("D:/�ϴ� NCU/�γ����/��̿�/���ʵ���/C++ʵ��ָ����-2020��/ʵ��6_�ṹ���빲������ļ�/source.txt", "r");
    if (source == NULL)
    {
        perror("�޷���Դ�ļ�");
        return 1;
    }
    target = fopen("D:/�ϴ� NCU/�γ����/��̿�/���ʵ���/C++ʵ��ָ����-2020��/ʵ��6_�ṹ���빲������ļ�/target.txt", "w");
    if (target == NULL)
    {
        perror("�޷�����Ŀ���ļ�");
        fclose(source);
        return 1;
    }
    // ��ȡԴ�ļ��е��ַ������Ƶ�Ŀ���ļ�
    while ((ch = fgetc(source)) != EOF)
    {   // ����ַ��Ƿ�Ϊ��ĸ������
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
            fputc(ch, target);
    }
    // �ر��ļ�
    fclose(source);
    fclose(target);
    return 0;
}