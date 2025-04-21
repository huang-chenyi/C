#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

struct Data
{
	char name[10];
	int score;
	struct Data* next;
};

struct Data* scanfList(struct Data* stu, int n);
//void scanfList(struct Data **stu, int n);
void printfList(struct Data* stu);
void freeList(struct Data* stu);

int main()
{
	struct Data* stu = NULL;
	stu = scanfList(stu, 5);
	//scanfList(&stu, 5)
	printfList(stu);
	freeList(stu);
	return 0;
}

struct Data* scanfList(struct Data* stu, int n)
{
	struct Data *p = NULL, *q;
	for (int i = 0; i < n; i++)
	{
		q = (struct Data*)malloc(sizeof(struct Data));
		printf("输入第%d个学生的姓名及成绩:", i + 1);
		scanf("%s %d", q->name, &q->score);
		q->next = NULL;
		if (stu == NULL)
			stu = q;
		else
			p->next = q;
		p = q;
	}
	return stu;
}
//void scanfList(struct Data **stu, int n)
//{
//    struct Data *p = NULL, *q;
//    for (int i = 0; i < n; i++)
//    {
//        q = (struct Data*)malloc(sizeof(struct Data));
//        if (q == NULL) 
//		 {
//            printf("内存分配失败\n");
//            exit(1);
//        }
//        printf("输入第%d个学生的姓名及成绩:", i + 1);
//        scanf("%s %d", q->name, &q->score);
//        q->next = NULL;
//        if (*stu == NULL)
//            *stu = q;
//        else
//            p->next = q;
//        p = q;
//    }
//}
void printfList(struct Data* stu)
{
	struct Data* p = stu;
	while (p != NULL)
	{
		printf("学生姓名:%s  ", p->name);
		printf("学生成绩:%d\n", p->score);
		p = p->next;
	}
}
void freeList(struct Data* stu)
{
	struct Data* p;
	while (stu != NULL)
	{
		p = stu;
		stu = stu->next;
		free(p);
	}
}