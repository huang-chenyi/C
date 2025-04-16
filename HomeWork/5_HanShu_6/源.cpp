#include <iostream>
#include <string>
using namespace std;
// 声明函数
string changeNum(int num_10, int num_jinzhi);
// 主函数
int main()
{
    int num_10, num_jinzhi;
    cout << "请输入一个十进制整数：";
    cin >> num_10;
    cout << "请输入要转换成的进制数：";
    cin >> num_jinzhi;
    string num_other = changeNum(num_10, num_jinzhi);
    cout << "转换为" << num_jinzhi << "进制数为：" << num_other << endl;
    return 0;
}
// 定义函数
string changeNum(int num_10, int num_jinzhi)
{
    if (num_10 == 0)
        return "0"; // 处理0的特殊情况
    string num_other = "";
    bool isNegative = num_10 < 0; // 检查是否为负数
    if (isNegative)
        num_10 = -num_10;
    while (num_10 > 0)
    {// 处理大于9的余数，需要转换为字母
        int remainder = num_10 % num_jinzhi;
        if (remainder >= 10)
            num_other = char('A' + (remainder - 10)) + num_other;
        else
            num_other = char('0' + remainder) + num_other;
        num_10 /= num_jinzhi;
    }
    if (isNegative)
        num_other = "-" + num_other; // 如果是负数，添加负号
    return num_other;
}