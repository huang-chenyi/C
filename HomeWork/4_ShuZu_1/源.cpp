#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 50  // 总人数
#define M 3  // 报数的数字
//声明函数
int number(int n, int m);
//主函数
int main()
{
    int lastPerson = number(N, M);
    if (lastPerson != 0)
        printf("最后留下的是原来第%d号的那位。\n", lastPerson);
    return 0;
}
//定义函数
int number(int n, int m)
{
    int people[N];
    int nowperson = 0;  // 当前报数的人的索引
    int person = n;  // 圈子中剩余的人数
    for (int i = 0; i < n; ++i)
        people[i] = i + 1;  // 初始化编号
    while (person > 1)
    { // 找到第m个人
        for (int i = 0; i < m - 1; ++i)
        {
            nowperson = (nowperson + 1) % n;
            while (people[nowperson] == 0) // 跳过已经出列的人
                nowperson = (nowperson + 1) % n;
        }
        // 移除第m个人
        people[nowperson] = 0;  // 标记为出列
        person--;  // 总人数减1
        // 移动到下一个人
        nowperson = (nowperson + 1) % n;
        while (people[nowperson] == 0) // 跳过已经出列的人
            nowperson = (nowperson + 1) % n;
    }
    // 找到最后剩下的人的编号
    for (int i = 0; i < n; ++i)
        if (people[i] != 0)// 返回最后剩下的人的编号
            return people[i];
}