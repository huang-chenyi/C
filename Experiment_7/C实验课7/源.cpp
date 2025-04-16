//  Jack 9116124 �����ݼ��� Q220423
//  Pitter 9116235 ��ѧ Q210647
//  Koby 9116111 Ӣ�� Q211222
//  Marry 9111024 ����ѧ Q222221
//  Smith 9112134 ���� Q211131
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 5 //��ʵ��ʱ��N = 5��
struct Stu
{
	char name[10];
	char id[9];
	char profe[20];
	char dorm[20];
};
//��������
void putin(struct Stu q[], int n);//��ȡ��Ϣ
void printlist(struct Stu q[], int n);//��ѧ������
int sort(char a[], char b[]);//�ж�ѧ�Ŵ�С
void printfile(struct Stu q[], int n);//������ļ�
void scanfile(struct Stu q[], int n);//��ȡ�ļ�
//������
int main()
{   //����һ���洢ѧ����Ϣ��������������
	struct Stu student[N] = { 0 };
	putin(student, N);
	//��ѧ�Ÿߵͽ���ѧ������
	printlist(student, N);
	//�����Ϣ���ļ�
	printfile(student, N);
	//��ȡ�ļ��д洢����Ϣ
	scanfile(student, N);
	return 0;
}
//���庯��
void putin(struct Stu q[], int n)
{   //ά��N��ʵ��ʱ��N = 5����ѧ���ĸ�����Ϣ��
    //1 ���ýṹ���������ʽ�������ݣ�
	for (int i = 0; i < n; i++)
	{
		printf("�������%d��ѧ������Ϣ(����,ѧ��,רҵ,����):", i + 1);
		scanf("%s %s %s %s", q[i].name, q[i].id, q[i].profe, q[i].dorm);
	}
}
void printlist(struct Stu q[], int n)
{ //2 ��ɰ�ѧ�Ŵӵ͵��ߵ����������ʾ��
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (sort(q[j].id, q[j + 1].id))
			{
				struct Stu temp = q[j];
				q[j] = q[j + 1];
				q[j + 1] = temp;
			}
		}
	printf("��ѧ�Ž��дӵ͵�������\nѧ����Ϣ\n");
	for (int i = 0; i < n; i++)
	{
		printf("����:%-10s ѧ��:%-10s רҵ:%-10s ����:%-10s\n", q[i].name,q[i].id, q[i].profe, q[i].dorm);
	}
}
int sort(char a[], char b[])
{ //��ѧ������
	for (int i = 0; i < 9; i++)
	{
		if (a[i] > b[i])
			return 1;
		if (a[i] < b[i])
			return 0;
	}
}
void printfile(struct Stu q[], int n)
{ //3 ����ѧ��˳������ѧ������Ϣ������ļ��У��ļ���Ϊstudent.dat��
	FILE *fp;
	if ((fp = fopen("student.dat", "w")) == NULL)
	{
		printf("�ļ��򿪴���");
		getchar();
		exit(1);
	}
	printf("���ڽ�ѧ������������ļ�:����\n");
	for (int i = 0; i < n; i++)
		fwrite(&q[i], sizeof(struct Stu), 1, fp);
	printf("����ɹ�!\n");
	fclose(fp);
}
void scanfile(struct Stu q[], int n)
{ //4 ��ȡ�ļ����ݣ���ʾѧ����Ϣ��Ҫ��ÿ��ֻ���һ��ѧ������Ϣ��
	printf("���ڴ��ļ��ж�ȡѧ����Ϣ����\n");
	FILE* fp;
	if ((fp = fopen("student.dat", "r")) == NULL)
	{
		printf("�ļ��򿪴���\n");
		exit(1);
	}
	printf("��ȡ�ɹ�!\nѧ����Ϣ:\n");
	for (int i = 0; i < n; i++)
	{
		if (fread(&q[i], sizeof(struct Stu), 1, fp) != 1)
		{
			printf("��ȡ�ļ�����\n");
			break;
		}
		printf("����:%-10s ѧ��:%-10s רҵ:%-10s ����:%-10s\n", q[i].name, q[i].id, q[i].profe, q[i].dorm);
	}
	fclose(fp);
}