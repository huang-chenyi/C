#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#define stu_num 40 //ÿ���������40��ѧ��
struct Stu
{
    int id;    //ѧ��
    char name[8];  //����
    int score;     //�ɼ�
    char tips[20]; //��ע
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
    printf("������ѧ������(���40��):");
    scanf("%d", &num);
    //�������
    in_put(person, num);
    printf("\nѧ����Ϣ\n");
    out_put(person, num);
    //��ѯ
    int query_score;
    printf("\n������Ҫ��ѯ�ķ���:");
    scanf("%d", &query_score);
    find(person, num, query_score);
    // ����
    sort(person, num);
    printf("�����ĳɼ���\n");
    out_put(person, num);
    return 0;
}
//���庯��
void in_put(struct Stu p[], int num)
{  //���뺯��
    for (int i = 0; i < num; i++)
    {
        printf("�������%d��ѧ������Ϣѧ�š��������ɼ�����ע:", i + 1);
        scanf("%d %s %d %s", &p[i].id, &p[i].name, &p[i].score, &p[i].tips);
    }
}
void out_put(struct Stu p[], int num)
{   //�������
    for (int i = 0; i < num; i++)
        printf("ѧ��%d\n����:%s ѧ��:%d �ɼ�:%d\n��ע:%s\n", i + 1, p[i].name, p[i].id, p[i].score, p[i].tips);
}
void find(struct Stu p[], int num, int score)
{
    int count = 0;
    printf("����%d���ϻ����µ�ѧ����Ϣ:\n", score);
    for (int i = 0; i < num; i++)
        if (p[i].score > score || p[i].score < score)
        {   //�ж��Ƿ�ѧ���ɼ��Ƿ��������
            printf("ѧ��%d\n����:%s ѧ��:%d �ɼ�:%d\n��ע:%s\n", i + 1, p[i].name, p[i].id, p[i].score, p[i].tips);
            count++;
        }
    if (count == 0)
        printf("û���ҵ�����������ѧ����\n");
    printf("\n");
}
void sort(struct Stu p[], int num)
{   //ð������
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