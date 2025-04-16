#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#define stu_num 40 //每个班最多有40个学生
struct Stu
{
    int id;    //学号
    char name[8];  //姓名
    int score;     //成绩
    char tips[20]; //备注
};

void in_put(struct Stu p[], int num);
void out_put(struct Stu p[], int num);
void find(struct Stu p[], int num, int score);
void sort(struct Stu p[], int num);
void swap(struct Stu* a, struct Stu* b);

int main(void)
{
    struct Stu person[stu_num] = { 0 };
    int num = 0;
    printf("请输入学生人数(最多40人):");
    scanf("%d", &num);
    //输入输出
    in_put(person, num);
    printf("\n学生信息\n");
    out_put(person, num);
    //查询
    int query_score;
    printf("\n请输入要查询的分数:");
    scanf("%d", &query_score);
    find(person, num, query_score);
    // 排序
    sort(person, num);
    printf("排序后的成绩：\n");
    out_put(person, num);
    return 0;
}
//定义函数
void in_put(struct Stu p[], int num)
{  //输入函数
    for (int i = 0; i < num; i++)
    {
        printf("请输入第%d个学生的信息学号、姓名、成绩、备注:", i + 1);
        scanf("%d %s %d %s", &p[i].id, &p[i].name, &p[i].score, &p[i].tips);
    }
}
void out_put(struct Stu p[], int num)
{   //输出函数
    for (int i = 0; i < num; i++)
        printf("学生%d\n姓名:%s 学号:%d 成绩:%d\n备注:%s\n", i + 1, p[i].name, p[i].id, p[i].score, p[i].tips);
}
void find(struct Stu p[], int num, int score)
{
    int count = 0;
    printf("分数%d以上或以下的学生信息:\n", score);
    for (int i = 0; i < num; i++)
        if (p[i].score > score || p[i].score < score)
        {   //判断是否学生成绩是否符合条件
            printf("学生%d\n姓名:%s 学号:%d 成绩:%d\n备注:%s\n", i + 1, p[i].name, p[i].id, p[i].score, p[i].tips);
            count++;
        }
    if (count == 0)
        printf("没有找到符合条件的学生。\n");
    printf("\n");
}
void sort(struct Stu p[], int num)
{   //冒泡排序法
    for (int i = 0; i < num - 1; i++)
        for (int j = 0; j < num - 1 - i; j++)
            if (p[j].score > p[j + 1].score)
                swap(&p[j], &p[j + 1]);
}
void swap(struct Stu* a, struct Stu* b)
{
    struct Stu temp = *a;
    *a = *b;
    *b = temp;
}