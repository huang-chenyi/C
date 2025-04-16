#include <iostream> 
using namespace std;
// 声明函数
int str_length(const char array[]);
int str_count(const char main[], const char sub[]);
// 主函数
int main()
{
    char main[100];
    char sub[100];
    cout << "请输入主字符串: "; //输入主字符串
    cin.getline(main, 100);
    cout << "请输入要统计的子字符串: ";
    cin.getline(sub, 100);    //读取子字符串
    int count = str_count(main, sub); //调用函数计算子字符串出现次数
    cout << "子字符串 '" << sub << "' 在字符串中出现的次数为: " << count << endl; //输出结果
    return 0;
}
// 定义函数
int str_length(const char array[])
{
    int length = 0;
    while (array[length] != '\0') //遍历字符串直到遇到空字符
        length++;
    return length; //返回字符串长度
}
// 定义函数
int str_count(const char main[], const char sub[])
{
    int mainLength = str_length(main);
    int subLength = str_length(sub);
    int count = 0; //初始化计数为0
    for (int i = 0; i <= mainLength - subLength; i++)
    {
        bool found = true;
        for (int j = 0; j < subLength; j++) //遍历子字符串
        {
            if (main[i + j] != sub[j]) //当前字符不匹配
            {
                found = false;
                break; //跳出内层循环
            }
        }
        if (found) //找到匹配
        {
            count++; //增加计数
            i += subLength - 1; //跳过已匹配的子字符串
        }
    }
    return count; //返回子字符串出现次数
}