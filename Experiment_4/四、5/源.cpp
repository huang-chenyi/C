#include<iostream>
using namespace std;
// 声明函数
int changeNum(char ch[], int length);
// 主函数
int main(void)
{
    char ch[100] = { 0 }; // 存储输入的16进制字符串
    cout << "输入一个16进制数据:";
    cin >> ch;
    int num = changeNum(ch, 100); // 调用函数
    cout << "对应的10进制数为: " << num << endl; // 输出结果
    return 0;
}
// 定义函数
int changeNum(char ch[], int length)
{
    int num_10 = 0; // 用于存储转换后的十进制数
    for (int i = 0; i < length && ch[i] != '\0'; i++)
    {     // 遍历输入的16进制字符串中的每个字符
        int number = 0;
        if (ch[i] >= '0' && ch[i] <= '9')
        { // 如果字符是0-9，直接转换为对应的十进制数值
            number = ch[i] - '0';
        }
        else if (ch[i] >= 'A' && ch[i] <= 'F')
        { // 如果字符是A-F，则转换为10-15的十进制值
            number = 10 + (ch[i] - 'A');
        }
        else if (ch[i] >= 'a' && ch[i] <= 'f')
        { // 如果字符是a-f，则转换为10-15的十进制值
            number = 10 + (ch[i] - 'a');
        }
        num_10 = num_10 * 16 + number;
    }
    return num_10;
}