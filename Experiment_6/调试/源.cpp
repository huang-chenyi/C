//建立一个结构体类型的数据库，
//结构体包括姓名、学号（学号以字符串的形式保存）、
//专业、宿舍信息（这些信息自己拟定）。
//要求调用子函数实现：
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 5 //（实验时，N = 5）
struct Stu
{
	char name[10];
	char id[20];
	char profe[10];
	char dorm[10];
	struct Stu* next;
};
//声明函数
struct Stu* creat(struct Stu* head);
struct Stu* printlist(struct Stu* head);
struct Stu* printfile(struct Stu* head);
struct Stu* scanfile(struct Stu* head);
//主函数
int main()
{   //创建一个存储学生信息的链表并输入数据
	struct Stu* head = NULL;
	head = creat(head);
	//按学号高低进行学生排序


}
//定义函数
struct Stu* creat(struct Stu* head)
{ //维护N（实验时，N = 5）个学生的个人信息；
  //1 采用结构体数组的形式输入数据；
	struct Stu* p = NULL, * q;
	for (int i = 0; i < N; i++)
	{
		q = (struct Stu*)malloc(sizeof(struct Stu));
		printf("请输入第%d个学生的信息(姓名,学号,专业,宿舍):", i + 1);
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
{ //2 完成按学号从低到高的排序并输出显示；
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{


		}

}
struct Stu* printfile(struct Stu* head, int n)
{ //3 按照学号顺序将所有学生的信息输出到文件中，文件名为student.dat；

}
struct Stu* scanfile(struct Stu* head, int n)
{ //4 读取文件内容，显示学生信息，要求每行只输出一个学生的信息。

}
