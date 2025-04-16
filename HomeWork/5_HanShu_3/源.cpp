#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define Students 10
#define Namelength 50
//声明函数
int foundStr(const char* str, const char* substr);
//主函数
int main()
{
    char student_names[Students][Namelength];
    char keyword[Namelength];
    int student_count = 0;
    // 输入学生姓名
    printf("请输入%d个学生的名字：\n", Students);
    for (int i = 0; i < Students && student_count < Students; i++)
    {
        printf("学生%d: ", i + 1);
        if (scanf("%s", student_names[i]) == 1)
            student_count++;
    }
    // 输入待查找的字符串
    printf("请输入要查找的字符串：");
    scanf("%s", keyword);
    // 进行模糊查找并输出结果
    int k = 0;
    printf("包含 '%s' 的学生姓名有：\n", keyword);
    for (int i = 0; i < student_count; i++)
        if (foundStr(student_names[i], keyword))
        {
            printf("%s\n", student_names[i]);
            k = 1;
        }
    if (k == 0)
        printf("无\n");
    return 0;
}
//定义函数
int foundStr(const char* str, const char* substr)
{
    int str_len = 0, substr_len = 0;
    while (str[str_len] != '\0')
        str_len++;
    while (substr[substr_len] != '\0')
        substr_len++;
    // 遍历字符串，查找子字符串
    for (int i = 0; i <= str_len - substr_len; i++)
    {
        int match = 1;
        for (int j = 0; j < substr_len; j++)
            if (str[i + j] != substr[j])
            {
                match = 0;
                break;
            }
        if (match)
            return 1; // 找到子字符串
    }
    return 0; // 未找到子字符串
}

