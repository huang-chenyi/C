//����һ���ṹ�����͵����ݿ⣬
//�ṹ�����������ѧ�ţ�ѧ�����ַ�������ʽ���棩��
//רҵ��������Ϣ����Щ��Ϣ�Լ��ⶨ����
//Ҫ������Ӻ���ʵ�֣�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 5 //��ʵ��ʱ��N = 5��
struct Stu
{
	char name[10];
	char id[20];
	char profe[10];
	char dorm[10];
	struct Stu* next;
};
//��������
struct Stu* creat(struct Stu* head);
struct Stu* printlist(struct Stu* head);
struct Stu* printfile(struct Stu* head);
struct Stu* scanfile(struct Stu* head);
//������
int main()
{   //����һ���洢ѧ����Ϣ��������������
	struct Stu* head = NULL;
	head = creat(head);
	//��ѧ�Ÿߵͽ���ѧ������


}
//���庯��
struct Stu* creat(struct Stu* head)
{ //ά��N��ʵ��ʱ��N = 5����ѧ���ĸ�����Ϣ��
  //1 ���ýṹ���������ʽ�������ݣ�
	struct Stu* p = NULL, * q;
	for (int i = 0; i < N; i++)
	{
		q = (struct Stu*)malloc(sizeof(struct Stu));
		printf("�������%d��ѧ������Ϣ(����,ѧ��,רҵ,����):", i + 1);
		scanf("%s %s %s %s", &q->name, &q->id, &q->profe, &q->dorm);
		q->next = NULL;
		if (head == NULL)
			head = q;
		else
			p->next = q;
		p = q;
	}
	return head;
}
struct Stu* printlist(struct Stu* head, int n)
{ //2 ��ɰ�ѧ�Ŵӵ͵��ߵ����������ʾ��
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{


		}

}
struct Stu* printfile(struct Stu* head, int n)
{ //3 ����ѧ��˳������ѧ������Ϣ������ļ��У��ļ���Ϊstudent.dat��

}
struct Stu* scanfile(struct Stu* head, int n)
{ //4 ��ȡ�ļ����ݣ���ʾѧ����Ϣ��Ҫ��ÿ��ֻ���һ��ѧ������Ϣ��

}
