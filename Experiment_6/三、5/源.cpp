#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
struct Stu
{
	int num;
	char name[50];
	int year;
	int month;
	int day;
};
int main(void)
{   //��ʼ��
	Stu student[] = { {1020,"����",1995,12,21},{1022,"����",1996,10,1},{ 1026, "��һ",1998,5,16 } };
	FILE* filepoint = fopen("D:/�ϴ� NCU/�γ����/��̿�/���ʵ���/C++ʵ��ָ����-2020��/ʵ��6_�ṹ���빲������ļ�/students.txt","w");
	if (filepoint == NULL)
	{   //���ļ�ʧ��
		perror("���ļ�ʧ��!");
		return 1;
	}
	//д������
	for (int i = 0; i < 3; i++)
		fprintf(filepoint, "%d  %s  %d-%2d-%2d\n", student[i].num, student[i].name, student[i].year, student[i].month, student[i].day);
	fclose(filepoint);
	printf("����д��ɹ�!");
	return 0;
}