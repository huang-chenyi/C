#include <stdio.h>
void main()
{
    int a, b;
    unsigned c, d;
    long e, f;  //定义变量
    a = 65580;
    b = -40000;
    e = 65535;
    f = 65580;  //赋初值
    c = a;
    d = b;
    printf(" % d, % d\n", a, b);
    printf(" % u, % u\n", a, b);
    printf(" % u, % u\n", c, b);
    //输出数值
    c = a = e;
    d = b = f;
    //更替变量的值
    printf(" % d, % d\n", a, b);
    printf(" % u, % u\n", c, d);
    //输出数值
}

