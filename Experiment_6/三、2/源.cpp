#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#include <string>
#define N 1
struct Student
{
	char id[10];
	char name[10];
	int chinese;
	int math;
	int english;
	float stu_sum;
};
Student stu[N];
//声明函数
void input(Student stu[], int n);
float average(Student stu[], int n);
int max(Student stu[], int n);

//主函数
int main(void)
{
	input(stu, N);
	printf("\n");
	printf("3门课总平均成绩为:\n%.3f\n", average(stu, N));
	int temp = max(stu, N);
	printf("最高分的学生的数据为:\n");
	printf("学号:%s\n姓名:%s\n语文成绩:%d\n数学成绩:%d\n英语成绩:%d\n平均分数:%.3f\n", stu[temp].id, stu[temp].name, stu[temp].chinese, stu[temp].math, stu[temp].english, stu[temp].stu_sum);
	return 0;
}

//定义函数
void input(Student stu[],int n)
{
	for (int i = 0; i <= N; i++)
	{
		printf("请输入第%d个学生的学号:", i + 1);
		scanf("%s", &stu[i].id);
		printf("请输入第%d个学生的姓名:", i + 1);
		scanf("%s", &stu[i].name);
		printf("请输入第%d个学生的成绩:", i + 1);
		scanf("%d %d %d", &stu[i].chinese, &stu[i].math, &stu[i].english);
	}
}
float average(Student stu[], int n)
{
	float stu_sum = 0;
	float sum = 0;
	float aver = 0;
	for (int i = 0; i <= N; i++)
	{
		stu_sum = stu[i].chinese + stu[i].math + stu[i].english;
		stu[i].stu_sum = stu_sum /3;
		sum += stu_sum;
	}
	aver = sum / 3 * (N + 1);
	return aver;
}
int max(Student stu[], int n)
{
	int max = stu[0].stu_sum;
	int temp = 0;
	for (int i = 1; i <= N; i++)
		if (stu[i].stu_sum > max)
		{
			max = stu[i].stu_sum;
			temp = i;
		}
	return temp;
}