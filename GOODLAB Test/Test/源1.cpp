#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��������
int str_length(const char* array);
int str_count(const char* main, const char* sub);
//������
int main()
{
    char main_ch[100];
    char sub_ch[100];
    printf("���������ַ���: "); //�������ַ���
    scanf("%s",main_ch); //��ȡ���ַ���
    printf("������Ҫͳ�Ƶ����ַ���: ");
    scanf("%s", sub_ch); //��ȡ���ַ���
    int count = str_count(main_ch, sub_ch); //���ú����������ַ������ִ���
    printf("���ַ��� '%s' ���ַ����г��ֵĴ���Ϊ: %d\n", sub_ch, count); //������
    return 0;
}
//���庯��
int str_length(const char* array)
{
    int length = 0;
    while (array[length] != '\0')//�����ַ���ֱ���������ַ�
        length++;
    return length;
}
int str_count(const char* main, const char* sub)
{
    int mainLength = str_length(main);
    int subLength = str_length(sub);
    int count = 0;
    for (int i = 0; i <= mainLength - subLength; i++)
    {
        int found = 1;
        for (int j = 0; j < subLength; j++)
        {    //�������ַ���
            if (main[i + j] != sub[j])
            { //��ǰ�ַ���ƥ��
                found = 0;
                break;
            }
        }
        if (found)
        {
            count++; //���Ӽ���
            i += subLength - 1; //������ƥ������ַ���
        }
    }
    return count; //�������ַ������ִ���
}