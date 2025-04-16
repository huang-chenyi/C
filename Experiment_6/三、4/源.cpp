#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
//声明函数
int filtercopy();
//主函数
int main()
{   //调用函数同时检查是否完成
    if (int a = filtercopy() == 0)
        printf("文件 target.txt 成功复制！\n");
    return 0;
}
//定义函数
int filtercopy()
{   //声明变量
    FILE* target, * source;
    int ch;
    source = fopen("D:/南大 NCU/课程相关/编程课/编程实验课/C++实验指导书-2020版/实验6_结构体与共用体和文件/source.txt", "r");
    if (source == NULL)
    {
        perror("无法打开源文件");
        return 1;
    }
    target = fopen("D:/南大 NCU/课程相关/编程课/编程实验课/C++实验指导书-2020版/实验6_结构体与共用体和文件/target.txt", "w");
    if (target == NULL)
    {
        perror("无法创建目标文件");
        fclose(source);
        return 1;
    }
    // 读取源文件中的字符并复制到目标文件
    while ((ch = fgetc(source)) != EOF)
    {   // 检查字符是否为字母或数字
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
            fputc(ch, target);
    }
    // 关闭文件
    fclose(source);
    fclose(target);
    return 0;
}