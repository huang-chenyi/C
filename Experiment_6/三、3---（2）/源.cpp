#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define stu_num 40 //ÿ���������40��ѧ��
struct Stu 
{ //��������ڵ�ṹ��
    int id;            //ѧ��
    char name[8];      //����
    int score;         //�ɼ�
    char tips[20];     //��ע
    struct Stu* next;  //ָ����һ���ڵ��ָ��
};
//��������
struct Stu* createList(int num);
void in_put(struct Stu *head, int num);
void out_put(struct Stu *head, int num);
void find(struct Stu *head, int num, int score);
void sort(struct Stu **head);
void swap(struct Stu **a, struct Stu **b);
void insert_sorted(struct Stu **head, struct Stu *new_node);
struct Stu *create_node(int id, char *name, int score, char *tips);
//������
int main(void) 
{
    int num = 0;
    printf("������ѧ������(���40��):");
    scanf("%d", &num);
    // ����������������
    struct Stu* head = createList(num);
    in_put(head, num);
    // �����������
    printf("\nѧ����Ϣ\n");
    out_put(head, num);
    // ��ѯ
    int query_score;
    printf("\n������Ҫ��ѯ�ķ���:");
    scanf("%d", &query_score);
    find(head, num, query_score);
    // ����
    sort(&head);
    printf("�����ĳɼ���\n");
    out_put(head, num);
    // �ͷ������ڴ�
    struct Stu *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    return 0;
}
// ��������
struct Stu* createList(int num) 
{
    struct Stu* head = NULL;
    for (int i = 0; i < num; i++) 
    {
        char name[] = ""; // ���޸ĵ��ַ�����
        char tips[] = ""; // ���޸ĵ��ַ�����
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
// �����½ڵ�
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
// ���뺯��
void in_put(struct Stu *head, int num) 
{
    struct Stu *current = head;
    for (int i = 0; i < num; i++, current = current->next) 
    {
        printf("�������%d��ѧ������Ϣѧ�š��������ɼ�����ע:", i + 1);
        scanf("%d %s %d %s", &current->id, current->name, &current->score, current->tips);
    }
}
// �������
void out_put(struct Stu *head, int num) 
{
    struct Stu *current = head;
    for (int i = 0; i < num && current != NULL; i++, current = current->next)
        printf("ѧ��%d\n����:%s ѧ��:%d �ɼ�:%d\n��ע:%s\n", i + 1, current->name, current->id, current->score, current->tips);
}
// ���Һ���
void find(struct Stu *head, int num, int score) 
{
    int count = 0;
    printf("����%d���ϻ����µ�ѧ����Ϣ:\n", score);
    struct Stu *current = head;
    while (current != NULL && num-- > 0) {
        if (current->score > score || current->score < score)
        {
            printf("ѧ��%d\n����:%s ѧ��:%d �ɼ�:%d\n��ע:%s\n", current->id, current->name, current->id, current->score, current->tips);
            count++;
        }
        current = current->next;
    }
    if (count == 0)
        printf("û���ҵ�����������ѧ����\n");
    printf("\n");
}
// ����������
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
// ��������ĸ�������
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
// ��������
void swap(struct Stu **a, struct Stu **b)
{
    struct Stu *temp = *a;
    *a = *b;
    *b = temp;
}