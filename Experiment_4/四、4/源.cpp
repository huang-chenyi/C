#include<iostream>
#include<cmath>
using namespace std;
// 声明函数
double y1(double a, double b, double c);
double y2(double a, double b, double c);
double y3(double a, double b, double c);
// 主函数
int main(void)
{
    double a, b, c, x1, x2;
    cout << "输入方程中a,b,c的值:";
    cin >> a >> b >> c;
    if (b * b - 4 * a * c > 0)
    {
        x1 = y1(a, b, c);
        x2 = y1(a, b, c);
    }
    else if (b * b - 4 * a * c == 0)
        x1 = y2(a, b, c);
    else
        x1 = y3(a, b, c);
    // 输出结果
    if (b * b - 4 * a * c > 0)
    {
        cout << "方程有两个不相等的实根：" << x1 << " 和 " << x2 << endl;
    }
    else if (b * b - 4 * a * c == 0)
    {
        cout << "方程有两个相等的实根：" << x1 << endl;
    }
    else
    {
        cout << "方程没有实根。" << endl;
    }

    return 0;
}
// 定义函数
double y1(double a, double b, double c)
{
    return (-b + sqrt(b * b - 4 * a * c)) / (2 * a); 
}
double y2(double a, double b, double c)
{
    return -b / (2 * a);
}
double y3(double a, double b, double c)
{
    return (-b + sqrt(b * b - 4 * a * c)) / (2 * a); 
}