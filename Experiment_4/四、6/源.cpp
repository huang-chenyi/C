#include<iostream>
#include<string>
using namespace std;
// 声明函数
string changeNum(int num);
// 主函数
int main(void)
{
    int num;
    cout << "输入一个10进制数据:";
    cin >> num;
    string ch = changeNum(num); // 调用函数
    cout << "对应的16进制数为: " << ch << endl; // 输出结果
    return 0;
}
// 定义函数
string changeNum(int num)
{
    if (num == 0)
        return "0"; // 处理0的特殊情况
    string ch = "";
    while (num > 0)
    {
        int temp = num % 16;
        char ch_;
        if (temp < 10)
        {
            ch_ = '0' + temp; // 0-9
        }
        else
        {
            ch_ = 'A' + (temp - 10); // A-F
        }
        ch = ch_ + ch; // 将当前位添加到字符串的前面
        num = num / 16;
    }
    return ch;
}