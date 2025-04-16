#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//定义链表节点结构
struct Link
{
    int i;
    struct Link* next;
};
//声明函数
struct Link* creat(struct Link* head, int n);
struct Link* insert(struct Link* head, int n);
struct Link* deletee(struct Link* head, int n);
void modify(struct Link* head, int pos, int n);
struct Link* find(struct Link* head, int n);
void printList(struct Link* head);
//主函数
int main()
{
    struct Link* head = NULL;
    //创建链表
    int length;
    printf("初始化链表长度:");
    scanf("%d", &length);
    head = creat(head, length);
    //打印初始链表
    printf("初始链表数据:");
    printList(head);
    //插入节点
    int in;
    printf("请输入要插入的数据:");
    scanf("%d", &in);
    head = insert(head, in);
    printf("插入数据后:");
    printList(head);
    //删除节点
    int dele;
    printf("请输入要删除的数据:");
    scanf("%d", &dele);
    head = deletee(head, dele);
    printf("删除数据后:");
    printList(head);
    //修改节点值
    int change1, change2;
    printf("请输入要修改数据的节点号码以及新数据:");
    scanf("%d %d", &change1, &change2);
    modify(head, change1, change2);
    printf("修改节点后:");
    printList(head);
    //查找节点
    int num;
    printf("请输入要查找的数据:");
    scanf("%d", &num);
    struct Link* found = find(head, num);
    if (found)
        printf("在链表中找到结果\n");
    else
        printf("未找到匹配的结果\n");
    //释放链表内存
    struct Link* temp;
    while (head)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    return 0;
}
//创建链表并初始化节点
struct Link* creat(struct Link* head, int n)
{
    struct Link* p = NULL, * q;
    for (int i = 0; i < n; i++)
    {
        q = (struct Link*)malloc(sizeof(struct Link));
        printf("请输入第%d个数据:", i + 1);
        scanf("%d", &q->i);
        q->next = NULL;
        if (head == NULL)
            head = q;
        else
            p->next = q;
        p = q;
    }
    return head;
}
//在链表末尾插入新节点
struct Link* insert(struct Link* head, int n)
{
    struct Link* new_node = (struct Link*)malloc(sizeof(struct Link));
    new_node->i = n;
    new_node->next = NULL;
    if (!head)
        return new_node;
    struct Link* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = new_node;
    return head;
}
//删除节点
struct Link* deletee(struct Link* head, int n)
{
    if (!head)
        return head;
    if (head->i == n)
    {
        struct Link* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    struct Link* temp = head;
    struct Link* prev = NULL;
    while (temp && temp->i != n)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
        return head;
    prev->next = temp->next;
    free(temp);
    return head;
}
//根据位置修改节点值
void modify(struct Link* head, int pos, int n)
{
    if (!head)
        return;
    struct Link* temp = head;
    for (int i = 0; temp && i < pos - 1; i++)
        temp = temp->next;
    if (temp)
        temp->i = n;
    else
        printf("超出范围\n");
}
// 根据值查找节点
struct Link* find(struct Link* head, int n)
{
    struct Link* temp = head;
    while (temp)
    {
        if (temp->i == n)
            return temp;
        temp = temp->next;
    }
    return NULL;
}
// 打印链表
void printList(struct Link* head)
{
    struct Link* temp = head;
    while (temp)
    {
        printf("%d  ", temp->i);
        temp = temp->next;
    }
    printf("\n");
}