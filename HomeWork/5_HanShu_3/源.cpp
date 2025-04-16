#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define Students 10
#define Namelength 50
//��������
int foundStr(const char* str, const char* substr);
//������
int main()
{
    char student_names[Students][Namelength];
    char keyword[Namelength];
    int student_count = 0;
    // ����ѧ������
    printf("������%d��ѧ�������֣�\n", Students);
    for (int i = 0; i < Students && student_count < Students; i++)
    {
        printf("ѧ��%d: ", i + 1);
        if (scanf("%s", student_names[i]) == 1)
            student_count++;
    }
    // ��������ҵ��ַ���
    printf("������Ҫ���ҵ��ַ�����");
    scanf("%s", keyword);
    // ����ģ�����Ҳ�������
    int k = 0;
    printf("���� '%s' ��ѧ�������У�\n", keyword);
    for (int i = 0; i < student_count; i++)
        if (foundStr(student_names[i], keyword))
        {
            printf("%s\n", student_names[i]);
            k = 1;
        }
    if (k == 0)
        printf("��\n");
    return 0;
}
//���庯��
int foundStr(const char* str, const char* substr)
{
    int str_len = 0, substr_len = 0;
    while (str[str_len] != '\0')
        str_len++;
    while (substr[substr_len] != '\0')
        substr_len++;
    // �����ַ������������ַ���
    for (int i = 0; i <= str_len - substr_len; i++)
    {
        int match = 1;
        for (int j = 0; j < substr_len; j++)
            if (str[i + j] != substr[j])
            {
                match = 0;
                break;
            }
        if (match)
            return 1; // �ҵ����ַ���
    }
    return 0; // δ�ҵ����ַ���
}

