#include <stdio.h>
void main()
{
    int a, b;
    unsigned c, d;
    long e, f;  //�������
    a = 65580;
    b = -40000;
    e = 65535;
    f = 65580;  //����ֵ
    c = a;
    d = b;
    printf(" % d, % d\n", a, b);
    printf(" % u, % u\n", a, b);
    printf(" % u, % u\n", c, b);
    //�����ֵ
    c = a = e;
    d = b = f;
    //���������ֵ
    printf(" % d, % d\n", a, b);
    printf(" % u, % u\n", c, d);
    //�����ֵ
}

