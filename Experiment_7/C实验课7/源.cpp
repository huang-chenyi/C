//  Jack 9116124 大数据技术 Q220423
//  Pitter 9116235 数学 Q210647
//  Koby 9116111 英语 Q211222
//  Marry 9111024 密码学 Q222221
//  Smith 9112134 生物 Q211131
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 5 //（实验时，N = 5）
struct Stu
{
	char name[10];
	char id[9];
	char profe[20];
	char dorm[20];
};
//声明函数
void putin(struct Stu q[], int n);//读取信息
void printlist(struct Stu q[], int n);//按学号排序
int sort(char a[], char b[]);//判断学号大小
void printfile(struct Stu q[], int n);//输出至文件
void scanfile(struct Stu q[], int n);//读取文件
//主函数
int main()
{   //创建一个存储学生信息的链表并输入数据
	struct Stu student[N] = { 0 };
	putin(student, N);
	//按学号高低进行学生排序
	printlist(student, N);
	//输出信息至文件
	printfile(student, N);
	//读取文件中存储的信息
	scanfile(student, N);
	return 0;
}
//定义函数
void putin(struct Stu q[], int n)
{   //维护N（实验时，N = 5）个学生的个人信息；
    //1 采用结构体数组的形式输入数据；
	for (int i = 0; i < n; i++)
	{
		printf("请输入第%d个学生的信息(姓名,学号,专业,宿舍):", i + 1);
		scanf("%s %s %s %s", q[i].name, q[i].id, q[i].profe, q[i].dorm);
	}
}
void printlist(struct Stu q[], int n)
{ //2 完成按学号从低到高的排序并输出显示；
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
	printf("按学号进行从低到高排序\n学生信息\n");
	for (int i = 0; i < n; i++)
	{
		printf("姓名:%-10s 学号:%-10s 专业:%-10s 宿舍:%-10s\n", q[i].name,q[i].id, q[i].profe, q[i].dorm);
	}
}
int sort(char a[], char b[])
{ //按学号排序
	for (int i = 0; i < 9; i++)
	{
		if (a[i] > b[i])
			return 1;
		if (a[i] < b[i])
			return 0;
	}
}
void printfile(struct Stu q[], int n)
{ //3 按照学号顺序将所有学生的信息输出到文件中，文件名为student.dat；
	FILE *fp;
	if ((fp = fopen("student.dat", "w")) == NULL)
	{
		printf("文件打开错误！");
		getchar();
		exit(1);
	}
	printf("正在将学生数据输出至文件:……\n");
	for (int i = 0; i < n; i++)
		fwrite(&q[i], sizeof(struct Stu), 1, fp);
	printf("输出成功!\n");
	fclose(fp);
}
void scanfile(struct Stu q[], int n)
{ //4 读取文件内容，显示学生信息，要求每行只输出一个学生的信息。
	printf("正在从文件中读取学生信息……\n");
	FILE* fp;
	if ((fp = fopen("student.dat", "r")) == NULL)
	{
		printf("文件打开错误！\n");
		exit(1);
	}
	printf("读取成功!\n学生信息:\n");
	for (int i = 0; i < n; i++)
	{
		if (fread(&q[i], sizeof(struct Stu), 1, fp) != 1)
		{
			printf("读取文件错误！\n");
			break;
		}
		printf("姓名:%-10s 学号:%-10s 专业:%-10s 宿舍:%-10s\n", q[i].name, q[i].id, q[i].profe, q[i].dorm);
	}
	fclose(fp);
}