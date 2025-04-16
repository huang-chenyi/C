#include<iostream>
using namespace std;

int gcd_; // 存储最大公约数
int lcm_; // 存储最小公倍数

int gcd(int a, int b); // 函数声明
void mul(int a, int b, int gcd_); // 函数声明

int main()
{
    int a, b;
    cout << "请输入两个整数:";
    cin >> a >> b; // 输入两个整数
    gcd(a, b); // 计算最大公约数
    cout << a << "和" << b << "的最大公约数为:" << gcd_ << endl;
    mul(a, b, gcd_); // 计算最小公倍数
    cout << a << "和" << b << "的最小公倍数为:" << lcm_ << endl;
    return 0;
}

int gcd(int a, int b)
{   //求最大公约数
    if (b == 0)
        return (gcd_ = a); //返回结果
    else
        return gcd(b, a % b);
}
void mul(int a, int b, int gcd_)
{ // 求最小公倍数
    lcm_ = (a / gcd_) * b; //返回结果
}