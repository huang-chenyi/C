#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//��������
void Swap(char *a, char *b);
int Compare(const char *a, const char *b);
//������
int main() 
{
    char a[100], b[100], c[100];
    printf("����3���ַ���:\n");
    scanf("%s %s %s", a, b, c);
    char *strings[3] = { a, b, c };
    char *temp;
    int i, j;
    //ð�����򣬰��Ӵ�С����
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2 - i; j++) 
            if (Compare(strings[j], strings[j + 1]) < 0) 
            {
                temp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = temp;
            }
    printf("�Ӵ�С�ֱ�Ϊ:%s %s %s\n", strings[0], strings[1], strings[2]);
    return 0;
}
//���庯��
void Swap(char *a, char *b)
{   //�������ַ����е�����
    char temp[100];
    int lengthA = 0, lengthB = 0;
    while (a[lengthA] != '\0') lengthA++;
    while (b[lengthB] != '\0') lengthB++;
    for (int i = 0; i < lengthA; i++) 
        temp[i] = a[i];
    for (int i = 0; i < lengthB; i++) 
        a[i] = b[i];
    for (int i = 0; i < lengthA; i++) 
        b[i] = temp[i];
}
int Compare(const char *a, const char *b)
{   //�Ƚϴ�С
    while (*a != '\0' && *b != '\0')
    {
        if (*a < *b)
            return -1;
        if (*a > *b)
            return 1;
        a++;
        b++;
    }
    if (*a == '\0' && *b != '\0')
        return -1;
    if (*a != '\0' && *b == '\0')
        return 1;
    return 0;
}