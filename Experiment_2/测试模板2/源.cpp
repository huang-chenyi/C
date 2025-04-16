#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a[2] = { 0 };
    for (int i = 0; i < 2; i++)
        scanf_s("%d", &a[i]);
    printf("%d", a[1]);
    return 0;
}
