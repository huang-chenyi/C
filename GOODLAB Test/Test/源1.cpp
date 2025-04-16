#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//声明函数
int str_length(const char* array);
int str_count(const char* main, const char* sub);
//主函数
int main()
{
    char main_ch[100];
    char sub_ch[100];
    printf("请输入主字符串: "); //输入主字符串
    scanf("%s",main_ch); //读取主字符串
    printf("请输入要统计的子字符串: ");
    scanf("%s", sub_ch); //读取子字符串
    int count = str_count(main_ch, sub_ch); //调用函数计算子字符串出现次数
    printf("子字符串 '%s' 在字符串中出现的次数为: %d\n", sub_ch, count); //输出结果
    return 0;
}
//定义函数
int str_length(const char* array)
{
    int length = 0;
    while (array[length] != '\0')//遍历字符串直到遇到空字符
        length++;
    return length;
}
int str_count(const char* main, const char* sub)
{
    int mainLength = str_length(main);
    int subLength = str_length(sub);
    int count = 0;
    for (int i = 0; i <= mainLength - subLength; i++)
    {
        int found = 1;
        for (int j = 0; j < subLength; j++)
        {    //遍历子字符串
            if (main[i + j] != sub[j])
            { //当前字符不匹配
                found = 0;
                break;
            }
        }
        if (found)
        {
            count++; //增加计数
            i += subLength - 1; //跳过已匹配的子字符串
        }
    }
    return count; //返回子字符串出现次数
}