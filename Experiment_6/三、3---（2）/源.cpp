#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define stu_num 40 //每个班最多有40个学生
struct Stu 
{ //定义链表节点结构体
    int id;            //学号
    char name[8];      //姓名
    int score;         //成绩
    char tips[20];     //备注
    struct Stu* next;  //指向下一个节点的指针
};
//函数声明
struct Stu* createList(int num);
void in_put(struct Stu *head, int num);
void out_put(struct Stu *head, int num);
void find(struct Stu *head, int num, int score);
void sort(struct Stu **head);
void swap(struct Stu **a, struct Stu **b);
void insert_sorted(struct Stu **head, struct Stu *new_node);
struct Stu *create_node(int id, char *name, int score, char *tips);
//主函数
int main(void) 
{
    int num = 0;
    printf("请输入学生人数(最多40人):");
    scanf("%d", &num);
    // 创建链表并输入数据
    struct Stu* head = createList(num);
    in_put(head, num);
    // 输出链表数据
    printf("\n学生信息\n");
    out_put(head, num);
    // 查询
    int query_score;
    printf("\n请输入要查询的分数:");
    scanf("%d", &query_score);
    find(head, num, query_score);
    // 排序
    sort(&head);
    printf("排序后的成绩：\n");
    out_put(head, num);
    // 释放链表内存
    struct Stu *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    return 0;
}
// 创建链表
struct Stu* createList(int num) 
{
    struct Stu* head = NULL;
    for (int i = 0; i < num; i++) 
    {
        char name[] = ""; // 可修改的字符数组
        char tips[] = ""; // 可修改的字符数组
        struct Stu *new_node = create_node(0, name, 0, tips);
        if (head == NULL)
            head = new_node;
        else 
        {
            struct Stu *current = head;
            while (current->next != NULL)
                current = current->next;
            current->next = new_node;
        }
    }
    return head;
}
// 创建新节点
struct Stu *create_node(int id, char *name, int score, char *tips) 
{
    struct Stu *new_node = (struct Stu*)malloc(sizeof(struct Stu));
    new_node->id = id;
    strcpy(new_node->name, name);
    new_node->score = score;
    strcpy(new_node->tips, tips);
    new_node->next = NULL;
    return new_node;
}
// 输入函数
void in_put(struct Stu *head, int num) 
{
    struct Stu *current = head;
    for (int i = 0; i < num; i++, current = current->next) 
    {
        printf("请输入第%d个学生的信息学号、姓名、成绩、备注:", i + 1);
        scanf("%d %s %d %s", &current->id, current->name, &current->score, current->tips);
    }
}
// 输出函数
void out_put(struct Stu *head, int num) 
{
    struct Stu *current = head;
    for (int i = 0; i < num && current != NULL; i++, current = current->next)
        printf("学生%d\n姓名:%s 学号:%d 成绩:%d\n备注:%s\n", i + 1, current->name, current->id, current->score, current->tips);
}
// 查找函数
void find(struct Stu *head, int num, int score) 
{
    int count = 0;
    printf("分数%d以上或以下的学生信息:\n", score);
    struct Stu *current = head;
    while (current != NULL && num-- > 0) {
        if (current->score > score || current->score < score)
        {
            printf("学生%d\n姓名:%s 学号:%d 成绩:%d\n备注:%s\n", current->id, current->name, current->id, current->score, current->tips);
            count++;
        }
        current = current->next;
    }
    if (count == 0)
        printf("没有找到符合条件的学生。\n");
    printf("\n");
}
// 插入排序函数
void sort(struct Stu **head) 
{
    if (*head == NULL || (*head)->next == NULL)
        return;
    struct Stu *sorted = NULL;
    struct Stu *current = *head;
    while (current != NULL)
    {
        struct Stu *next = current->next;
        insert_sorted(&sorted, current);
        current = next;
    }
    *head = sorted;
}
// 插入排序的辅助函数
void insert_sorted(struct Stu **head, struct Stu *new_node) 
{
    if (*head == NULL || (*head)->score >= new_node->score)
    {
        new_node->next = *head;
        *head = new_node;
    }
    else 
    {
        struct Stu *current = *head;
        while (current->next != NULL && current->next->score < new_node->score)
            current = current->next;
        new_node->next = current->next;
        current->next = new_node;
    }
}
// 交换函数
void swap(struct Stu **a, struct Stu **b)
{
    struct Stu *temp = *a;
    *a = *b;
    *b = temp;
}