#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//��дAverage����ʹ������Լ���n��ѧ��m�ſγ̵�ƽ���ɼ�����ʹ��ָ��ʵ�֣�
float Average(int* grade, int n, int m);
//������
int main()
{
	int n, m;
	printf("������ѧ������n:");
	scanf("%d", &n);
	printf("������γ���Ŀm:");
	scanf("%d", &m);
	int* grade = (int*)malloc(n * m * sizeof(int));
	printf("������ѧ���ɼ�:\n");
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%d", grade + i * m + j);
	float average = Average(grade, n, m);
	printf("ƽ���ɼ�Ϊ:%.2f", average);
	free(grade);
	return 0;
}
//���庯��
float Average(int* grade, int n, int m)
{
	float average;
	int sum = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			sum += *(grade + i * m + j);
	return average = sum / n / m;
}