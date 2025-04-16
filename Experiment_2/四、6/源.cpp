#include<iostream>
using namespace std;
int main(void)
{
    int sum = 1;
    for (int i = 1; i <= 100; i++)//循环100次
    {
        sum *= 12;  //连乘12
        if (sum > 10000)  //控制数据大小，保留后3位数字
        {
            sum = sum % 1000;
        }
    }
    cout << "12^100的末三位数为:" << sum << endl;
    return 0;
}