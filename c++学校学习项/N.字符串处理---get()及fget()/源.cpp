#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[12];
    printf("������һ���ַ�");


    //fgets(a, sizeof(a), stdin);  ---�����÷�
    //gets(a);  ---��̭�÷�
    char ch = getchar();
    int i;
    for (i = 0; i < 11; i++)
    {
        a[i] = ch;
        ch = getchar();
        if(ch == '\0')
        break;
    }
    a[i] = '\0';


    printf("%s\n", a);
    puts(a);
    return 0;
}