#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//编写Average函数使得其可以计算n名学生m门课程的平均成绩。（使用指针实现）
float Average(int* grade, int n, int m);
//主函数
int main()
{
	int n, m;
	printf("请输入学生人数n:");
	scanf("%d", &n);
	printf("请输入课程数目m:");
	scanf("%d", &m);
	int* grade = (int*)malloc(n * m * sizeof(int));
	printf("请输入学生成绩:\n");
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%d", grade + i * m + j);
	float average = Average(grade, n, m);
	printf("平均成绩为:%.2f", average);
	free(grade);
	return 0;
}
//定义函数
float Average(int* grade, int n, int m)
{
	float average;
	int sum = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			sum += *(grade + i * m + j);
	return average = sum / n / m;
}