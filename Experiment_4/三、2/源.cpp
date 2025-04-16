#include<iostream>
using namespace std;

int computNum(int num);//声明函数
int main(void)
{
    int num;
    cout << "输入一个正整数:";
    cin >> num;
    num = computNum(num);//函数处理
    cout << "该正整数的各位数字之和为:" << num << endl;
    return 0;
}
int computNum(int num)
{
    int a;
    int b = 0;
    while (num != 0)
    {
        a = num % 10;//取出各位数字
        b = b + a;//累加各位数字
        num /= 10;//更新数字
    }
    return b;
}
