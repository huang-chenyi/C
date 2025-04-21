#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[12];
    printf("请输入一串字符");


    //fgets(a, sizeof(a), stdin);  ---基础用法
    //gets(a);  ---淘汰用法
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