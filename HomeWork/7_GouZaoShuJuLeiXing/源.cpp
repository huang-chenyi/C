#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//��������ڵ�ṹ
struct Link
{
    int i;
    struct Link* next;
};
//��������
struct Link* creat(struct Link* head, int n);
struct Link* insert(struct Link* head, int n);
struct Link* deletee(struct Link* head, int n);
void modify(struct Link* head, int pos, int n);
struct Link* find(struct Link* head, int n);
void printList(struct Link* head);
//������
int main()
{
    struct Link* head = NULL;
    //��������
    int length;
    printf("��ʼ��������:");
    scanf("%d", &length);
    head = creat(head, length);
    //��ӡ��ʼ����
    printf("��ʼ��������:");
    printList(head);
    //����ڵ�
    int in;
    printf("������Ҫ���������:");
    scanf("%d", &in);
    head = insert(head, in);
    printf("�������ݺ�:");
    printList(head);
    //ɾ���ڵ�
    int dele;
    printf("������Ҫɾ��������:");
    scanf("%d", &dele);
    head = deletee(head, dele);
    printf("ɾ�����ݺ�:");
    printList(head);
    //�޸Ľڵ�ֵ
    int change1, change2;
    printf("������Ҫ�޸����ݵĽڵ�����Լ�������:");
    scanf("%d %d", &change1, &change2);
    modify(head, change1, change2);
    printf("�޸Ľڵ��:");
    printList(head);
    //���ҽڵ�
    int num;
    printf("������Ҫ���ҵ�����:");
    scanf("%d", &num);
    struct Link* found = find(head, num);
    if (found)
        printf("���������ҵ����\n");
    else
        printf("δ�ҵ�ƥ��Ľ��\n");
    //�ͷ������ڴ�
    struct Link* temp;
    while (head)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    return 0;
}
//����������ʼ���ڵ�
struct Link* creat(struct Link* head, int n)
{
    struct Link* p = NULL, * q;
    for (int i = 0; i < n; i++)
    {
        q = (struct Link*)malloc(sizeof(struct Link));
        printf("�������%d������:", i + 1);
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
//������ĩβ�����½ڵ�
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
//ɾ���ڵ�
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
//����λ���޸Ľڵ�ֵ
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
        printf("������Χ\n");
}
// ����ֵ���ҽڵ�
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
// ��ӡ����
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